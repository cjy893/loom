#include "elf_image.h"

#include <algorithm>
#include <cerrno>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <limits>
#include <sstream>

namespace {

uint16_t read_u16(const std::vector<uint8_t>& bytes, std::size_t offset) {
    return static_cast<uint16_t>(bytes[offset]) |
           (static_cast<uint16_t>(bytes[offset + 1]) << 8);
}

uint32_t read_u32(const std::vector<uint8_t>& bytes, std::size_t offset) {
    return static_cast<uint32_t>(bytes[offset]) |
           (static_cast<uint32_t>(bytes[offset + 1]) << 8) |
           (static_cast<uint32_t>(bytes[offset + 2]) << 16) |
           (static_cast<uint32_t>(bytes[offset + 3]) << 24);
}

bool range_fits(std::size_t offset, std::size_t size,
                std::size_t container_size) {
    return offset <= container_size && size <= container_size - offset;
}

}  // namespace

bool ElfImage::load(const std::string& path, std::string* error) {
    std::ifstream input(path, std::ios::binary);
    if (!input) {
        *error = "cannot open '" + path + "': " + std::strerror(errno);
        return false;
    }

    input.seekg(0, std::ios::end);
    std::streamoff length = input.tellg();
    input.seekg(0, std::ios::beg);
    if (length < 0 ||
        static_cast<uint64_t>(length) >
            std::numeric_limits<std::size_t>::max()) {
        *error = "invalid ELF file length";
        return false;
    }

    std::vector<uint8_t> file(static_cast<std::size_t>(length));
    if (!file.empty())
        input.read(reinterpret_cast<char*>(file.data()), file.size());
    if (!input && !file.empty()) {
        *error = "failed while reading ELF file";
        return false;
    }

    constexpr std::size_t ELF32_HEADER_SIZE = 52;
    constexpr uint16_t EM_LOONGARCH = 258;
    if (file.size() < ELF32_HEADER_SIZE) {
        *error = "file is smaller than an ELF32 header";
        return false;
    }
    if (file[0] != 0x7f || file[1] != 'E' || file[2] != 'L' ||
        file[3] != 'F') {
        *error = "not an ELF file";
        return false;
    }
    if (file[4] != 1 || file[5] != 1) {
        *error = "only ELF32 little-endian images are supported";
        return false;
    }
    if (read_u16(file, 16) != 2) {
        *error = "ELF image is not an executable";
        return false;
    }
    if (read_u16(file, 18) != EM_LOONGARCH) {
        *error = "ELF image is not for LoongArch";
        return false;
    }

    uint32_t program_header_offset = read_u32(file, 28);
    uint16_t program_header_size = read_u16(file, 42);
    uint16_t program_header_count = read_u16(file, 44);
    if (program_header_size < 32) {
        *error = "ELF program header is smaller than ELF32_Phdr";
        return false;
    }

    uint64_t table_size =
        static_cast<uint64_t>(program_header_size) * program_header_count;
    if (table_size > std::numeric_limits<std::size_t>::max() ||
        !range_fits(program_header_offset,
                    static_cast<std::size_t>(table_size), file.size())) {
        *error = "ELF program-header table is outside the file";
        return false;
    }

    entry_ = read_u32(file, 24);
    segments_.clear();
    overlay_.clear();
    for (uint16_t index = 0; index < program_header_count; ++index) {
        std::size_t offset =
            program_header_offset +
            static_cast<std::size_t>(index) * program_header_size;
        if (read_u32(file, offset) != 1)
            continue;

        uint32_t file_offset = read_u32(file, offset + 4);
        uint32_t physical_address = read_u32(file, offset + 12);
        uint32_t file_size = read_u32(file, offset + 16);
        uint32_t memory_size = read_u32(file, offset + 20);
        uint32_t flags = read_u32(file, offset + 24);

        if (file_size > memory_size) {
            *error = "PT_LOAD file size exceeds memory size";
            return false;
        }
        if (!range_fits(file_offset, file_size, file.size())) {
            *error = "PT_LOAD data is outside the ELF file";
            return false;
        }
        if (static_cast<uint64_t>(physical_address) + memory_size >
            (uint64_t{1} << 32)) {
            *error = "PT_LOAD address range wraps around 32 bits";
            return false;
        }

        Segment segment;
        // Bare-metal images use p_paddr as the load-memory address.  In
        // particular, nscscc_perf copies .data from its LMA to p_vaddr in
        // start.S; preloading at p_vaddr skips that contract and leaves the
        // actual copy source empty.
        segment.address = physical_address;
        segment.file_size = file_size;
        segment.memory_size = memory_size;
        segment.flags = flags;
        segment.data.assign(memory_size, 0);
        std::copy_n(file.begin() + file_offset, file_size,
                    segment.data.begin());
        segments_.push_back(std::move(segment));
    }

    if (segments_.empty()) {
        *error = "ELF image has no PT_LOAD segment";
        return false;
    }
    if (!contains(entry_, 4)) {
        std::ostringstream message;
        message << "entry 0x" << std::hex << std::setw(8)
                << std::setfill('0') << entry_
                << " is outside all PT_LOAD segments";
        *error = message.str();
        return false;
    }
    return true;
}

bool ElfImage::contains(uint32_t address, std::size_t size) const {
    uint64_t first = address;
    uint64_t last = first + size;
    for (const Segment& segment : segments_) {
        uint64_t segment_first = segment.address;
        uint64_t segment_last =
            segment_first + segment.memory_size;
        if (first >= segment_first && last <= segment_last)
            return true;
    }
    return false;
}

uint8_t ElfImage::read_byte(uint32_t address) const {
    auto overlay = overlay_.find(address);
    if (overlay != overlay_.end())
        return overlay->second;

    for (auto segment = segments_.rbegin();
         segment != segments_.rend(); ++segment) {
        uint64_t offset =
            static_cast<uint64_t>(address) - segment->address;
        if (address >= segment->address &&
            offset < segment->memory_size) {
            return segment->data[static_cast<std::size_t>(offset)];
        }
    }
    return 0;
}

uint32_t ElfImage::read_word(uint32_t address) const {
    uint32_t value = 0;
    for (unsigned byte = 0; byte < 4; ++byte)
        value |= static_cast<uint32_t>(read_byte(address + byte))
                 << (8 * byte);
    return value;
}

void ElfImage::write_byte(uint32_t address, uint8_t value) {
    overlay_[address] = value;
}

void ElfImage::write_word_masked(uint32_t address, uint32_t value,
                                 uint8_t mask) {
    uint32_t base = address & ~uint32_t{3};
    for (unsigned byte = 0; byte < 4; ++byte) {
        if (mask & (1U << byte))
            write_byte(base + byte,
                       static_cast<uint8_t>(value >> (8 * byte)));
    }
}

bool DisassemblyIndex::load(const std::string& path) {
    std::ifstream input(path);
    if (!input)
        return false;

    lines_.clear();
    std::string line;
    while (std::getline(input, line)) {
        if (line.size() < 9 || line[8] != ':')
            continue;

        char* end = nullptr;
        unsigned long address =
            std::strtoul(line.c_str(), &end, 16);
        if (end != line.c_str() + 8 || address > 0xffffffffUL)
            continue;
        lines_[static_cast<uint32_t>(address)] = line;
    }
    return true;
}

const std::string* DisassemblyIndex::find(uint32_t address) const {
    auto line = lines_.find(address);
    return line == lines_.end() ? nullptr : &line->second;
}

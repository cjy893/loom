#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

class ElfImage {
public:
    struct Segment {
        uint32_t address = 0;
        uint32_t file_size = 0;
        uint32_t memory_size = 0;
        uint32_t flags = 0;
        std::vector<uint8_t> data;
    };

    bool load(const std::string& path, std::string* error);

    uint32_t entry() const { return entry_; }
    const std::vector<Segment>& segments() const { return segments_; }

    bool contains(uint32_t address, std::size_t size = 1) const;
    uint8_t read_byte(uint32_t address) const;
    uint32_t read_word(uint32_t address) const;
    void write_byte(uint32_t address, uint8_t value);
    void write_word_masked(uint32_t address, uint32_t value,
                           uint8_t mask);

private:
    uint32_t entry_ = 0;
    std::vector<Segment> segments_;
    std::unordered_map<uint32_t, uint8_t> overlay_;
};

class DisassemblyIndex {
public:
    bool load(const std::string& path);
    const std::string* find(uint32_t address) const;

private:
    std::unordered_map<uint32_t, std::string> lines_;
};

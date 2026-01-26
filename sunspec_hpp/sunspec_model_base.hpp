#pragma once
#include <cstdint>

class SunSpecModelBase {
public:
    const uint8_t* base_addr = nullptr;

    virtual ~SunSpecModelBase() = default;
    
    // Returns the Model ID
    virtual uint16_t get_id() const = 0;
    
    // Load data from buffer
    virtual void from_buffer(const uint8_t* buffer) {
        base_addr = buffer;
    }

    // Print all attributes (generated implementation)
    virtual void print_attributes() const {}
};

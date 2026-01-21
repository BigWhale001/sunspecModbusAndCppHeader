#pragma once
#include <cstdint>

class SunSpecModelBase {
public:
    virtual ~SunSpecModelBase() = default;
    
    // 返回该模型的 ID
    virtual uint16_t get_id() const = 0;
    
    // 从缓冲区加载数据
    virtual void from_buffer(const uint8_t* buffer) = 0;
};
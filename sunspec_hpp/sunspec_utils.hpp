#pragma once
#include <cstdint>

// Helper for endianness (Modbus Big-Endian to Host)
// 定义为 static inline 以防止多重定义链接错误
static inline uint16_t be16toh_custom(uint16_t v) {
    uint16_t x = 1; 
    if(*(char*)&x) return (v << 8) | (v >> 8); // Little Endian Host -> Swap
    else return v; // Big Endian Host -> Keep
}

static inline int16_t be16toh_custom_s(int16_t v) { 
    return (int16_t)be16toh_custom((uint16_t)v); 
}

static inline uint32_t be32toh_custom(uint32_t v) {
    uint32_t x = 1;
    if(*(char*)&x) return ((v & 0xFF000000) >> 24) | ((v & 0x00FF0000) >> 8) | ((v & 0x0000FF00) << 8) | ((v & 0x000000FF) << 24);
    else return v;
}
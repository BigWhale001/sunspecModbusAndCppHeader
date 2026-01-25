#ifndef ENDIAN_UTILS_HPP
#define ENDIAN_UTILS_HPP

#include <stdint.h>

// 辅助：大端转换宏 (模拟网络数据)
// 用于模拟 Modbus 寄存器中的数据存储格式。
// Modbus 协议规定数据传输使用大端序（Big Endian）。
#define HTONS(x) ((uint16_t)((((x) & 0xFF) << 8) | (((x) >> 8) & 0xFF)))
#define HTONL(x) ((uint32_t)((((x) & 0xFF) << 24) | (((x) & 0xFF00) << 8) | (((x) & 0xFF0000) >> 8) | (((x) >> 24) & 0xFF)))

#endif // ENDIAN_UTILS_H

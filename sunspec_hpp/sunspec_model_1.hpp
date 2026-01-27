// Generated C++ Header for Model 1
#pragma once

#include "sunspec_model_base.hpp"
#include "sunspec_utils.hpp"
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>

#pragma pack(push, 1)
struct Model1_Raw {
  uint16_t ID;
  uint16_t L;
  char Mn[32];
  char Md[32];
  char Opt[16];
  char Vr[16];
  char SN[32];
  uint16_t DA;
  uint16_t pad_67;
};
#pragma pack(pop)

class Model1 : public SunSpecModelBase {
public:
  static constexpr uint16_t ID = 1;
  Model1_Raw raw;

  uint16_t get_id() const override { return ID; }

  void from_buffer(const uint8_t *buffer) override {
    base_addr = buffer;
    std::memcpy(&raw, buffer, sizeof(Model1_Raw));
  }

  uint16_t get_raw_ID() const { return be16toh_custom(raw.ID); }

  uint16_t get_raw_L() const { return be16toh_custom(raw.L); }

  uint16_t get_raw_DA() const { return be16toh_custom(raw.DA); }

  void print_attributes() const override {
    std::cout << "    ID: " << get_raw_ID() << std::endl;
    std::cout << "    L: " << get_raw_L() << std::endl;
    std::cout << "    Mn: ";
    for (size_t i = 0; i < sizeof(raw.Mn) && raw.Mn[i] != 0; ++i)
      std::cout << raw.Mn[i];
    std::cout << std::endl;
    std::cout << "    Md: ";
    for (size_t i = 0; i < sizeof(raw.Md) && raw.Md[i] != 0; ++i)
      std::cout << raw.Md[i];
    std::cout << std::endl;
    std::cout << "    Opt: ";
    for (size_t i = 0; i < sizeof(raw.Opt) && raw.Opt[i] != 0; ++i)
      std::cout << raw.Opt[i];
    std::cout << std::endl;
    std::cout << "    Vr: ";
    for (size_t i = 0; i < sizeof(raw.Vr) && raw.Vr[i] != 0; ++i)
      std::cout << raw.Vr[i];
    std::cout << std::endl;
    std::cout << "    SN: ";
    for (size_t i = 0; i < sizeof(raw.SN) && raw.SN[i] != 0; ++i)
      std::cout << raw.SN[i];
    std::cout << std::endl;
    std::cout << "    DA: " << be16toh_custom(raw.DA) << std::endl;
    const uint8_t *cur_ptr = base_addr + sizeof(Model1_Raw);
  }
};

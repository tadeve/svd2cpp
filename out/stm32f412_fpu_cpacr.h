#pragma once

#include <cstdint>
#include <reg.h>

namespace FPU_CPACR{
namespace CPACR{
enum class CP_t : uint32_t {
    CP_0 = 0, // field has value 0x0
CP_1 = 1, // field has value 0x1
CP_2 = 2, // field has value 0x2
CP_3 = 3, // field has value 0x3
CP_4 = 4, // field has value 0x4
CP_5 = 5, // field has value 0x5
CP_6 = 6, // field has value 0x6
CP_7 = 7, // field has value 0x7
CP_8 = 8, // field has value 0x8
CP_9 = 9, // field has value 0x9
CP_10 = 10, // field has value 0xa
CP_11 = 11, // field has value 0xb
CP_12 = 12, // field has value 0xc
CP_13 = 13, // field has value 0xd
CP_14 = 14, // field has value 0xe
CP_15 = 15, // field has value 0xf

};
template <uint32_t address>
class CPACR : public ReadableWritable<address> {
   public:
    CPACR() : ReadableWritable<address>() {}
    CP_t CP(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<CP_t>(tmp);
}
void CP(CP_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
};
}
template<uint32_t base_address>
class FPU{
    public:
    // Coprocessor access controlregister
CPACR<base_address + 0> CPACR; 
};
}

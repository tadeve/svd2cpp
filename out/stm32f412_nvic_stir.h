#pragma once

#include <cstdint>
#include <reg.h>

namespace NVIC_STIR{
namespace STIR{

template <uint32_t address>
class STIR : public ReadableWritable<address> {
   public:
    STIR() : ReadableWritable<address>() {}
    uint16_t INTID(){
    uint32_t tmp = this->bits_masked(0x1ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INTID(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1ff);
}
};
}
template<uint32_t base_address>
class NVIC{
    public:
    // Software trigger interruptregister
STIR<base_address + 0> STIR; 
};
}

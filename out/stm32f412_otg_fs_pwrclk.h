#pragma once

#include <cstdint>
#include <reg.h>

namespace OTG_FS_PWRCLK{
namespace PCGCCTL{
enum class GATEHCLK_t : uint32_t {
    GATEHCLK_0 = 0, // field has value 0x0
GATEHCLK_1 = 1, // field has value 0x1

};
enum class PHYSUSP_t : uint32_t {
    PHYSUSP_0 = 0, // field has value 0x0
PHYSUSP_1 = 1, // field has value 0x1

};
enum class STPPCLK_t : uint32_t {
    STPPCLK_0 = 0, // field has value 0x0
STPPCLK_1 = 1, // field has value 0x1

};
template <uint32_t address>
class PCGCCTL : public ReadableWritable<address> {
   public:
    PCGCCTL() : ReadableWritable<address>() {}
    STPPCLK_t STPPCLK(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<STPPCLK_t>(tmp);
}
void STPPCLK(STPPCLK_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
GATEHCLK_t GATEHCLK(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<GATEHCLK_t>(tmp);
}
void GATEHCLK(GATEHCLK_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
PHYSUSP_t PHYSUSP(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<PHYSUSP_t>(tmp);
}
void PHYSUSP(PHYSUSP_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
};
}
template<uint32_t base_address>
class USB_OTG_FS{
    public:
    // OTG_FS power and clock gating controlregister (OTG_FS_PCGCCTL)
PCGCCTL<base_address + 0> PCGCCTL; 
};
}

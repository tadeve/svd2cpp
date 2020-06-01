#pragma once

#include <cstdint>
#include <reg.h>

namespace WWDG{
namespace CR{

enum class WDGA_t : uint32_t {
    Disabled = 0, // Watchdog disabled
Enabled = 1, // Watchdog enabled

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    WDGA_t WDGA(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<WDGA_t>(tmp);
}
void WDGA(WDGA_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
uint8_t T(){
    uint32_t tmp = this->bits_masked(0x7f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void T(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7f);
}
};
}
namespace CFR{

enum class EWIW_t : uint32_t {
    Enable = 1, // interrupt occurs whenever the counter reaches the value 0x40

};
enum class WDGTB_t : uint32_t {
    Div1 = 0, // Counter clock (PCLK1 div 4096) div 1
Div2 = 1, // Counter clock (PCLK1 div 4096) div 2
Div4 = 2, // Counter clock (PCLK1 div 4096) div 4
Div8 = 3, // Counter clock (PCLK1 div 4096) div 8

};
template <uint32_t address>
class CFR : public ReadableWritable<address> {
   public:
    CFR() : ReadableWritable<address>() {}
    
void EWI(EWIW_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
uint8_t W(){
    uint32_t tmp = this->bits_masked(0x7f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void W(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7f);
}
WDGTB_t WDGTB(){
    uint32_t tmp = this->bits_masked(0x180) >> 7;
    return reinterpret_cast<WDGTB_t>(tmp);
}
void WDGTB(WDGTB_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x180);
}
};
}
namespace SR{
enum class EWIFR_t : uint32_t {
    Pending = 1, // The EWI Interrupt Service Routine has been triggered
Finished = 0, // The EWI Interrupt Service Routine has been serviced

};
enum class EWIFW_t : uint32_t {
    Finished = 0, // The EWI Interrupt Service Routine has been serviced

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    EWIFR_t EWIF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<EWIFR_t>(tmp);
}
void EWIF(EWIFW_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
template<uint32_t base_address>
class WWDG{
    public:
    // Control register
CR<base_address + 0> CR; 
// Configuration register
CFR<base_address + 4> CFR; 
// Status register
SR<base_address + 8> SR; 
};
}

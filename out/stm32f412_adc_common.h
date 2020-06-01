#pragma once

#include <cstdint>
#include <reg.h>

namespace ADC_Common{
namespace CSR{
enum class EOC1_t : uint32_t {
    NotComplete = 0, // Conversion is not complete
Complete = 1, // Conversion complete

};
enum class JSTRT1_t : uint32_t {
    NotStarted = 0, // No injected channel conversion started
Started = 1, // Injected channel conversion has started

};
enum class OVR1_t : uint32_t {
    NoOverrun = 0, // No overrun occurred
Overrun = 1, // Overrun occurred

};
enum class STRT1_t : uint32_t {
    NotStarted = 0, // No regular channel conversion started
Started = 1, // Regular channel conversion has started

};
enum class JEOC1_t : uint32_t {
    NotComplete = 0, // Conversion is not complete
Complete = 1, // Conversion complete

};
enum class AWD1_t : uint32_t {
    NoEvent = 0, // No analog watchdog event occurred
Event = 1, // Analog watchdog event occurred

};
template <uint32_t address>
class CSR : public Readable<address> {
   public:
    CSR() : Readable<address>() {}
    OVR1_t OVR1(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<OVR1_t>(tmp);
}
void OVR1(OVR1_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
STRT1_t STRT1(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<STRT1_t>(tmp);
}
void STRT1(STRT1_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
JSTRT1_t JSTRT1(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<JSTRT1_t>(tmp);
}
void JSTRT1(JSTRT1_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
JEOC1_t JEOC1(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<JEOC1_t>(tmp);
}
void JEOC1(JEOC1_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
EOC1_t EOC1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EOC1_t>(tmp);
}
void EOC1(EOC1_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
AWD1_t AWD1(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<AWD1_t>(tmp);
}
void AWD1(AWD1_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CCR{
enum class ADCPRE_t : uint32_t {
    Div2 = 0, // PCLK2 divided by 2
Div4 = 1, // PCLK2 divided by 4
Div6 = 2, // PCLK2 divided by 6
Div8 = 3, // PCLK2 divided by 8

};
enum class TSVREFE_t : uint32_t {
    Disabled = 0, // Temperature sensor and V_REFINT channel disabled
Enabled = 1, // Temperature sensor and V_REFINT channel enabled

};
enum class VBATE_t : uint32_t {
    Disabled = 0, // V_BAT channel disabled
Enabled = 1, // V_BAT channel enabled

};
template <uint32_t address>
class CCR : public ReadableWritable<address> {
   public:
    CCR() : ReadableWritable<address>() {}
    TSVREFE_t TSVREFE(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<TSVREFE_t>(tmp);
}
void TSVREFE(TSVREFE_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
VBATE_t VBATE(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<VBATE_t>(tmp);
}
void VBATE(VBATE_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
ADCPRE_t ADCPRE(){
    uint32_t tmp = this->bits_masked(0x30000) >> 16;
    return reinterpret_cast<ADCPRE_t>(tmp);
}
void ADCPRE(ADCPRE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x30000);
}
};
}
template<uint32_t base_address>
class ADC{
    public:
    // ADC Common status register
CSR<base_address + 0> CSR; 
// ADC common control register
CCR<base_address + 4> CCR; 
};
}

#pragma once

#include <cstdint>
#include <reg.h>

namespace ADC1{
namespace SR{
enum class AWD_t : uint32_t {
    NoEvent = 0, // No analog watchdog event occurred
Event = 1, // Analog watchdog event occurred

};
enum class OVR_t : uint32_t {
    NoOverrun = 0, // No overrun occurred
Overrun = 1, // Overrun occurred

};
enum class STRT_t : uint32_t {
    NotStarted = 0, // No regular channel conversion started
Started = 1, // Regular channel conversion has started

};
enum class JEOC_t : uint32_t {
    NotComplete = 0, // Conversion is not complete
Complete = 1, // Conversion complete

};
enum class EOC_t : uint32_t {
    NotComplete = 0, // Conversion is not complete
Complete = 1, // Conversion complete

};
enum class JSTRT_t : uint32_t {
    NotStarted = 0, // No injected channel conversion started
Started = 1, // Injected channel conversion has started

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    OVR_t OVR(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<OVR_t>(tmp);
}
void OVR(OVR_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
STRT_t STRT(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<STRT_t>(tmp);
}
void STRT(STRT_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
JSTRT_t JSTRT(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<JSTRT_t>(tmp);
}
void JSTRT(JSTRT_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
JEOC_t JEOC(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<JEOC_t>(tmp);
}
void JEOC(JEOC_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
EOC_t EOC(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EOC_t>(tmp);
}
void EOC(EOC_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
AWD_t AWD(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<AWD_t>(tmp);
}
void AWD(AWD_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CR1{

enum class JEOCIE_t : uint32_t {
    Disabled = 0, // JEOC interrupt disabled
Enabled = 1, // JEOC interrupt enabled

};
enum class AWDEN_t : uint32_t {
    Disabled = 0, // Analog watchdog disabled on regular channels
Enabled = 1, // Analog watchdog enabled on regular channels

};
enum class OVRIE_t : uint32_t {
    Disabled = 0, // Overrun interrupt disabled
Enabled = 1, // Overrun interrupt enabled

};
enum class JAUTO_t : uint32_t {
    Disabled = 0, // Automatic injected group conversion disabled
Enabled = 1, // Automatic injected group conversion enabled

};
enum class RES_t : uint32_t {
    TwelveBit = 0, // 12-bit (15 ADCCLK cycles)
TenBit = 1, // 10-bit (13 ADCCLK cycles)
EightBit = 2, // 8-bit (11 ADCCLK cycles)
SixBit = 3, // 6-bit (9 ADCCLK cycles)

};
enum class JAWDEN_t : uint32_t {
    Disabled = 0, // Analog watchdog disabled on injected channels
Enabled = 1, // Analog watchdog enabled on injected channels

};
enum class DISCEN_t : uint32_t {
    Disabled = 0, // Discontinuous mode on regular channels disabled
Enabled = 1, // Discontinuous mode on regular channels enabled

};
enum class JDISCEN_t : uint32_t {
    Disabled = 0, // Discontinuous mode on injected channels disabled
Enabled = 1, // Discontinuous mode on injected channels enabled

};
enum class AWDIE_t : uint32_t {
    Disabled = 0, // Analogue watchdog interrupt disabled
Enabled = 1, // Analogue watchdog interrupt enabled

};
enum class EOCIE_t : uint32_t {
    Disabled = 0, // EOC interrupt disabled
Enabled = 1, // EOC interrupt enabled

};
enum class SCAN_t : uint32_t {
    Disabled = 0, // Scan mode disabled
Enabled = 1, // Scan mode enabled

};
enum class AWDSGL_t : uint32_t {
    AllChannels = 0, // Analog watchdog enabled on all channels
SingleChannel = 1, // Analog watchdog enabled on a single channel

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    OVRIE_t OVRIE(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<OVRIE_t>(tmp);
}
void OVRIE(OVRIE_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
RES_t RES(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<RES_t>(tmp);
}
void RES(RES_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x3000000);
}
AWDEN_t AWDEN(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<AWDEN_t>(tmp);
}
void AWDEN(AWDEN_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
JAWDEN_t JAWDEN(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<JAWDEN_t>(tmp);
}
void JAWDEN(JAWDEN_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
uint8_t DISCNUM(){
    uint32_t tmp = this->bits_masked(0xe000) >> 13;
    return reinterpret_cast<uint8_t>(tmp);
}
void DISCNUM(uint8_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0xe000);
}
JDISCEN_t JDISCEN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<JDISCEN_t>(tmp);
}
void JDISCEN(JDISCEN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
DISCEN_t DISCEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<DISCEN_t>(tmp);
}
void DISCEN(DISCEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
JAUTO_t JAUTO(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<JAUTO_t>(tmp);
}
void JAUTO(JAUTO_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
AWDSGL_t AWDSGL(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<AWDSGL_t>(tmp);
}
void AWDSGL(AWDSGL_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
SCAN_t SCAN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<SCAN_t>(tmp);
}
void SCAN(SCAN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
JEOCIE_t JEOCIE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<JEOCIE_t>(tmp);
}
void JEOCIE(JEOCIE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
AWDIE_t AWDIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<AWDIE_t>(tmp);
}
void AWDIE(AWDIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
EOCIE_t EOCIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<EOCIE_t>(tmp);
}
void EOCIE(EOCIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
uint8_t AWDCH(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void AWDCH(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace CR2{
enum class ALIGN_t : uint32_t {
    Right = 0, // Right alignment
Left = 1, // Left alignment

};
enum class ADON_t : uint32_t {
    Disabled = 0, // Disable ADC conversion and go to power down mode
Enabled = 1, // Enable ADC

};
enum class DMA_t : uint32_t {
    Disabled = 0, // DMA mode disabled
Enabled = 1, // DMA mode enabled

};
enum class JEXTEN_t : uint32_t {
    Disabled = 0, // Trigger detection disabled
RisingEdge = 1, // Trigger detection on the rising edge
FallingEdge = 2, // Trigger detection on the falling edge
BothEdges = 3, // Trigger detection on both the rising and falling edges

};
enum class CONT_t : uint32_t {
    Single = 0, // Single conversion mode
Continuous = 1, // Continuous conversion mode

};
enum class EXTSEL_t : uint32_t {
    TIM1CC1 = 0, // Timer 1 CC1 event
TIM1CC2 = 1, // Timer 1 CC2 event
TIM1CC3 = 2, // Timer 1 CC3 event
TIM2CC2 = 3, // Timer 2 CC2 event
TIM2CC3 = 4, // Timer 2 CC3 event
TIM2CC4 = 5, // Timer 2 CC4 event
TIM2TRGO = 6, // Timer 2 TRGO event

};
enum class EOCS_t : uint32_t {
    EachSequence = 0, // The EOC bit is set at the end of each sequence of regular conversions
EachConversion = 1, // The EOC bit is set at the end of each regular conversion

};
enum class SWSTARTW_t : uint32_t {
    Start = 1, // Starts conversion of regular channels

};
enum class DDS_t : uint32_t {
    Single = 0, // No new DMA request is issued after the last transfer
Continuous = 1, // DMA requests are issued as long as data are converted and DMA=1

};
enum class EXTEN_t : uint32_t {
    Disabled = 0, // Trigger detection disabled
RisingEdge = 1, // Trigger detection on the rising edge
FallingEdge = 2, // Trigger detection on the falling edge
BothEdges = 3, // Trigger detection on both the rising and falling edges

};
enum class JSWSTARTW_t : uint32_t {
    Start = 1, // Starts conversion of injected channels

};
enum class JEXTSEL_t : uint32_t {
    TIM1TRGO = 0, // Timer 1 TRGO event
TIM1CC4 = 1, // Timer 1 CC4 event
TIM2TRGO = 2, // Timer 2 TRGO event
TIM2CC1 = 3, // Timer 2 CC1 event
TIM3CC4 = 4, // Timer 3 CC4 event
TIM4TRGO = 5, // Timer 4 TRGO event
TIM8CC4 = 7, // Timer 8 CC4 event
TIM1TRGO2 = 8, // Timer 1 TRGO(2) event
TIM8TRGO = 9, // Timer 8 TRGO event
TIM8TRGO2 = 10, // Timer 8 TRGO(2) event
TIM3CC3 = 11, // Timer 3 CC3 event
TIM5TRGO = 12, // Timer 5 TRGO event
TIM3CC1 = 13, // Timer 3 CC1 event
TIM6TRGO = 14, // Timer 6 TRGO event

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    
void SWSTART(SWSTARTW_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
EXTEN_t EXTEN(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<EXTEN_t>(tmp);
}
void EXTEN(EXTEN_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
EXTSEL_t EXTSEL(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<EXTSEL_t>(tmp);
}
void EXTSEL(EXTSEL_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}

void JSWSTART(JSWSTARTW_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
JEXTEN_t JEXTEN(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<JEXTEN_t>(tmp);
}
void JEXTEN(JEXTEN_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
JEXTSEL_t JEXTSEL(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<JEXTSEL_t>(tmp);
}
void JEXTSEL(JEXTSEL_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
ALIGN_t ALIGN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<ALIGN_t>(tmp);
}
void ALIGN(ALIGN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
EOCS_t EOCS(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<EOCS_t>(tmp);
}
void EOCS(EOCS_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
DDS_t DDS(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<DDS_t>(tmp);
}
void DDS(DDS_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DMA_t DMA(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DMA_t>(tmp);
}
void DMA(DMA_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CONT_t CONT(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CONT_t>(tmp);
}
void CONT(CONT_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
ADON_t ADON(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ADON_t>(tmp);
}
void ADON(ADON_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace SMPR1{
enum class SMPx_x_t : uint32_t {
    Cycles3 = 0, // 3 cycles
Cycles15 = 1, // 15 cycles
Cycles28 = 2, // 28 cycles
Cycles56 = 3, // 56 cycles
Cycles84 = 4, // 84 cycles
Cycles112 = 5, // 112 cycles
Cycles144 = 6, // 144 cycles
Cycles480 = 7, // 480 cycles

};
template <uint32_t address>
class SMPR1 : public ReadableWritable<address> {
   public:
    SMPR1() : ReadableWritable<address>() {}
    SMPx_x_t SMPx_x(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<SMPx_x_t>(tmp);
}
void SMPx_x(SMPx_x_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace SMPR2{
enum class SMPx_x_t : uint32_t {
    Cycles3 = 0, // 3 cycles
Cycles15 = 1, // 15 cycles
Cycles28 = 2, // 28 cycles
Cycles56 = 3, // 56 cycles
Cycles84 = 4, // 84 cycles
Cycles112 = 5, // 112 cycles
Cycles144 = 6, // 144 cycles
Cycles480 = 7, // 480 cycles

};
template <uint32_t address>
class SMPR2 : public ReadableWritable<address> {
   public:
    SMPR2() : ReadableWritable<address>() {}
    SMPx_x_t SMPx_x(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<SMPx_x_t>(tmp);
}
void SMPx_x(SMPx_x_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace JOFR%s{

template <uint32_t address>
class JOFR%s : public ReadableWritable<address> {
   public:
    JOFR%s() : ReadableWritable<address>() {}
    uint16_t JOFFSET(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void JOFFSET(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
};
}
namespace HTR{

template <uint32_t address>
class HTR : public ReadableWritable<address> {
   public:
    HTR() : ReadableWritable<address>() {}
    uint16_t HT(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void HT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
};
}
namespace LTR{

template <uint32_t address>
class LTR : public ReadableWritable<address> {
   public:
    LTR() : ReadableWritable<address>() {}
    uint16_t LT(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void LT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
};
}
namespace SQR1{

template <uint32_t address>
class SQR1 : public ReadableWritable<address> {
   public:
    SQR1() : ReadableWritable<address>() {}
    uint8_t L(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void L(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
uint8_t SQ16(){
    uint32_t tmp = this->bits_masked(0xf8000) >> 15;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ16(uint8_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0xf8000);
}
uint8_t SQ15(){
    uint32_t tmp = this->bits_masked(0x7c00) >> 10;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ15(uint8_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x7c00);
}
uint8_t SQ14(){
    uint32_t tmp = this->bits_masked(0x3e0) >> 5;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ14(uint8_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x3e0);
}
uint8_t SQ13(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ13(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace SQR2{

template <uint32_t address>
class SQR2 : public ReadableWritable<address> {
   public:
    SQR2() : ReadableWritable<address>() {}
    uint8_t SQ12(){
    uint32_t tmp = this->bits_masked(0x3e000000) >> 25;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ12(uint8_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x3e000000);
}
uint8_t SQ11(){
    uint32_t tmp = this->bits_masked(0x1f00000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ11(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x1f00000);
}
uint8_t SQ10(){
    uint32_t tmp = this->bits_masked(0xf8000) >> 15;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ10(uint8_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0xf8000);
}
uint8_t SQ9(){
    uint32_t tmp = this->bits_masked(0x7c00) >> 10;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ9(uint8_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x7c00);
}
uint8_t SQ8(){
    uint32_t tmp = this->bits_masked(0x3e0) >> 5;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ8(uint8_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x3e0);
}
uint8_t SQ7(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ7(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace SQR3{

template <uint32_t address>
class SQR3 : public ReadableWritable<address> {
   public:
    SQR3() : ReadableWritable<address>() {}
    uint8_t SQ6(){
    uint32_t tmp = this->bits_masked(0x3e000000) >> 25;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ6(uint8_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x3e000000);
}
uint8_t SQ5(){
    uint32_t tmp = this->bits_masked(0x1f00000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ5(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x1f00000);
}
uint8_t SQ4(){
    uint32_t tmp = this->bits_masked(0xf8000) >> 15;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ4(uint8_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0xf8000);
}
uint8_t SQ3(){
    uint32_t tmp = this->bits_masked(0x7c00) >> 10;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ3(uint8_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x7c00);
}
uint8_t SQ2(){
    uint32_t tmp = this->bits_masked(0x3e0) >> 5;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ2(uint8_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x3e0);
}
uint8_t SQ1(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SQ1(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace JSQR{

template <uint32_t address>
class JSQR : public ReadableWritable<address> {
   public:
    JSQR() : ReadableWritable<address>() {}
    uint8_t JL(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void JL(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
uint8_t JSQ4(){
    uint32_t tmp = this->bits_masked(0xf8000) >> 15;
    return reinterpret_cast<uint8_t>(tmp);
}
void JSQ4(uint8_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0xf8000);
}
uint8_t JSQ3(){
    uint32_t tmp = this->bits_masked(0x7c00) >> 10;
    return reinterpret_cast<uint8_t>(tmp);
}
void JSQ3(uint8_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x7c00);
}
uint8_t JSQ2(){
    uint32_t tmp = this->bits_masked(0x3e0) >> 5;
    return reinterpret_cast<uint8_t>(tmp);
}
void JSQ2(uint8_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x3e0);
}
uint8_t JSQ1(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void JSQ1(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace JDR%s{

template <uint32_t address>
class JDR%s : public Readable<address> {
   public:
    JDR%s() : Readable<address>() {}
    uint16_t JDATA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void JDATA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public Readable<address> {
   public:
    DR() : Readable<address>() {}
    uint16_t DATA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void DATA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
template<uint32_t base_address>
class ADC{
    public:
    // status register
SR<base_address + 0> SR; 
// control register 1
CR1<base_address + 4> CR1; 
// control register 2
CR2<base_address + 8> CR2; 
// sample time register 1
SMPR1<base_address + 12> SMPR1; 
// sample time register 2
SMPR2<base_address + 16> SMPR2; 
// injected channel data offset registerx
JOFR%s<base_address + 20> JOFR%s; 
// watchdog higher thresholdregister
HTR<base_address + 36> HTR; 
// watchdog lower thresholdregister
LTR<base_address + 40> LTR; 
// regular sequence register 1
SQR1<base_address + 44> SQR1; 
// regular sequence register 2
SQR2<base_address + 48> SQR2; 
// regular sequence register 3
SQR3<base_address + 52> SQR3; 
// injected sequence register
JSQR<base_address + 56> JSQR; 
// injected data register x
JDR%s<base_address + 60> JDR%s; 
// regular data register
DR<base_address + 76> DR; 
};
}

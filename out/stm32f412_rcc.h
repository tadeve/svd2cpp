#pragma once

#include <cstdint>
#include <reg.h>

namespace RCC{
namespace CR{

enum class HSEBYP_t : uint32_t {
    NotBypassed = 0, // HSE crystal oscillator not bypassed
Bypassed = 1, // HSE crystal oscillator bypassed with external clock

};
enum class PLLI2SON_t : uint32_t {
    Off = 0, // Clock Off
On = 1, // Clock On

};
enum class PLLI2SRDYR_t : uint32_t {
    NotReady = 0, // Clock not ready
Ready = 1, // Clock ready

};
enum class CSSON_t : uint32_t {
    Off = 0, // Clock security system disabled (clock detector OFF)
On = 1, // Clock security system enable (clock detector ON if the HSE is ready, OFF if not)

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    PLLI2SRDYR_t PLLI2SRDY(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<PLLI2SRDYR_t>(tmp);
}
PLLI2SON_t PLLI2SON(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<PLLI2SON_t>(tmp);
}
void PLLI2SON(PLLI2SON_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
PLLI2SRDYR_t PLLRDY(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<PLLI2SRDYR_t>(tmp);
}
PLLI2SON_t PLLON(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<PLLI2SON_t>(tmp);
}
void PLLON(PLLI2SON_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
CSSON_t CSSON(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<CSSON_t>(tmp);
}
void CSSON(CSSON_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
HSEBYP_t HSEBYP(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<HSEBYP_t>(tmp);
}
void HSEBYP(HSEBYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
PLLI2SRDYR_t HSERDY(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<PLLI2SRDYR_t>(tmp);
}
PLLI2SON_t HSEON(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<PLLI2SON_t>(tmp);
}
void HSEON(PLLI2SON_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
uint8_t HSICAL(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
uint8_t HSITRIM(){
    uint32_t tmp = this->bits_masked(0xf8) >> 3;
    return reinterpret_cast<uint8_t>(tmp);
}
void HSITRIM(uint8_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0xf8);
}
PLLI2SRDYR_t HSIRDY(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<PLLI2SRDYR_t>(tmp);
}
PLLI2SON_t HSION(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PLLI2SON_t>(tmp);
}
void HSION(PLLI2SON_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace PLLCFGR{

enum class PLLSRC_t : uint32_t {
    HSI = 0, // HSI clock selected as PLL and PLLI2S clock entry
HSE = 1, // HSE oscillator clock selected as PLL and PLLI2S clock entry

};
enum class PLLP_t : uint32_t {
    Div2 = 0, // PLLP=2
Div4 = 1, // PLLP=4
Div6 = 2, // PLLP=6
Div8 = 3, // PLLP=8

};
template <uint32_t address>
class PLLCFGR : public ReadableWritable<address> {
   public:
    PLLCFGR() : ReadableWritable<address>() {}
    PLLSRC_t PLLSRC(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PLLSRC_t>(tmp);
}
void PLLSRC(PLLSRC_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
uint8_t PLLR(){
    uint32_t tmp = this->bits_masked(0x70000000) >> 28;
    return reinterpret_cast<uint8_t>(tmp);
}
void PLLR(uint8_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x70000000);
}
uint8_t PLLM(){
    uint32_t tmp = this->bits_masked(0x3f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void PLLM(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3f);
}
uint16_t PLLN(){
    uint32_t tmp = this->bits_masked(0x7fc0) >> 6;
    return reinterpret_cast<uint16_t>(tmp);
}
void PLLN(uint16_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x7fc0);
}
PLLP_t PLLP(){
    uint32_t tmp = this->bits_masked(0x30000) >> 16;
    return reinterpret_cast<PLLP_t>(tmp);
}
void PLLP(PLLP_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x30000);
}
uint8_t PLLQ(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void PLLQ(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
};
}
namespace CFGR{

enum class SW_t : uint32_t {
    HSI = 0, // HSI selected as system clock
HSE = 1, // HSE selected as system clock
PLL = 2, // PLL selected as system clock

};
enum class PPRE2_t : uint32_t {
    Div1 = 0, // HCLK not divided
Div2 = 4, // HCLK divided by 2
Div4 = 5, // HCLK divided by 4
Div8 = 6, // HCLK divided by 8
Div16 = 7, // HCLK divided by 16

};
enum class MCO2_t : uint32_t {
    SYSCLK = 0, // System clock (SYSCLK) selected
PLLI2S = 1, // PLLI2S clock selected
HSE = 2, // HSE oscillator clock selected
PLL = 3, // PLL clock selected

};
enum class I2SSRC_t : uint32_t {
    PLLI2S = 0, // PLLI2S clock used as I2S clock source
CKIN = 1, // External clock mapped on the I2S_CKIN pin used as I2S clock source

};
enum class SWSR_t : uint32_t {
    HSI = 0, // HSE oscillator used as system clock
HSE = 1, // HSI oscillator used as system clock
PLL = 2, // PLL used as system clock

};
enum class MCO1_t : uint32_t {
    HSI = 0, // HSI clock selected
LSE = 1, // LSE oscillator selected
HSE = 2, // HSE oscillator clock selected
PLL = 3, // PLL clock selected

};
enum class MCO2PRE_t : uint32_t {
    Div1 = 0, // No division
Div2 = 4, // Division by 2
Div3 = 5, // Division by 3
Div4 = 6, // Division by 4
Div5 = 7, // Division by 5

};
enum class HPRE_t : uint32_t {
    Div1 = 0, // SYSCLK not divided
Div2 = 8, // SYSCLK divided by 2
Div4 = 9, // SYSCLK divided by 4
Div8 = 10, // SYSCLK divided by 8
Div16 = 11, // SYSCLK divided by 16
Div64 = 12, // SYSCLK divided by 64
Div128 = 13, // SYSCLK divided by 128
Div256 = 14, // SYSCLK divided by 256
Div512 = 15, // SYSCLK divided by 512

};
template <uint32_t address>
class CFGR : public ReadableWritable<address> {
   public:
    CFGR() : ReadableWritable<address>() {}
    MCO2_t MCO2(){
    uint32_t tmp = this->bits_masked(0xc0000000) >> 30;
    return reinterpret_cast<MCO2_t>(tmp);
}
void MCO2(MCO2_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0xc0000000);
}
MCO2PRE_t MCO2PRE(){
    uint32_t tmp = this->bits_masked(0x38000000) >> 27;
    return reinterpret_cast<MCO2PRE_t>(tmp);
}
void MCO2PRE(MCO2PRE_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x38000000);
}
MCO2PRE_t MCO1PRE(){
    uint32_t tmp = this->bits_masked(0x7000000) >> 24;
    return reinterpret_cast<MCO2PRE_t>(tmp);
}
void MCO1PRE(MCO2PRE_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x7000000);
}
I2SSRC_t I2SSRC(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<I2SSRC_t>(tmp);
}
void I2SSRC(I2SSRC_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
MCO1_t MCO1(){
    uint32_t tmp = this->bits_masked(0x600000) >> 21;
    return reinterpret_cast<MCO1_t>(tmp);
}
void MCO1(MCO1_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x600000);
}
uint8_t RTCPRE(){
    uint32_t tmp = this->bits_masked(0x1f0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void RTCPRE(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x1f0000);
}
PPRE2_t PPRE2(){
    uint32_t tmp = this->bits_masked(0xe000) >> 13;
    return reinterpret_cast<PPRE2_t>(tmp);
}
void PPRE2(PPRE2_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0xe000);
}
PPRE2_t PPRE1(){
    uint32_t tmp = this->bits_masked(0x1c00) >> 10;
    return reinterpret_cast<PPRE2_t>(tmp);
}
void PPRE1(PPRE2_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x1c00);
}
HPRE_t HPRE(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<HPRE_t>(tmp);
}
void HPRE(HPRE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
SW_t SW(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<SW_t>(tmp);
}
void SW(SW_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
SWSR_t SWS(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<SWSR_t>(tmp);
}

};
}
namespace CIR{
enum class CSSCW_t : uint32_t {
    Clear = 1, // Clear CSSF flag

};
enum class PLLI2SRDYIE_t : uint32_t {
    Disabled = 0, // Interrupt disabled
Enabled = 1, // Interrupt enabled

};
enum class CSSFR_t : uint32_t {
    NotInterrupted = 0, // No clock security interrupt caused by HSE clock failure
Interrupted = 1, // Clock security interrupt caused by HSE clock failure

};
enum class PLLI2SRDYCW_t : uint32_t {
    Clear = 1, // Clear interrupt flag

};
enum class PLLI2SRDYFR_t : uint32_t {
    NotInterrupted = 0, // No clock ready interrupt
Interrupted = 1, // Clock ready interrupt

};
template <uint32_t address>
class CIR : public ReadableWritable<address> {
   public:
    CIR() : ReadableWritable<address>() {}
    void CSSC(CSSCW_t v){
   uint32_t tmp = v << 23;
   this->bits(v);
}
void PLLI2SRDYC(PLLI2SRDYCW_t v){
   uint32_t tmp = v << 21;
   this->bits(v);
}
void PLLRDYC(PLLI2SRDYCW_t v){
   uint32_t tmp = v << 20;
   this->bits(v);
}
void HSERDYC(PLLI2SRDYCW_t v){
   uint32_t tmp = v << 19;
   this->bits(v);
}
void HSIRDYC(PLLI2SRDYCW_t v){
   uint32_t tmp = v << 18;
   this->bits(v);
}
void LSERDYC(PLLI2SRDYCW_t v){
   uint32_t tmp = v << 17;
   this->bits(v);
}
void LSIRDYC(PLLI2SRDYCW_t v){
   uint32_t tmp = v << 16;
   this->bits(v);
}
PLLI2SRDYIE_t PLLI2SRDYIE(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<PLLI2SRDYIE_t>(tmp);
}
void PLLI2SRDYIE(PLLI2SRDYIE_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
PLLI2SRDYIE_t PLLRDYIE(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<PLLI2SRDYIE_t>(tmp);
}
void PLLRDYIE(PLLI2SRDYIE_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
PLLI2SRDYIE_t HSERDYIE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<PLLI2SRDYIE_t>(tmp);
}
void HSERDYIE(PLLI2SRDYIE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
PLLI2SRDYIE_t HSIRDYIE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<PLLI2SRDYIE_t>(tmp);
}
void HSIRDYIE(PLLI2SRDYIE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
PLLI2SRDYIE_t LSERDYIE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<PLLI2SRDYIE_t>(tmp);
}
void LSERDYIE(PLLI2SRDYIE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
PLLI2SRDYIE_t LSIRDYIE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<PLLI2SRDYIE_t>(tmp);
}
void LSIRDYIE(PLLI2SRDYIE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CSSFR_t CSSF(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<CSSFR_t>(tmp);
}
PLLI2SRDYFR_t PLLI2SRDYF(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<PLLI2SRDYFR_t>(tmp);
}
PLLI2SRDYFR_t PLLRDYF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<PLLI2SRDYFR_t>(tmp);
}
PLLI2SRDYFR_t HSERDYF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<PLLI2SRDYFR_t>(tmp);
}
PLLI2SRDYFR_t HSIRDYF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<PLLI2SRDYFR_t>(tmp);
}
PLLI2SRDYFR_t LSERDYF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<PLLI2SRDYFR_t>(tmp);
}
PLLI2SRDYFR_t LSIRDYF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PLLI2SRDYFR_t>(tmp);
}
};
}
namespace AHB1RSTR{
enum class GPIOARST_t : uint32_t {
    Reset = 1, // Reset the selected module

};
template <uint32_t address>
class AHB1RSTR : public ReadableWritable<address> {
   public:
    AHB1RSTR() : ReadableWritable<address>() {}
    GPIOARST_t GPIOARST(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOARST(GPIOARST_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
GPIOARST_t GPIOBRST(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOBRST(GPIOARST_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
GPIOARST_t GPIOCRST(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOCRST(GPIOARST_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
GPIOARST_t GPIODRST(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIODRST(GPIOARST_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
GPIOARST_t GPIOERST(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOERST(GPIOARST_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
GPIOARST_t GPIOFRST(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOFRST(GPIOARST_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
GPIOARST_t GPIOGRST(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOGRST(GPIOARST_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
GPIOARST_t GPIOHRST(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void GPIOHRST(GPIOARST_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
GPIOARST_t CRCRST(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void CRCRST(GPIOARST_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
GPIOARST_t DMA1RST(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void DMA1RST(GPIOARST_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
GPIOARST_t DMA2RST(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<GPIOARST_t>(tmp);
}
void DMA2RST(GPIOARST_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace AHB2RSTR{
enum class OTGFSRST_t : uint32_t {
    Reset = 1, // Reset the selected module

};
template <uint32_t address>
class AHB2RSTR : public ReadableWritable<address> {
   public:
    AHB2RSTR() : ReadableWritable<address>() {}
    OTGFSRST_t OTGFSRST(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<OTGFSRST_t>(tmp);
}
void OTGFSRST(OTGFSRST_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
OTGFSRST_t RNGRST(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<OTGFSRST_t>(tmp);
}
void RNGRST(OTGFSRST_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
};
}
namespace APB1RSTR{
enum class TIM2RST_t : uint32_t {
    Reset = 1, // Reset the selected module

};
template <uint32_t address>
class APB1RSTR : public ReadableWritable<address> {
   public:
    APB1RSTR() : ReadableWritable<address>() {}
    TIM2RST_t TIM2RST(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM2RST(TIM2RST_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TIM2RST_t TIM3RST(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM3RST(TIM2RST_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TIM2RST_t TIM4RST(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM4RST(TIM2RST_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TIM2RST_t TIM5RST(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM5RST(TIM2RST_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TIM2RST_t TIM6RST(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM6RST(TIM2RST_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TIM2RST_t TIM7RST(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM7RST(TIM2RST_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TIM2RST_t TIM12RST(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM12RST(TIM2RST_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TIM2RST_t TIM13RST(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM13RST(TIM2RST_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TIM2RST_t TIM14RST(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void TIM14RST(TIM2RST_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIM2RST_t WWDGRST(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void WWDGRST(TIM2RST_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIM2RST_t SPI2RST(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void SPI2RST(TIM2RST_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TIM2RST_t SPI3RST(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void SPI3RST(TIM2RST_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TIM2RST_t UART2RST(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void UART2RST(TIM2RST_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TIM2RST_t USART3RST(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void USART3RST(TIM2RST_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TIM2RST_t I2C1RST(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void I2C1RST(TIM2RST_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TIM2RST_t I2C2RST(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void I2C2RST(TIM2RST_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
TIM2RST_t I2C3RST(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void I2C3RST(TIM2RST_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
TIM2RST_t I2C4RST(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void I2C4RST(TIM2RST_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
TIM2RST_t CAN1RST(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void CAN1RST(TIM2RST_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
TIM2RST_t CAN2RST(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void CAN2RST(TIM2RST_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
TIM2RST_t PWRRST(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<TIM2RST_t>(tmp);
}
void PWRRST(TIM2RST_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
};
}
namespace APB2RSTR{
enum class TIM1RST_t : uint32_t {
    Reset = 1, // Reset the selected module

};
template <uint32_t address>
class APB2RSTR : public ReadableWritable<address> {
   public:
    APB2RSTR() : ReadableWritable<address>() {}
    TIM1RST_t TIM1RST(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void TIM1RST(TIM1RST_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TIM1RST_t TIM8RST(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void TIM8RST(TIM1RST_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TIM1RST_t USART1RST(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void USART1RST(TIM1RST_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TIM1RST_t USART6RST(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void USART6RST(TIM1RST_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TIM1RST_t ADCRST(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void ADCRST(TIM1RST_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIM1RST_t SDIORST(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void SDIORST(TIM1RST_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIM1RST_t SPI1RST(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void SPI1RST(TIM1RST_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TIM1RST_t SYSCFGRST(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void SYSCFGRST(TIM1RST_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TIM1RST_t TIM9RST(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void TIM9RST(TIM1RST_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TIM1RST_t TIM10RST(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void TIM10RST(TIM1RST_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TIM1RST_t TIM11RST(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void TIM11RST(TIM1RST_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TIM1RST_t DFSDMRST(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void DFSDMRST(TIM1RST_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
TIM1RST_t SPI4RST(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void SPI4RST(TIM1RST_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TIM1RST_t SPI5RST(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TIM1RST_t>(tmp);
}
void SPI5RST(TIM1RST_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
};
}
namespace AHB1ENR{
enum class GPIOAEN_t : uint32_t {
    Disabled = 0, // The selected clock is disabled
Enabled = 1, // The selected clock is enabled

};
template <uint32_t address>
class AHB1ENR : public ReadableWritable<address> {
   public:
    AHB1ENR() : ReadableWritable<address>() {}
    GPIOAEN_t GPIOAEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOAEN(GPIOAEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
GPIOAEN_t GPIOBEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOBEN(GPIOAEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
GPIOAEN_t GPIOCEN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOCEN(GPIOAEN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
GPIOAEN_t GPIODEN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIODEN(GPIOAEN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
GPIOAEN_t GPIOEEN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOEEN(GPIOAEN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
GPIOAEN_t GPIOFEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOFEN(GPIOAEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
GPIOAEN_t GPIOGEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOGEN(GPIOAEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
GPIOAEN_t GPIOHEN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void GPIOHEN(GPIOAEN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
GPIOAEN_t CRCEN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void CRCEN(GPIOAEN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
GPIOAEN_t DMA1EN(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void DMA1EN(GPIOAEN_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
GPIOAEN_t DMA2EN(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<GPIOAEN_t>(tmp);
}
void DMA2EN(GPIOAEN_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace AHB2ENR{
enum class OTGFSEN_t : uint32_t {
    Disabled = 0, // The selected clock is disabled
Enabled = 1, // The selected clock is enabled

};
template <uint32_t address>
class AHB2ENR : public ReadableWritable<address> {
   public:
    AHB2ENR() : ReadableWritable<address>() {}
    OTGFSEN_t OTGFSEN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<OTGFSEN_t>(tmp);
}
void OTGFSEN(OTGFSEN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
OTGFSEN_t RNGEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<OTGFSEN_t>(tmp);
}
void RNGEN(OTGFSEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
};
}
namespace APB1ENR{
enum class TIM2EN_t : uint32_t {
    Disabled = 0, // The selected clock is disabled
Enabled = 1, // The selected clock is enabled

};
template <uint32_t address>
class APB1ENR : public ReadableWritable<address> {
   public:
    APB1ENR() : ReadableWritable<address>() {}
    TIM2EN_t TIM2EN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM2EN(TIM2EN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TIM2EN_t TIM3EN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM3EN(TIM2EN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TIM2EN_t TIM4EN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM4EN(TIM2EN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TIM2EN_t TIM5EN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM5EN(TIM2EN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TIM2EN_t TIM6EN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM6EN(TIM2EN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TIM2EN_t TIM7EN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM7EN(TIM2EN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TIM2EN_t TIM12EN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM12EN(TIM2EN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TIM2EN_t TIM13EN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM13EN(TIM2EN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TIM2EN_t TIM14EN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void TIM14EN(TIM2EN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIM2EN_t WWDGEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void WWDGEN(TIM2EN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIM2EN_t SPI2EN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void SPI2EN(TIM2EN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TIM2EN_t SPI3EN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void SPI3EN(TIM2EN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TIM2EN_t USART2EN(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void USART2EN(TIM2EN_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TIM2EN_t USART3EN(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void USART3EN(TIM2EN_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TIM2EN_t I2C1EN(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void I2C1EN(TIM2EN_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TIM2EN_t I2C2EN(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void I2C2EN(TIM2EN_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
TIM2EN_t I2C3EN(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void I2C3EN(TIM2EN_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
TIM2EN_t I2C4EN(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void I2C4EN(TIM2EN_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
TIM2EN_t CAN1EN(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void CAN1EN(TIM2EN_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
TIM2EN_t CAN2EN(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void CAN2EN(TIM2EN_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
TIM2EN_t PWREN(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<TIM2EN_t>(tmp);
}
void PWREN(TIM2EN_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
};
}
namespace APB2ENR{
enum class TIM1EN_t : uint32_t {
    Disabled = 0, // The selected clock is disabled
Enabled = 1, // The selected clock is enabled

};
template <uint32_t address>
class APB2ENR : public ReadableWritable<address> {
   public:
    APB2ENR() : ReadableWritable<address>() {}
    TIM1EN_t TIM1EN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void TIM1EN(TIM1EN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TIM1EN_t TIM8EN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void TIM8EN(TIM1EN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TIM1EN_t USART1EN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void USART1EN(TIM1EN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TIM1EN_t USART6EN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void USART6EN(TIM1EN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TIM1EN_t ADC1EN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void ADC1EN(TIM1EN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIM1EN_t SDIOEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void SDIOEN(TIM1EN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIM1EN_t SPI1EN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void SPI1EN(TIM1EN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TIM1EN_t SPI4EN(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void SPI4EN(TIM1EN_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TIM1EN_t SYSCFGEN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void SYSCFGEN(TIM1EN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TIM1EN_t TIM9EN(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void TIM9EN(TIM1EN_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TIM1EN_t TIM10EN(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void TIM10EN(TIM1EN_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TIM1EN_t TIM11EN(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void TIM11EN(TIM1EN_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TIM1EN_t DFSDMEN(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void DFSDMEN(TIM1EN_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
TIM1EN_t SPI5EN(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TIM1EN_t>(tmp);
}
void SPI5EN(TIM1EN_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
};
}
namespace AHB1LPENR{
enum class GPIOALPEN_t : uint32_t {
    DisabledInSleep = 0, // Selected module is disabled during Sleep mode
EnabledInSleep = 1, // Selected module is enabled during Sleep mode

};
template <uint32_t address>
class AHB1LPENR : public ReadableWritable<address> {
   public:
    AHB1LPENR() : ReadableWritable<address>() {}
    GPIOALPEN_t GPIOALPEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOALPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
GPIOALPEN_t GPIOBLPEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOBLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
GPIOALPEN_t GPIOCLPEN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOCLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
GPIOALPEN_t GPIODLPEN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIODLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
GPIOALPEN_t GPIOELPEN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOELPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
GPIOALPEN_t GPIOFLPEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOFLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
GPIOALPEN_t GPIOGLPEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOGLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
GPIOALPEN_t GPIOHLPEN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void GPIOHLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
GPIOALPEN_t CRCLPEN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void CRCLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
GPIOALPEN_t FLITFLPEN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void FLITFLPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
GPIOALPEN_t SRAM1LPEN(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void SRAM1LPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
GPIOALPEN_t DMA1LPEN(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void DMA1LPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
GPIOALPEN_t DMA2LPEN(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<GPIOALPEN_t>(tmp);
}
void DMA2LPEN(GPIOALPEN_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace AHB2LPENR{
enum class OTGFSLPEN_t : uint32_t {
    DisabledInSleep = 0, // Selected module is disabled during Sleep mode
EnabledInSleep = 1, // Selected module is enabled during Sleep mode

};
template <uint32_t address>
class AHB2LPENR : public ReadableWritable<address> {
   public:
    AHB2LPENR() : ReadableWritable<address>() {}
    OTGFSLPEN_t OTGFSLPEN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<OTGFSLPEN_t>(tmp);
}
void OTGFSLPEN(OTGFSLPEN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
OTGFSLPEN_t RNGLPEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<OTGFSLPEN_t>(tmp);
}
void RNGLPEN(OTGFSLPEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
};
}
namespace APB1LPENR{
enum class TIM2LPEN_t : uint32_t {
    DisabledInSleep = 0, // Selected module is disabled during Sleep mode
EnabledInSleep = 1, // Selected module is enabled during Sleep mode

};
template <uint32_t address>
class APB1LPENR : public ReadableWritable<address> {
   public:
    APB1LPENR() : ReadableWritable<address>() {}
    TIM2LPEN_t TIM2LPEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM2LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TIM2LPEN_t TIM3LPEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM3LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TIM2LPEN_t TIM4LPEN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM4LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TIM2LPEN_t TIM5LPEN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM5LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TIM2LPEN_t TIM6LPEN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM6LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TIM2LPEN_t TIM7LPEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM7LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TIM2LPEN_t TIM12LPEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM12LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TIM2LPEN_t TIM13LPEN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM13LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TIM2LPEN_t TIM14LPEN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void TIM14LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIM2LPEN_t WWDGLPEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void WWDGLPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIM2LPEN_t SPI2LPEN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void SPI2LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TIM2LPEN_t SPI3LPEN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void SPI3LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TIM2LPEN_t USART2LPEN(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void USART2LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TIM2LPEN_t USART3LPEN(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void USART3LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TIM2LPEN_t I2C1LPEN(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void I2C1LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TIM2LPEN_t I2C2LPEN(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void I2C2LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
TIM2LPEN_t I2C3LPEN(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void I2C3LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
TIM2LPEN_t I2C4LPEN(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void I2C4LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
TIM2LPEN_t CAN1LPEN(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void CAN1LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
TIM2LPEN_t CAN2LPEN(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void CAN2LPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
TIM2LPEN_t PWRLPEN(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<TIM2LPEN_t>(tmp);
}
void PWRLPEN(TIM2LPEN_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
};
}
namespace APB2LPENR{
enum class TIM1LPEN_t : uint32_t {
    DisabledInSleep = 0, // Selected module is disabled during Sleep mode
EnabledInSleep = 1, // Selected module is enabled during Sleep mode

};
template <uint32_t address>
class APB2LPENR : public ReadableWritable<address> {
   public:
    APB2LPENR() : ReadableWritable<address>() {}
    TIM1LPEN_t TIM1LPEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void TIM1LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TIM1LPEN_t TIM8LPEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void TIM8LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TIM1LPEN_t USART1LPEN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void USART1LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TIM1LPEN_t USART6LPEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void USART6LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TIM1LPEN_t ADC1LPEN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void ADC1LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIM1LPEN_t SDIOLPEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void SDIOLPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIM1LPEN_t SPI1LPEN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void SPI1LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TIM1LPEN_t SPI4LPEN(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void SPI4LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TIM1LPEN_t SYSCFGLPEN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void SYSCFGLPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TIM1LPEN_t TIM9LPEN(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void TIM9LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TIM1LPEN_t TIM10LPEN(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void TIM10LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TIM1LPEN_t TIM11LPEN(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void TIM11LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TIM1LPEN_t DFSDMLPEN(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void DFSDMLPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
TIM1LPEN_t SPI5LPEN(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TIM1LPEN_t>(tmp);
}
void SPI5LPEN(TIM1LPEN_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
};
}
namespace BDCR{
enum class LSEON_t : uint32_t {
    Off = 0, // LSE oscillator Off
On = 1, // LSE oscillator On

};
enum class RTCSEL_t : uint32_t {
    NoClock = 0, // No clock
LSE = 1, // LSE oscillator clock used as RTC clock
LSI = 2, // LSI oscillator clock used as RTC clock
HSE = 3, // HSE oscillator clock divided by a prescaler used as RTC clock

};
enum class LSERDYR_t : uint32_t {
    NotReady = 0, // LSE oscillator not ready
Ready = 1, // LSE oscillator ready

};
enum class BDRST_t : uint32_t {
    Disabled = 0, // Reset not activated
Enabled = 1, // Reset the entire RTC domain

};
enum class LSEBYP_t : uint32_t {
    NotBypassed = 0, // LSE crystal oscillator not bypassed
Bypassed = 1, // LSE crystal oscillator bypassed with external clock

};
enum class RTCEN_t : uint32_t {
    Disabled = 0, // RTC clock disabled
Enabled = 1, // RTC clock enabled

};
template <uint32_t address>
class BDCR : public ReadableWritable<address> {
   public:
    BDCR() : ReadableWritable<address>() {}
    BDRST_t BDRST(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<BDRST_t>(tmp);
}
void BDRST(BDRST_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
RTCEN_t RTCEN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<RTCEN_t>(tmp);
}
void RTCEN(RTCEN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSEBYP_t LSEBYP(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<LSEBYP_t>(tmp);
}
void LSEBYP(LSEBYP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
LSERDYR_t LSERDY(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<LSERDYR_t>(tmp);
}
LSEON_t LSEON(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<LSEON_t>(tmp);
}
void LSEON(LSEON_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
RTCSEL_t RTCSEL(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<RTCSEL_t>(tmp);
}
void RTCSEL(RTCSEL_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
};
}
namespace CSR{
enum class LSION_t : uint32_t {
    Off = 0, // LSI oscillator Off
On = 1, // LSI oscillator On

};
enum class LSIRDYR_t : uint32_t {
    NotReady = 0, // LSI oscillator not ready
Ready = 1, // LSI oscillator ready

};
enum class LPWRRSTFR_t : uint32_t {
    NoReset = 0, // No reset has occured
Reset = 1, // A reset has occured

};
enum class RMVFW_t : uint32_t {
    Clear = 1, // Clears the reset flag

};
template <uint32_t address>
class CSR : public ReadableWritable<address> {
   public:
    CSR() : ReadableWritable<address>() {}
    LPWRRSTFR_t LPWRRSTF(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}

LPWRRSTFR_t WWDGRSTF(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}

LPWRRSTFR_t WDGRSTF(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}

LPWRRSTFR_t SFTRSTF(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}

LPWRRSTFR_t PORRSTF(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}

LPWRRSTFR_t PADRSTF(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}

LPWRRSTFR_t BORRSTF(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<LPWRRSTFR_t>(tmp);
}


void RMVF(RMVFW_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
LSIRDYR_t LSIRDY(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<LSIRDYR_t>(tmp);
}
LSION_t LSION(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<LSION_t>(tmp);
}
void LSION(LSION_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace SSCGR{

enum class SSCGEN_t : uint32_t {
    Disabled = 0, // Spread spectrum modulation disabled
Enabled = 1, // Spread spectrum modulation enabled

};
enum class SPREADSEL_t : uint32_t {
    Center = 0, // Center spread
Down = 1, // Down spread

};
template <uint32_t address>
class SSCGR : public ReadableWritable<address> {
   public:
    SSCGR() : ReadableWritable<address>() {}
    SSCGEN_t SSCGEN(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<SSCGEN_t>(tmp);
}
void SSCGEN(SSCGEN_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
SPREADSEL_t SPREADSEL(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<SPREADSEL_t>(tmp);
}
void SPREADSEL(SPREADSEL_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
uint16_t INCSTEP(){
    uint32_t tmp = this->bits_masked(0xfffe000) >> 13;
    return reinterpret_cast<uint16_t>(tmp);
}
void INCSTEP(uint16_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0xfffe000);
}
uint16_t MODPER(){
    uint32_t tmp = this->bits_masked(0x1fff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MODPER(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1fff);
}
};
}
namespace PLLI2SCFGR{

enum class PLLI2SSRC_t : uint32_t {
    HSE_HSI = 0, // HSE or HSI depending on PLLSRC of PLLCFGR
External = 1, // External AFI clock (CK_PLLI2S_EXT) selected as PLL clock entry

};
template <uint32_t address>
class PLLI2SCFGR : public ReadableWritable<address> {
   public:
    PLLI2SCFGR() : ReadableWritable<address>() {}
    uint8_t PLLI2SR(){
    uint32_t tmp = this->bits_masked(0x70000000) >> 28;
    return reinterpret_cast<uint8_t>(tmp);
}
void PLLI2SR(uint8_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x70000000);
}
uint16_t PLLI2SN(){
    uint32_t tmp = this->bits_masked(0x7fc0) >> 6;
    return reinterpret_cast<uint16_t>(tmp);
}
void PLLI2SN(uint16_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x7fc0);
}
PLLI2SSRC_t PLLI2SSRC(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PLLI2SSRC_t>(tmp);
}
void PLLI2SSRC(PLLI2SSRC_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
uint8_t PLLI2SQ(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void PLLI2SQ(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
uint8_t PLLI2SM(){
    uint32_t tmp = this->bits_masked(0x3f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void PLLI2SM(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3f);
}
};
}
namespace DCKCFGR{
enum class CKDFSDM1ASEL_t : uint32_t {
    I2S1 = 0, // CK_I2S_APB1 selected as audio clock
I2S2 = 1, // CK_I2S_APB2 selected as audio clock

};
enum class I2S1SRC_t : uint32_t {
    PLLI2SR = 0, // I2Sx clock frequency = f(PLLI2S_R)
I2S_CKIN = 1, // I2Sx clock frequency = I2S_CKIN Alternate function input frequency
PLLR = 2, // I2Sx clock frequency = f(PLL_R)
HSI_HSE = 3, // I2Sx clock frequency = HSI/HSE depends on PLLSRC bit (PLLCFGR[22])

};
enum class TIMPRE_t : uint32_t {
    Mul2 = 0, // If the APB prescaler is configured 1, TIMxCLK = PCLKx. Otherwise, TIMxCLK = 2xPCLKx
Mul4 = 1, // If the APB prescaler is configured 1, 2 or 4, TIMxCLK = HCLK. Otherwise, TIMxCLK = 4xPCLKx

};
enum class CKDFSDM1SEL_t : uint32_t {
    APB2 = 0, // APB2 clock used as Kernel clock
SYSCLK = 1, // System clock used as Kernel clock

};
template <uint32_t address>
class DCKCFGR : public ReadableWritable<address> {
   public:
    DCKCFGR() : ReadableWritable<address>() {}
    CKDFSDM1ASEL_t CKDFSDM1ASEL(){
    uint32_t tmp = this->bits_masked(0xf8000) >> 15;
    return reinterpret_cast<CKDFSDM1ASEL_t>(tmp);
}
void CKDFSDM1ASEL(CKDFSDM1ASEL_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0xf8000);
}
TIMPRE_t TIMPRE(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<TIMPRE_t>(tmp);
}
void TIMPRE(TIMPRE_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
I2S1SRC_t I2S1SRC(){
    uint32_t tmp = this->bits_masked(0x6000000) >> 25;
    return reinterpret_cast<I2S1SRC_t>(tmp);
}
void I2S1SRC(I2S1SRC_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x6000000);
}
I2S1SRC_t I2S2SRC(){
    uint32_t tmp = this->bits_masked(0x18000000) >> 27;
    return reinterpret_cast<I2S1SRC_t>(tmp);
}
void I2S2SRC(I2S1SRC_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x18000000);
}
CKDFSDM1SEL_t CKDFSDM1SEL(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CKDFSDM1SEL_t>(tmp);
}
void CKDFSDM1SEL(CKDFSDM1SEL_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace DCKCFGR2{
enum class SDIOSEL_t : uint32_t {
    CK48M = 0, // 48 MHz clock is selected as SD clock
SYSCLK = 1, // System clock is selected as SD clock

};
enum class CK48MSEL_t : uint32_t {
    PLL = 0, // 48MHz clock from PLL is selected
PLLSAI = 1, // 48MHz clock from PLLSAI is selected

};
enum class I2CFMP1SEL_t : uint32_t {
    APB = 0, // APB clock selected as FMPI2C1 clock
SYSCLK = 1, // System clock selected as FMPI2C1 clock
HSI = 2, // HSI clock selected as FMPI2C1 clock

};
template <uint32_t address>
class DCKCFGR2 : public ReadableWritable<address> {
   public:
    DCKCFGR2() : ReadableWritable<address>() {}
    I2CFMP1SEL_t I2CFMP1SEL(){
    uint32_t tmp = this->bits_masked(0xc00000) >> 22;
    return reinterpret_cast<I2CFMP1SEL_t>(tmp);
}
void I2CFMP1SEL(I2CFMP1SEL_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0xc00000);
}
CK48MSEL_t CK48MSEL(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<CK48MSEL_t>(tmp);
}
void CK48MSEL(CK48MSEL_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
SDIOSEL_t SDIOSEL(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<SDIOSEL_t>(tmp);
}
void SDIOSEL(SDIOSEL_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
};
}
namespace CKGATENR{
enum class AHB2APB1_CKEN_t : uint32_t {
    Enabled = 0, // The clock gating is enabled
Disabled = 1, // The clock gating is disabled, the clock is always enabled

};
template <uint32_t address>
class CKGATENR : public ReadableWritable<address> {
   public:
    CKGATENR() : ReadableWritable<address>() {}
    AHB2APB1_CKEN_t AHB2APB1_CKEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void AHB2APB1_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
AHB2APB1_CKEN_t AHB2APB2_CKEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void AHB2APB2_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
AHB2APB1_CKEN_t CM4DBG_CKEN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void CM4DBG_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
AHB2APB1_CKEN_t SPARE_CKEN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void SPARE_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
AHB2APB1_CKEN_t SRAM_CKEN(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void SRAM_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
AHB2APB1_CKEN_t FLITF_CKEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void FLITF_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
AHB2APB1_CKEN_t RCC_CKEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void RCC_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
AHB2APB1_CKEN_t EVTCL_CKEN(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<AHB2APB1_CKEN_t>(tmp);
}
void EVTCL_CKEN(AHB2APB1_CKEN_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
};
}
namespace AHB3RSTR{
enum class FSMCRST_t : uint32_t {
    Reset = 1, // Reset the selected module

};
template <uint32_t address>
class AHB3RSTR : public ReadableWritable<address> {
   public:
    AHB3RSTR() : ReadableWritable<address>() {}
    FSMCRST_t FSMCRST(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FSMCRST_t>(tmp);
}
void FSMCRST(FSMCRST_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
FSMCRST_t QSPIRST(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FSMCRST_t>(tmp);
}
void QSPIRST(FSMCRST_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
};
}
namespace AHB3ENR{
enum class FSMCEN_t : uint32_t {
    Disabled = 0, // The selected clock is disabled
Enabled = 1, // The selected clock is enabled

};
template <uint32_t address>
class AHB3ENR : public ReadableWritable<address> {
   public:
    AHB3ENR() : ReadableWritable<address>() {}
    FSMCEN_t FSMCEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FSMCEN_t>(tmp);
}
void FSMCEN(FSMCEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
FSMCEN_t QSPIEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FSMCEN_t>(tmp);
}
void QSPIEN(FSMCEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
};
}
template<uint32_t base_address>
class RCC{
    public:
    // clock control register
CR<base_address + 0> CR; 
// PLL configuration register
PLLCFGR<base_address + 4> PLLCFGR; 
// clock configuration register
CFGR<base_address + 8> CFGR; 
// clock interrupt register
CIR<base_address + 12> CIR; 
// AHB1 peripheral reset register
AHB1RSTR<base_address + 16> AHB1RSTR; 
// AHB2 peripheral reset register
AHB2RSTR<base_address + 20> AHB2RSTR; 
// APB1 peripheral reset register
APB1RSTR<base_address + 32> APB1RSTR; 
// APB2 peripheral reset register
APB2RSTR<base_address + 36> APB2RSTR; 
// AHB1 peripheral clock register
AHB1ENR<base_address + 48> AHB1ENR; 
// AHB2 peripheral clock enableregister
AHB2ENR<base_address + 52> AHB2ENR; 
// APB1 peripheral clock enableregister
APB1ENR<base_address + 64> APB1ENR; 
// APB2 peripheral clock enableregister
APB2ENR<base_address + 68> APB2ENR; 
// AHB1 peripheral clock enable in low powermode register
AHB1LPENR<base_address + 80> AHB1LPENR; 
// AHB2 peripheral clock enable in low powermode register
AHB2LPENR<base_address + 84> AHB2LPENR; 
// APB1 peripheral clock enable in low powermode register
APB1LPENR<base_address + 96> APB1LPENR; 
// APB2 peripheral clock enabled in low powermode register
APB2LPENR<base_address + 100> APB2LPENR; 
// Backup domain control register
BDCR<base_address + 112> BDCR; 
// clock control & statusregister
CSR<base_address + 116> CSR; 
// spread spectrum clock generationregister
SSCGR<base_address + 128> SSCGR; 
// PLLI2S configuration register
PLLI2SCFGR<base_address + 132> PLLI2SCFGR; 
// Dedicated Clock Configuration Register
DCKCFGR<base_address + 140> DCKCFGR; 
// Dedicated Clock Configuration Register
DCKCFGR2<base_address + 148> DCKCFGR2; 
// Clocks gated enable register
CKGATENR<base_address + 144> CKGATENR; 
// RCC AHB3 peripheral reset register
AHB3RSTR<base_address + 24> AHB3RSTR; 
// RCC AHB3 peripheral clock enable register
AHB3ENR<base_address + 56> AHB3ENR; 
};
}

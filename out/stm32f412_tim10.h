#pragma once

#include <cstdint>
#include <reg.h>

namespace TIM10{
namespace CR1{
enum class CKD_t : uint32_t {
    Div1 = 0, // t_DTS = t_CK_INT
Div2 = 1, // t_DTS = 2 × t_CK_INT
Div4 = 2, // t_DTS = 4 × t_CK_INT

};
enum class URS_t : uint32_t {
    AnyEvent = 0, // Any of counter overflow/underflow, setting UG, or update through slave mode, generates an update interrupt or DMA request
CounterOnly = 1, // Only counter overflow/underflow generates an update interrupt or DMA request

};
enum class CEN_t : uint32_t {
    Disabled = 0, // Counter disabled
Enabled = 1, // Counter enabled

};
enum class UDIS_t : uint32_t {
    Enabled = 0, // Update event enabled
Disabled = 1, // Update event disabled

};
enum class ARPE_t : uint32_t {
    Disabled = 0, // TIMx_APRR register is not buffered
Enabled = 1, // TIMx_APRR register is buffered

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    CKD_t CKD(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<CKD_t>(tmp);
}
void CKD(CKD_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
ARPE_t ARPE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<ARPE_t>(tmp);
}
void ARPE(ARPE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
URS_t URS(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<URS_t>(tmp);
}
void URS(URS_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
UDIS_t UDIS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<UDIS_t>(tmp);
}
void UDIS(UDIS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CEN_t CEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CEN_t>(tmp);
}
void CEN(CEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DIER{
enum class UIE_t : uint32_t {
    Disabled = 0, // Update interrupt disabled
Enabled = 1, // Update interrupt enabled

};
enum class CC1IE_t : uint32_t {
    CC1IE_0 = 0, // field has value 0x0
CC1IE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DIER : public ReadableWritable<address> {
   public:
    DIER() : ReadableWritable<address>() {}
    CC1IE_t CC1IE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CC1IE_t>(tmp);
}
void CC1IE(CC1IE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
UIE_t UIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<UIE_t>(tmp);
}
void UIE(UIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace SR{
enum class CC1OF_t : uint32_t {
    CC1OF_0 = 0, // field has value 0x0
CC1OF_1 = 1, // field has value 0x1

};
enum class UIF_t : uint32_t {
    Clear = 0, // No update occurred
UpdatePending = 1, // Update interrupt pending.

};
enum class CC1IF_t : uint32_t {
    CC1IF_0 = 0, // field has value 0x0
CC1IF_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    CC1OF_t CC1OF(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CC1OF_t>(tmp);
}
void CC1OF(CC1OF_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
CC1IF_t CC1IF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CC1IF_t>(tmp);
}
void CC1IF(CC1IF_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
UIF_t UIF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<UIF_t>(tmp);
}
void UIF(UIF_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace EGR{
enum class UG_t : uint32_t {
    Update = 1, // Re-initializes the timer counter and generates an update of the reigsters.

};
enum class CC1G_t : uint32_t {
    CC1G_0 = 0, // field has value 0x0
CC1G_1 = 1, // field has value 0x1

};
template <uint32_t address>
class EGR : public Writable<address> {
   public:
    EGR() : Writable<address>() {}
    CC1G_t CC1G(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CC1G_t>(tmp);
}
void CC1G(CC1G_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
UG_t UG(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<UG_t>(tmp);
}
void UG(UG_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CCMR1_Output{
enum class OC1FE_t : uint32_t {
    OC1FE_0 = 0, // field has value 0x0
OC1FE_1 = 1, // field has value 0x1

};
enum class OC1PE_t : uint32_t {
    OC1PE_0 = 0, // field has value 0x0
OC1PE_1 = 1, // field has value 0x1

};
enum class OC1M_t : uint32_t {
    OC1M_0 = 0, // field has value 0x0
OC1M_1 = 1, // field has value 0x1
OC1M_2 = 2, // field has value 0x2
OC1M_3 = 3, // field has value 0x3
OC1M_4 = 4, // field has value 0x4
OC1M_5 = 5, // field has value 0x5
OC1M_6 = 6, // field has value 0x6
OC1M_7 = 7, // field has value 0x7

};
enum class CC1S_t : uint32_t {
    CC1S_0 = 0, // field has value 0x0
CC1S_1 = 1, // field has value 0x1
CC1S_2 = 2, // field has value 0x2
CC1S_3 = 3, // field has value 0x3

};
template <uint32_t address>
class CCMR1_Output : public ReadableWritable<address> {
   public:
    CCMR1_Output() : ReadableWritable<address>() {}
    OC1M_t OC1M(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<OC1M_t>(tmp);
}
void OC1M(OC1M_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
OC1PE_t OC1PE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<OC1PE_t>(tmp);
}
void OC1PE(OC1PE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
OC1FE_t OC1FE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<OC1FE_t>(tmp);
}
void OC1FE(OC1FE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CC1S_t CC1S(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<CC1S_t>(tmp);
}
void CC1S(CC1S_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace CCMR1_Input{
enum class CC1S_t : uint32_t {
    CC1S_0 = 0, // field has value 0x0
CC1S_1 = 1, // field has value 0x1
CC1S_2 = 2, // field has value 0x2
CC1S_3 = 3, // field has value 0x3

};
enum class IC1PSC_t : uint32_t {
    IC1PSC_0 = 0, // field has value 0x0
IC1PSC_1 = 1, // field has value 0x1
IC1PSC_2 = 2, // field has value 0x2
IC1PSC_3 = 3, // field has value 0x3

};
enum class IC1F_t : uint32_t {
    IC1F_0 = 0, // field has value 0x0
IC1F_1 = 1, // field has value 0x1
IC1F_2 = 2, // field has value 0x2
IC1F_3 = 3, // field has value 0x3
IC1F_4 = 4, // field has value 0x4
IC1F_5 = 5, // field has value 0x5
IC1F_6 = 6, // field has value 0x6
IC1F_7 = 7, // field has value 0x7
IC1F_8 = 8, // field has value 0x8
IC1F_9 = 9, // field has value 0x9
IC1F_10 = 10, // field has value 0xa
IC1F_11 = 11, // field has value 0xb
IC1F_12 = 12, // field has value 0xc
IC1F_13 = 13, // field has value 0xd
IC1F_14 = 14, // field has value 0xe
IC1F_15 = 15, // field has value 0xf

};
template <uint32_t address>
class CCMR1_Input : public ReadableWritable<address> {
   public:
    CCMR1_Input() : ReadableWritable<address>() {}
    IC1F_t IC1F(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<IC1F_t>(tmp);
}
void IC1F(IC1F_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
IC1PSC_t IC1PSC(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<IC1PSC_t>(tmp);
}
void IC1PSC(IC1PSC_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
CC1S_t CC1S(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<CC1S_t>(tmp);
}
void CC1S(CC1S_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace CCER{
enum class CC1P_t : uint32_t {
    CC1P_0 = 0, // field has value 0x0
CC1P_1 = 1, // field has value 0x1

};
enum class CC1E_t : uint32_t {
    CC1E_0 = 0, // field has value 0x0
CC1E_1 = 1, // field has value 0x1

};
enum class CC1NP_t : uint32_t {
    CC1NP_0 = 0, // field has value 0x0
CC1NP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CCER : public ReadableWritable<address> {
   public:
    CCER() : ReadableWritable<address>() {}
    CC1NP_t CC1NP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CC1NP_t>(tmp);
}
void CC1NP(CC1NP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CC1P_t CC1P(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CC1P_t>(tmp);
}
void CC1P(CC1P_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CC1E_t CC1E(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CC1E_t>(tmp);
}
void CC1E(CC1E_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CNT{

template <uint32_t address>
class CNT : public ReadableWritable<address> {
   public:
    CNT() : ReadableWritable<address>() {}
    uint16_t CNT(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void CNT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace PSC{

template <uint32_t address>
class PSC : public ReadableWritable<address> {
   public:
    PSC() : ReadableWritable<address>() {}
    uint16_t PSC(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void PSC(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace ARR{

template <uint32_t address>
class ARR : public ReadableWritable<address> {
   public:
    ARR() : ReadableWritable<address>() {}
    uint16_t ARR(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void ARR(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace CCR%s{

template <uint32_t address>
class CCR%s : public ReadableWritable<address> {
   public:
    CCR%s() : ReadableWritable<address>() {}
    uint16_t CCR(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void CCR(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
template<uint32_t base_address>
class TIM{
    public:
    // control register 1
CR1<base_address + 0> CR1; 
// DMA/Interrupt enable register
DIER<base_address + 12> DIER; 
// status register
SR<base_address + 16> SR; 
// event generation register
EGR<base_address + 20> EGR; 
// capture/compare mode register 1 (outputmode)
CCMR1_Output<base_address + 24> CCMR1_Output; 
// capture/compare mode register 1 (inputmode)
CCMR1_Input<base_address + 24> CCMR1_Input; 
// capture/compare enableregister
CCER<base_address + 32> CCER; 
// counter
CNT<base_address + 36> CNT; 
// prescaler
PSC<base_address + 40> PSC; 
// auto-reload register
ARR<base_address + 44> ARR; 
// capture/compare register 1
CCR%s<base_address + 52> CCR%s; 
};
}

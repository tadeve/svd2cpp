#pragma once

#include <cstdint>
#include <reg.h>

namespace TIM6{
namespace CR1{
enum class URS_t : uint32_t {
    AnyEvent = 0, // Any of counter overflow/underflow, setting UG, or update through slave mode, generates an update interrupt or DMA request
CounterOnly = 1, // Only counter overflow/underflow generates an update interrupt or DMA request

};
enum class UIFREMAP_t : uint32_t {
    UIFREMAP_0 = 0, // field has value 0x0
UIFREMAP_1 = 1, // field has value 0x1

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
enum class OPM_t : uint32_t {
    Disabled = 0, // Counter is not stopped at update event
Enabled = 1, // Counter stops counting at the next update event (clearing the CEN bit)

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    CEN_t CEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CEN_t>(tmp);
}
void CEN(CEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
UDIS_t UDIS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<UDIS_t>(tmp);
}
void UDIS(UDIS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
URS_t URS(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<URS_t>(tmp);
}
void URS(URS_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
OPM_t OPM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<OPM_t>(tmp);
}
void OPM(OPM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
ARPE_t ARPE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<ARPE_t>(tmp);
}
void ARPE(ARPE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
UIFREMAP_t UIFREMAP(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<UIFREMAP_t>(tmp);
}
void UIFREMAP(UIFREMAP_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
};
}
namespace CR2{
enum class MMS_t : uint32_t {
    Reset = 0, // Use UG bit from TIMx_EGR register
Enable = 1, // Use CNT bit from TIMx_CEN register
Update = 2, // Use the update event

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    MMS_t MMS(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<MMS_t>(tmp);
}
void MMS(MMS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
};
}
namespace DIER{
enum class UDE_t : uint32_t {
    Disabled = 0, // Update DMA request disabled
Enabled = 1, // Update DMA request enabled

};
enum class UIE_t : uint32_t {
    Disabled = 0, // Update interrupt disabled
Enabled = 1, // Update interrupt enabled

};
template <uint32_t address>
class DIER : public ReadableWritable<address> {
   public:
    DIER() : ReadableWritable<address>() {}
    UDE_t UDE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<UDE_t>(tmp);
}
void UDE(UDE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
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
enum class UIF_t : uint32_t {
    Clear = 0, // No update occurred
UpdatePending = 1, // Update interrupt pending.

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
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
template <uint32_t address>
class EGR : public Writable<address> {
   public:
    EGR() : Writable<address>() {}
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
namespace CNT{

enum class UIFCPY_t : uint32_t {
    UIFCPY_0 = 0, // field has value 0x0
UIFCPY_1 = 1, // field has value 0x1

};
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
UIFCPY_t UIFCPY(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<UIFCPY_t>(tmp);
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
template<uint32_t base_address>
class TIM{
    public:
    // control register 1
CR1<base_address + 0> CR1; 
// control register 2
CR2<base_address + 4> CR2; 
// DMA/Interrupt enable register
DIER<base_address + 12> DIER; 
// status register
SR<base_address + 16> SR; 
// event generation register
EGR<base_address + 20> EGR; 
// counter
CNT<base_address + 36> CNT; 
// prescaler
PSC<base_address + 40> PSC; 
// auto-reload register
ARR<base_address + 44> ARR; 
};
}

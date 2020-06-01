#pragma once

#include <cstdint>
#include <reg.h>

namespace TIM3{
namespace CR1{
enum class UDIS_t : uint32_t {
    Enabled = 0, // Update event enabled
Disabled = 1, // Update event disabled

};
enum class URS_t : uint32_t {
    AnyEvent = 0, // Any of counter overflow/underflow, setting UG, or update through slave mode, generates an update interrupt or DMA request
CounterOnly = 1, // Only counter overflow/underflow generates an update interrupt or DMA request

};
enum class CEN_t : uint32_t {
    Disabled = 0, // Counter disabled
Enabled = 1, // Counter enabled

};
enum class CKD_t : uint32_t {
    Div1 = 0, // t_DTS = t_CK_INT
Div2 = 1, // t_DTS = 2 × t_CK_INT
Div4 = 2, // t_DTS = 4 × t_CK_INT

};
enum class ARPE_t : uint32_t {
    Disabled = 0, // TIMx_APRR register is not buffered
Enabled = 1, // TIMx_APRR register is buffered

};
enum class OPM_t : uint32_t {
    Disabled = 0, // Counter is not stopped at update event
Enabled = 1, // Counter stops counting at the next update event (clearing the CEN bit)

};
enum class DIR_t : uint32_t {
    Up = 0, // Counter used as upcounter
Down = 1, // Counter used as downcounter

};
enum class CMS_t : uint32_t {
    EdgeAligned = 0, // The counter counts up or down depending on the direction bit
CenterAligned1 = 1, // The counter counts up and down alternatively. Output compare interrupt flags are set only when the counter is counting down.
CenterAligned2 = 2, // The counter counts up and down alternatively. Output compare interrupt flags are set only when the counter is counting up.
CenterAligned3 = 3, // The counter counts up and down alternatively. Output compare interrupt flags are set both when the counter is counting up or down.

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
CMS_t CMS(){
    uint32_t tmp = this->bits_masked(0x60) >> 5;
    return reinterpret_cast<CMS_t>(tmp);
}
void CMS(CMS_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x60);
}
DIR_t DIR(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<DIR_t>(tmp);
}
void DIR(DIR_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
OPM_t OPM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<OPM_t>(tmp);
}
void OPM(OPM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
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
namespace CR2{
enum class MMS_t : uint32_t {
    Reset = 0, // The UG bit from the TIMx_EGR register is used as trigger output
Enable = 1, // The counter enable signal, CNT_EN, is used as trigger output
Update = 2, // The update event is selected as trigger output
ComparePulse = 3, // The trigger output send a positive pulse when the CC1IF flag it to be set, as soon as a capture or a compare match occurred
CompareOC1 = 4, // OC1REF signal is used as trigger output
CompareOC2 = 5, // OC2REF signal is used as trigger output
CompareOC3 = 6, // OC3REF signal is used as trigger output
CompareOC4 = 7, // OC4REF signal is used as trigger output

};
enum class CCDS_t : uint32_t {
    OnCompare = 0, // CCx DMA request sent when CCx event occurs
OnUpdate = 1, // CCx DMA request sent when update event occurs

};
enum class TI1S_t : uint32_t {
    Normal = 0, // The TIMx_CH1 pin is connected to TI1 input
XOR = 1, // The TIMx_CH1, CH2, CH3 pins are connected to TI1 input

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    TI1S_t TI1S(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TI1S_t>(tmp);
}
void TI1S(TI1S_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
MMS_t MMS(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<MMS_t>(tmp);
}
void MMS(MMS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
CCDS_t CCDS(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CCDS_t>(tmp);
}
void CCDS(CCDS_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
};
}
namespace SMCR{
enum class ETF_t : uint32_t {
    NoFilter = 0, // No filter, sampling is done at fDTS
FCK_INT_N2 = 1, // fSAMPLING=fCK_INT, N=2
FCK_INT_N4 = 2, // fSAMPLING=fCK_INT, N=4
FCK_INT_N8 = 3, // fSAMPLING=fCK_INT, N=8
FDTS_Div2_N6 = 4, // fSAMPLING=fDTS/2, N=6
FDTS_Div2_N8 = 5, // fSAMPLING=fDTS/2, N=8
FDTS_Div4_N6 = 6, // fSAMPLING=fDTS/4, N=6
FDTS_Div4_N8 = 7, // fSAMPLING=fDTS/4, N=8
FDTS_Div8_N6 = 8, // fSAMPLING=fDTS/8, N=6
FDTS_Div8_N8 = 9, // fSAMPLING=fDTS/8, N=8
FDTS_Div16_N5 = 10, // fSAMPLING=fDTS/16, N=5
FDTS_Div16_N6 = 11, // fSAMPLING=fDTS/16, N=6
FDTS_Div16_N8 = 12, // fSAMPLING=fDTS/16, N=8
FDTS_Div32_N5 = 13, // fSAMPLING=fDTS/32, N=5
FDTS_Div32_N6 = 14, // fSAMPLING=fDTS/32, N=6
FDTS_Div32_N8 = 15, // fSAMPLING=fDTS/32, N=8

};
enum class ECE_t : uint32_t {
    Disabled = 0, // External clock mode 2 disabled
Enabled = 1, // External clock mode 2 enabled. The counter is clocked by any active edge on the ETRF signal.

};
enum class MSM_t : uint32_t {
    NoSync = 0, // No action
Sync = 1, // The effect of an event on the trigger input (TRGI) is delayed to allow a perfect synchronization between the current timer and its slaves (through TRGO). It is useful if we want to synchronize several timers on a single external event.

};
enum class ETP_t : uint32_t {
    NotInverted = 0, // ETR is noninverted, active at high level or rising edge
Inverted = 1, // ETR is inverted, active at low level or falling edge

};
enum class TS_t : uint32_t {
    ITR0 = 0, // Internal Trigger 0 (ITR0)
ITR1 = 1, // Internal Trigger 1 (ITR1)
ITR2 = 2, // Internal Trigger 2 (ITR2)
TI1F_ED = 4, // TI1 Edge Detector (TI1F_ED)
TI1FP1 = 5, // Filtered Timer Input 1 (TI1FP1)
TI2FP2 = 6, // Filtered Timer Input 2 (TI2FP2)
ETRF = 7, // External Trigger input (ETRF)

};
enum class ETPS_t : uint32_t {
    Div1 = 0, // Prescaler OFF
Div2 = 1, // ETRP frequency divided by 2
Div4 = 2, // ETRP frequency divided by 4
Div8 = 3, // ETRP frequency divided by 8

};
enum class SMS_t : uint32_t {
    Disabled = 0, // Slave mode disabled - if CEN = ‘1 then the prescaler is clocked directly by the internal clock.
Encoder_Mode_1 = 1, // Encoder mode 1 - Counter counts up/down on TI2FP1 edge depending on TI1FP2 level.
Encoder_Mode_2 = 2, // Encoder mode 2 - Counter counts up/down on TI1FP2 edge depending on TI2FP1 level.
Encoder_Mode_3 = 3, // Encoder mode 3 - Counter counts up/down on both TI1FP1 and TI2FP2 edges depending on the level of the other input.
Reset_Mode = 4, // Reset Mode - Rising edge of the selected trigger input (TRGI) reinitializes the counter and generates an update of the registers.
Gated_Mode = 5, // Gated Mode - The counter clock is enabled when the trigger input (TRGI) is high. The counter stops (but is not reset) as soon as the trigger becomes low. Both start and stop of the counter are controlled.
Trigger_Mode = 6, // Trigger Mode - The counter starts at a rising edge of the trigger TRGI (but it is not reset). Only the start of the counter is controlled.
Ext_Clock_Mode = 7, // External Clock Mode 1 - Rising edges of the selected trigger (TRGI) clock the counter.

};
template <uint32_t address>
class SMCR : public ReadableWritable<address> {
   public:
    SMCR() : ReadableWritable<address>() {}
    ETP_t ETP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ETP_t>(tmp);
}
void ETP(ETP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
ECE_t ECE(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<ECE_t>(tmp);
}
void ECE(ECE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
ETPS_t ETPS(){
    uint32_t tmp = this->bits_masked(0x3000) >> 12;
    return reinterpret_cast<ETPS_t>(tmp);
}
void ETPS(ETPS_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x3000);
}
ETF_t ETF(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<ETF_t>(tmp);
}
void ETF(ETF_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
MSM_t MSM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<MSM_t>(tmp);
}
void MSM(MSM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TS_t TS(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<TS_t>(tmp);
}
void TS(TS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
SMS_t SMS(){
    uint32_t tmp = this->bits_masked(0x7) >> 0;
    return reinterpret_cast<SMS_t>(tmp);
}
void SMS(SMS_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7);
}
};
}
namespace DIER{
enum class TDE_t : uint32_t {
    Disabled = 0, // Trigger DMA request disabled
Enabled = 1, // Trigger DMA request enabled

};
enum class CC4DE_t : uint32_t {
    Disabled = 0, // CCx DMA request disabled
Enabled = 1, // CCx DMA request enabled

};
enum class UDE_t : uint32_t {
    Disabled = 0, // Update DMA request disabled
Enabled = 1, // Update DMA request enabled

};
enum class CC4IE_t : uint32_t {
    Disabled = 0, // CCx interrupt disabled
Enabled = 1, // CCx interrupt enabled

};
enum class UIE_t : uint32_t {
    Disabled = 0, // Update interrupt disabled
Enabled = 1, // Update interrupt enabled

};
enum class TIE_t : uint32_t {
    Disabled = 0, // Trigger interrupt disabled
Enabled = 1, // Trigger interrupt enabled

};
template <uint32_t address>
class DIER : public ReadableWritable<address> {
   public:
    DIER() : ReadableWritable<address>() {}
    TDE_t TDE(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TDE_t>(tmp);
}
void TDE(TDE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
CC4DE_t CC4DE(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<CC4DE_t>(tmp);
}
void CC4DE(CC4DE_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
CC4DE_t CC3DE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CC4DE_t>(tmp);
}
void CC3DE(CC4DE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CC4DE_t CC2DE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CC4DE_t>(tmp);
}
void CC2DE(CC4DE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CC4DE_t CC1DE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CC4DE_t>(tmp);
}
void CC1DE(CC4DE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
UDE_t UDE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<UDE_t>(tmp);
}
void UDE(UDE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TIE_t TIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TIE_t>(tmp);
}
void TIE(TIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
CC4IE_t CC4IE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CC4IE_t>(tmp);
}
void CC4IE(CC4IE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
CC4IE_t CC3IE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CC4IE_t>(tmp);
}
void CC3IE(CC4IE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CC4IE_t CC2IE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CC4IE_t>(tmp);
}
void CC2IE(CC4IE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CC4IE_t CC1IE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CC4IE_t>(tmp);
}
void CC1IE(CC4IE_t v){
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
enum class CC4IFR_t : uint32_t {
    Match = 1, // If CC1 is an output: The content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. If CC1 is an input: The counter value has been captured in TIMx_CCR1 register.

};
enum class CC4IFW_t : uint32_t {
    Clear = 0, // Clear flag

};
enum class CC4OFR_t : uint32_t {
    Overcapture = 1, // The counter value has been captured in TIMx_CCRx register while CCxIF flag was already set

};
enum class CC4OFW_t : uint32_t {
    Clear = 0, // Clear flag

};
enum class UIF_t : uint32_t {
    Clear = 0, // No update occurred
UpdatePending = 1, // Update interrupt pending.

};
enum class TIFR_t : uint32_t {
    NoTrigger = 0, // No trigger event occurred
Trigger = 1, // Trigger interrupt pending

};
enum class TIFW_t : uint32_t {
    Clear = 0, // Clear flag

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    CC4OFR_t CC4OF(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<CC4OFR_t>(tmp);
}
void CC4OF(CC4OFW_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
CC4OFR_t CC3OF(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CC4OFR_t>(tmp);
}
void CC3OF(CC4OFW_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CC4OFR_t CC2OF(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CC4OFR_t>(tmp);
}
void CC2OF(CC4OFW_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CC4OFR_t CC1OF(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CC4OFR_t>(tmp);
}
void CC1OF(CC4OFW_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
TIFR_t TIF(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TIFR_t>(tmp);
}
void TIF(TIFW_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
CC4IFR_t CC4IF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CC4IFR_t>(tmp);
}
void CC4IF(CC4IFW_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
CC4IFR_t CC3IF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CC4IFR_t>(tmp);
}
void CC3IF(CC4IFW_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CC4IFR_t CC2IF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CC4IFR_t>(tmp);
}
void CC2IF(CC4IFW_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CC4IFR_t CC1IF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CC4IFR_t>(tmp);
}
void CC1IF(CC4IFW_t v){
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
enum class TGW_t : uint32_t {
    Trigger = 1, // The TIF flag is set in TIMx_SR register. Related interrupt or DMA transfer can occur if enabled.

};
enum class UG_t : uint32_t {
    Update = 1, // Re-initializes the timer counter and generates an update of the reigsters.

};
enum class CC4GW_t : uint32_t {
    Trigger = 1, // If CC1 is an output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If CC1 is an input: The current value of the counter is captured in TIMx_CCR1 register.

};
template <uint32_t address>
class EGR : public Writable<address> {
   public:
    EGR() : Writable<address>() {}
    
void TG(TGW_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}

void CC4G(CC4GW_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}

void CC3G(CC4GW_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}

void CC2G(CC4GW_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}

void CC1G(CC4GW_t v){
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
enum class OC2FE_t : uint32_t {
    OC2FE_0 = 0, // field has value 0x0
OC2FE_1 = 1, // field has value 0x1

};
enum class OC1CE_t : uint32_t {
    OC1CE_0 = 0, // field has value 0x0
OC1CE_1 = 1, // field has value 0x1

};
enum class OC1PE_t : uint32_t {
    Disabled = 0, // Preload register on CCR1 disabled. New values written to CCR1 are taken into account immediately
Enabled = 1, // Preload register on CCR1 enabled. Preload value is loaded into active register on each update event

};
enum class CC2S_t : uint32_t {
    Output = 0, // CC2 channel is configured as output

};
enum class CC1S_t : uint32_t {
    Output = 0, // CC1 channel is configured as output

};
enum class OC2CE_t : uint32_t {
    OC2CE_0 = 0, // field has value 0x0
OC2CE_1 = 1, // field has value 0x1

};
enum class OC2PE_t : uint32_t {
    Disabled = 0, // Preload register on CCR2 disabled. New values written to CCR2 are taken into account immediately
Enabled = 1, // Preload register on CCR2 enabled. Preload value is loaded into active register on each update event

};
enum class OC2M_t : uint32_t {
    Frozen = 0, // The comparison between the output compare register TIMx_CCRy and the counter TIMx_CNT has no effect on the outputs
ActiveOnMatch = 1, // Set channel to active level on match. OCyREF signal is forced high when the counter matches the capture/compare register
InactiveOnMatch = 2, // Set channel to inactive level on match. OCyREF signal is forced low when the counter matches the capture/compare register
Toggle = 3, // OCyREF toggles when TIMx_CNT=TIMx_CCRy
ForceInactive = 4, // OCyREF is forced low
ForceActive = 5, // OCyREF is forced high
PwmMode1 = 6, // In upcounting, channel is active as long as TIMx_CNT<TIMx_CCRy else inactive. In downcounting, channel is inactive as long as TIMx_CNT>TIMx_CCRy else active
PwmMode2 = 7, // Inversely to PwmMode1

};
template <uint32_t address>
class CCMR1_Output : public ReadableWritable<address> {
   public:
    CCMR1_Output() : ReadableWritable<address>() {}
    OC2CE_t OC2CE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<OC2CE_t>(tmp);
}
void OC2CE(OC2CE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
OC2M_t OC2M(){
    uint32_t tmp = this->bits_masked(0x7000) >> 12;
    return reinterpret_cast<OC2M_t>(tmp);
}
void OC2M(OC2M_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7000);
}
OC2PE_t OC2PE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<OC2PE_t>(tmp);
}
void OC2PE(OC2PE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
OC2FE_t OC2FE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<OC2FE_t>(tmp);
}
void OC2FE(OC2FE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CC2S_t CC2S(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<CC2S_t>(tmp);
}
void CC2S(CC2S_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
OC1CE_t OC1CE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<OC1CE_t>(tmp);
}
void OC1CE(OC1CE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
OC2M_t OC1M(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<OC2M_t>(tmp);
}
void OC1M(OC2M_t v){
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

enum class CC2S_t : uint32_t {
    TI2 = 1, // CC2 channel is configured as input, IC2 is mapped on TI2
TI1 = 2, // CC2 channel is configured as input, IC2 is mapped on TI1
TRC = 3, // CC2 channel is configured as input, IC2 is mapped on TRC

};
enum class CC1S_t : uint32_t {
    TI1 = 1, // CC1 channel is configured as input, IC1 is mapped on TI1
TI2 = 2, // CC1 channel is configured as input, IC1 is mapped on TI2
TRC = 3, // CC1 channel is configured as input, IC1 is mapped on TRC

};
enum class IC1F_t : uint32_t {
    NoFilter = 0, // No filter, sampling is done at fDTS
FCK_INT_N2 = 1, // fSAMPLING=fCK_INT, N=2
FCK_INT_N4 = 2, // fSAMPLING=fCK_INT, N=4
FCK_INT_N8 = 3, // fSAMPLING=fCK_INT, N=8
FDTS_Div2_N6 = 4, // fSAMPLING=fDTS/2, N=6
FDTS_Div2_N8 = 5, // fSAMPLING=fDTS/2, N=8
FDTS_Div4_N6 = 6, // fSAMPLING=fDTS/4, N=6
FDTS_Div4_N8 = 7, // fSAMPLING=fDTS/4, N=8
FDTS_Div8_N6 = 8, // fSAMPLING=fDTS/8, N=6
FDTS_Div8_N8 = 9, // fSAMPLING=fDTS/8, N=8
FDTS_Div16_N5 = 10, // fSAMPLING=fDTS/16, N=5
FDTS_Div16_N6 = 11, // fSAMPLING=fDTS/16, N=6
FDTS_Div16_N8 = 12, // fSAMPLING=fDTS/16, N=8
FDTS_Div32_N5 = 13, // fSAMPLING=fDTS/32, N=5
FDTS_Div32_N6 = 14, // fSAMPLING=fDTS/32, N=6
FDTS_Div32_N8 = 15, // fSAMPLING=fDTS/32, N=8

};
enum class IC2PSC_t : uint32_t {
    IC2PSC_0 = 0, // field has value 0x0
IC2PSC_1 = 1, // field has value 0x1
IC2PSC_2 = 2, // field has value 0x2
IC2PSC_3 = 3, // field has value 0x3

};
enum class IC1PSC_t : uint32_t {
    IC1PSC_0 = 0, // field has value 0x0
IC1PSC_1 = 1, // field has value 0x1
IC1PSC_2 = 2, // field has value 0x2
IC1PSC_3 = 3, // field has value 0x3

};
template <uint32_t address>
class CCMR1_Input : public ReadableWritable<address> {
   public:
    CCMR1_Input() : ReadableWritable<address>() {}
    uint8_t IC2F(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<uint8_t>(tmp);
}
void IC2F(uint8_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
IC2PSC_t IC2PSC(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<IC2PSC_t>(tmp);
}
void IC2PSC(IC2PSC_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0xc00);
}
CC2S_t CC2S(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<CC2S_t>(tmp);
}
void CC2S(CC2S_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
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
namespace CCMR2_Output{
enum class OC4M_t : uint32_t {
    Frozen = 0, // The comparison between the output compare register TIMx_CCRy and the counter TIMx_CNT has no effect on the outputs
ActiveOnMatch = 1, // Set channel to active level on match. OCyREF signal is forced high when the counter matches the capture/compare register
InactiveOnMatch = 2, // Set channel to inactive level on match. OCyREF signal is forced low when the counter matches the capture/compare register
Toggle = 3, // OCyREF toggles when TIMx_CNT=TIMx_CCRy
ForceInactive = 4, // OCyREF is forced low
ForceActive = 5, // OCyREF is forced high
PwmMode1 = 6, // In upcounting, channel is active as long as TIMx_CNT<TIMx_CCRy else inactive. In downcounting, channel is inactive as long as TIMx_CNT>TIMx_CCRy else active
PwmMode2 = 7, // Inversely to PwmMode1

};
enum class OC4FE_t : uint32_t {
    OC4FE_0 = 0, // field has value 0x0
OC4FE_1 = 1, // field has value 0x1

};
enum class OC4CE_t : uint32_t {
    OC4CE_0 = 0, // field has value 0x0
OC4CE_1 = 1, // field has value 0x1

};
enum class OC4PE_t : uint32_t {
    Disabled = 0, // Preload register on CCR4 disabled. New values written to CCR4 are taken into account immediately
Enabled = 1, // Preload register on CCR4 enabled. Preload value is loaded into active register on each update event

};
enum class OC3CE_t : uint32_t {
    OC3CE_0 = 0, // field has value 0x0
OC3CE_1 = 1, // field has value 0x1

};
enum class OC3FE_t : uint32_t {
    OC3FE_0 = 0, // field has value 0x0
OC3FE_1 = 1, // field has value 0x1

};
enum class CC4S_t : uint32_t {
    Output = 0, // CC4 channel is configured as output

};
enum class OC3PE_t : uint32_t {
    Disabled = 0, // Preload register on CCR3 disabled. New values written to CCR3 are taken into account immediately
Enabled = 1, // Preload register on CCR3 enabled. Preload value is loaded into active register on each update event

};
enum class CC3S_t : uint32_t {
    Output = 0, // CC3 channel is configured as output

};
template <uint32_t address>
class CCMR2_Output : public ReadableWritable<address> {
   public:
    CCMR2_Output() : ReadableWritable<address>() {}
    OC4CE_t OC4CE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<OC4CE_t>(tmp);
}
void OC4CE(OC4CE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
OC4M_t OC4M(){
    uint32_t tmp = this->bits_masked(0x7000) >> 12;
    return reinterpret_cast<OC4M_t>(tmp);
}
void OC4M(OC4M_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7000);
}
OC4PE_t OC4PE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<OC4PE_t>(tmp);
}
void OC4PE(OC4PE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
OC4FE_t OC4FE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<OC4FE_t>(tmp);
}
void OC4FE(OC4FE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CC4S_t CC4S(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<CC4S_t>(tmp);
}
void CC4S(CC4S_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
OC3CE_t OC3CE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<OC3CE_t>(tmp);
}
void OC3CE(OC3CE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
OC4M_t OC3M(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<OC4M_t>(tmp);
}
void OC3M(OC4M_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
OC3PE_t OC3PE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<OC3PE_t>(tmp);
}
void OC3PE(OC3PE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
OC3FE_t OC3FE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<OC3FE_t>(tmp);
}
void OC3FE(OC3FE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CC3S_t CC3S(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<CC3S_t>(tmp);
}
void CC3S(CC3S_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace CCMR2_Input{

enum class CC3S_t : uint32_t {
    TI3 = 1, // CC3 channel is configured as input, IC3 is mapped on TI3
TI4 = 2, // CC3 channel is configured as input, IC3 is mapped on TI4
TRC = 3, // CC3 channel is configured as input, IC3 is mapped on TRC

};
enum class CC4S_t : uint32_t {
    TI4 = 1, // CC4 channel is configured as input, IC4 is mapped on TI4
TI3 = 2, // CC4 channel is configured as input, IC4 is mapped on TI3
TRC = 3, // CC4 channel is configured as input, IC4 is mapped on TRC

};
template <uint32_t address>
class CCMR2_Input : public ReadableWritable<address> {
   public:
    CCMR2_Input() : ReadableWritable<address>() {}
    uint8_t IC4F(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<uint8_t>(tmp);
}
void IC4F(uint8_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
uint8_t IC4PSC(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<uint8_t>(tmp);
}
void IC4PSC(uint8_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0xc00);
}
CC4S_t CC4S(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<CC4S_t>(tmp);
}
void CC4S(CC4S_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
uint8_t IC3F(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void IC3F(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
uint8_t IC3PSC(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<uint8_t>(tmp);
}
void IC3PSC(uint8_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
CC3S_t CC3S(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<CC3S_t>(tmp);
}
void CC3S(CC3S_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace CCER{
enum class CC3E_t : uint32_t {
    CC3E_0 = 0, // field has value 0x0
CC3E_1 = 1, // field has value 0x1

};
enum class CC2P_t : uint32_t {
    CC2P_0 = 0, // field has value 0x0
CC2P_1 = 1, // field has value 0x1

};
enum class CC3NP_t : uint32_t {
    CC3NP_0 = 0, // field has value 0x0
CC3NP_1 = 1, // field has value 0x1

};
enum class CC4NP_t : uint32_t {
    CC4NP_0 = 0, // field has value 0x0
CC4NP_1 = 1, // field has value 0x1

};
enum class CC2E_t : uint32_t {
    CC2E_0 = 0, // field has value 0x0
CC2E_1 = 1, // field has value 0x1

};
enum class CC4E_t : uint32_t {
    CC4E_0 = 0, // field has value 0x0
CC4E_1 = 1, // field has value 0x1

};
enum class CC1P_t : uint32_t {
    CC1P_0 = 0, // field has value 0x0
CC1P_1 = 1, // field has value 0x1

};
enum class CC1E_t : uint32_t {
    CC1E_0 = 0, // field has value 0x0
CC1E_1 = 1, // field has value 0x1

};
enum class CC2NP_t : uint32_t {
    CC2NP_0 = 0, // field has value 0x0
CC2NP_1 = 1, // field has value 0x1

};
enum class CC3P_t : uint32_t {
    CC3P_0 = 0, // field has value 0x0
CC3P_1 = 1, // field has value 0x1

};
enum class CC4P_t : uint32_t {
    CC4P_0 = 0, // field has value 0x0
CC4P_1 = 1, // field has value 0x1

};
enum class CC1NP_t : uint32_t {
    CC1NP_0 = 0, // field has value 0x0
CC1NP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CCER : public ReadableWritable<address> {
   public:
    CCER() : ReadableWritable<address>() {}
    CC4NP_t CC4NP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<CC4NP_t>(tmp);
}
void CC4NP(CC4NP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
CC4P_t CC4P(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<CC4P_t>(tmp);
}
void CC4P(CC4P_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
CC4E_t CC4E(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<CC4E_t>(tmp);
}
void CC4E(CC4E_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
CC3NP_t CC3NP(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CC3NP_t>(tmp);
}
void CC3NP(CC3NP_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CC3P_t CC3P(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CC3P_t>(tmp);
}
void CC3P(CC3P_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
CC3E_t CC3E(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<CC3E_t>(tmp);
}
void CC3E(CC3E_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CC2NP_t CC2NP(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<CC2NP_t>(tmp);
}
void CC2NP(CC2NP_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
CC2P_t CC2P(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<CC2P_t>(tmp);
}
void CC2P(CC2P_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
CC2E_t CC2E(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CC2E_t>(tmp);
}
void CC2E(CC2E_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
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
    uint16_t CNT_H(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void CNT_H(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
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
    uint16_t ARR_H(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void ARR_H(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
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
    uint16_t CCR1_H(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void CCR1_H(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
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
namespace DCR{

template <uint32_t address>
class DCR : public ReadableWritable<address> {
   public:
    DCR() : ReadableWritable<address>() {}
    uint8_t DBL(){
    uint32_t tmp = this->bits_masked(0x1f00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void DBL(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x1f00);
}
uint8_t DBA(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void DBA(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace DMAR{

template <uint32_t address>
class DMAR : public ReadableWritable<address> {
   public:
    DMAR() : ReadableWritable<address>() {}
    uint16_t DMAB(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void DMAB(uint16_t v){
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
// slave mode control register
SMCR<base_address + 8> SMCR; 
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
// capture/compare mode register 2 (outputmode)
CCMR2_Output<base_address + 28> CCMR2_Output; 
// capture/compare mode register 2 (inputmode)
CCMR2_Input<base_address + 28> CCMR2_Input; 
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
// DMA control register
DCR<base_address + 72> DCR; 
// DMA address for full transfer
DMAR<base_address + 76> DMAR; 
};
}

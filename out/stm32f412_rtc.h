#pragma once

#include <cstdint>
#include <reg.h>

namespace RTC{
namespace TR{

enum class PM_t : uint32_t {
    AM = 0, // AM or 24-hour format
PM = 1, // PM

};
template <uint32_t address>
class TR : public ReadableWritable<address> {
   public:
    TR() : ReadableWritable<address>() {}
    PM_t PM(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PM_t>(tmp);
}
void PM(PM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
uint8_t HT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void HT(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
uint8_t HU(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void HU(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
uint8_t MNT(){
    uint32_t tmp = this->bits_masked(0x7000) >> 12;
    return reinterpret_cast<uint8_t>(tmp);
}
void MNT(uint8_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7000);
}
uint8_t MNU(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void MNU(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
uint8_t ST(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void ST(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
uint8_t SU(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SU(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public ReadableWritable<address> {
   public:
    DR() : ReadableWritable<address>() {}
    uint8_t YT(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void YT(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
uint8_t YU(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void YU(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
uint8_t WDU(){
    uint32_t tmp = this->bits_masked(0xe000) >> 13;
    return reinterpret_cast<uint8_t>(tmp);
}
void WDU(uint8_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0xe000);
}
uint8_t MT(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<uint8_t>(tmp);
}
void MT(uint8_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
uint8_t MU(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void MU(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
uint8_t DT(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void DT(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
uint8_t DU(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void DU(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace CR{
enum class TSEDGE_t : uint32_t {
    RisingEdge = 0, // RTC_TS input rising edge generates a time-stamp event
FallingEdge = 1, // RTC_TS input falling edge generates a time-stamp event

};
enum class COE_t : uint32_t {
    Disabled = 0, // Calibration output disabled
Enabled = 1, // Calibration output enabled

};
enum class ALRBE_t : uint32_t {
    Disabled = 0, // Alarm B disabled
Enabled = 1, // Alarm B enabled

};
enum class COSEL_t : uint32_t {
    CalFreq_512Hz = 0, // Calibration output is 512 Hz (with default prescaler setting)
CalFreq_1Hz = 1, // Calibration output is 1 Hz (with default prescaler setting)

};
enum class SUB1HW_t : uint32_t {
    Sub1 = 1, // Subtracts 1 hour to the current time. This can be used for winter time change outside initialization mode

};
enum class WUCKSEL_t : uint32_t {
    Div16 = 0, // RTC/16 clock is selected
Div8 = 1, // RTC/8 clock is selected
Div4 = 2, // RTC/4 clock is selected
Div2 = 3, // RTC/2 clock is selected
ClockSpare = 4, // ck_spre (usually 1 Hz) clock is selected
ClockSpareWithOffset = 6, // ck_spre (usually 1 Hz) clock is selected and 2^16 is added to the WUT counter value

};
enum class REFCKON_t : uint32_t {
    Disabled = 0, // RTC_REFIN detection disabled
Enabled = 1, // RTC_REFIN detection enabled

};
enum class TSE_t : uint32_t {
    Disabled = 0, // Timestamp disabled
Enabled = 1, // Timestamp enabled

};
enum class DCE_t : uint32_t {
    DCE_0 = 0, // field has value 0x0
DCE_1 = 1, // field has value 0x1

};
enum class ALRAE_t : uint32_t {
    Disabled = 0, // Alarm A disabled
Enabled = 1, // Alarm A enabled

};
enum class ALRBIE_t : uint32_t {
    Disabled = 0, // Alarm B Interrupt disabled
Enabled = 1, // Alarm B Interrupt enabled

};
enum class WUTIE_t : uint32_t {
    Disabled = 0, // Wakeup timer interrupt disabled
Enabled = 1, // Wakeup timer interrupt enabled

};
enum class BKP_t : uint32_t {
    DST_Not_Changed = 0, // Daylight Saving Time change has not been performed
DST_Changed = 1, // Daylight Saving Time change has been performed

};
enum class ALRAIE_t : uint32_t {
    Disabled = 0, // Alarm A interrupt disabled
Enabled = 1, // Alarm A interrupt enabled

};
enum class TSIE_t : uint32_t {
    Disabled = 0, // Time-stamp Interrupt disabled
Enabled = 1, // Time-stamp Interrupt enabled

};
enum class BYPSHAD_t : uint32_t {
    ShadowReg = 0, // Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken from the shadow registers, which are updated once every two RTCCLK cycles
BypassShadowReg = 1, // Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken directly from the calendar counters

};
enum class OSEL_t : uint32_t {
    Disabled = 0, // Output disabled
AlarmA = 1, // Alarm A output enabled
AlarmB = 2, // Alarm B output enabled
Wakeup = 3, // Wakeup output enabled

};
enum class ADD1HW_t : uint32_t {
    Add1 = 1, // Adds 1 hour to the current time. This can be used for summer time change outside initialization mode

};
enum class FMT_t : uint32_t {
    Twenty_Four_Hour = 0, // 24 hour/day format
AM_PM = 1, // AM/PM hour format

};
enum class POL_t : uint32_t {
    High = 0, // The pin is high when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0])
Low = 1, // The pin is low when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0])

};
enum class WUTE_t : uint32_t {
    Disabled = 0, // Wakeup timer disabled
Enabled = 1, // Wakeup timer enabled

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    COE_t COE(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<COE_t>(tmp);
}
void COE(COE_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
OSEL_t OSEL(){
    uint32_t tmp = this->bits_masked(0x600000) >> 21;
    return reinterpret_cast<OSEL_t>(tmp);
}
void OSEL(OSEL_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x600000);
}
POL_t POL(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<POL_t>(tmp);
}
void POL(POL_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
COSEL_t COSEL(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<COSEL_t>(tmp);
}
void COSEL(COSEL_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
BKP_t BKP(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<BKP_t>(tmp);
}
void BKP(BKP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}

void SUB1H(SUB1HW_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}

void ADD1H(ADD1HW_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TSIE_t TSIE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TSIE_t>(tmp);
}
void TSIE(TSIE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
WUTIE_t WUTIE(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<WUTIE_t>(tmp);
}
void WUTIE(WUTIE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
ALRBIE_t ALRBIE(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ALRBIE_t>(tmp);
}
void ALRBIE(ALRBIE_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
ALRAIE_t ALRAIE(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<ALRAIE_t>(tmp);
}
void ALRAIE(ALRAIE_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TSE_t TSE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TSE_t>(tmp);
}
void TSE(TSE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
WUTE_t WUTE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<WUTE_t>(tmp);
}
void WUTE(WUTE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
ALRBE_t ALRBE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ALRBE_t>(tmp);
}
void ALRBE(ALRBE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
ALRAE_t ALRAE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<ALRAE_t>(tmp);
}
void ALRAE(ALRAE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
DCE_t DCE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<DCE_t>(tmp);
}
void DCE(DCE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
FMT_t FMT(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FMT_t>(tmp);
}
void FMT(FMT_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
BYPSHAD_t BYPSHAD(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<BYPSHAD_t>(tmp);
}
void BYPSHAD(BYPSHAD_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
REFCKON_t REFCKON(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<REFCKON_t>(tmp);
}
void REFCKON(REFCKON_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TSEDGE_t TSEDGE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TSEDGE_t>(tmp);
}
void TSEDGE(TSEDGE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
WUCKSEL_t WUCKSEL(){
    uint32_t tmp = this->bits_masked(0x7) >> 0;
    return reinterpret_cast<WUCKSEL_t>(tmp);
}
void WUCKSEL(WUCKSEL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7);
}
};
}
namespace ISR{
enum class TSFR_t : uint32_t {
    TimestampEvent = 1, // This flag is set by hardware when a time-stamp event occurs

};
enum class TSFW_t : uint32_t {
    Clear = 0, // This flag is cleared by software by writing 0

};
enum class WUTWFR_t : uint32_t {
    UpdateNotAllowed = 0, // Wakeup timer configuration update not allowed
UpdateAllowed = 1, // Wakeup timer configuration update allowed

};
enum class ALRAWFR_t : uint32_t {
    UpdateNotAllowed = 0, // Alarm update not allowed
UpdateAllowed = 1, // Alarm update allowed

};
enum class ALRBFR_t : uint32_t {
    Match = 1, // This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm B register (RTC_ALRMBR)

};
enum class ALRBFW_t : uint32_t {
    Clear = 0, // This flag is cleared by software by writing 0

};
enum class SHPFR_t : uint32_t {
    NoShiftPending = 0, // No shift operation is pending
ShiftPending = 1, // A shift operation is pending

};
enum class TSOVFR_t : uint32_t {
    Overflow = 1, // This flag is set by hardware when a time-stamp event occurs while TSF is already set

};
enum class TSOVFW_t : uint32_t {
    Clear = 0, // This flag is cleared by software by writing 0

};
enum class INITFR_t : uint32_t {
    NotAllowed = 0, // Calendar registers update is not allowed
Allowed = 1, // Calendar registers update is allowed

};
enum class WUTFR_t : uint32_t {
    Zero = 1, // This flag is set by hardware when the wakeup auto-reload counter reaches 0

};
enum class WUTFW_t : uint32_t {
    Clear = 0, // This flag is cleared by software by writing 0

};
enum class RSFR_t : uint32_t {
    NotSynced = 0, // Calendar shadow registers not yet synchronized
Synced = 1, // Calendar shadow registers synchronized

};
enum class RSFW_t : uint32_t {
    Clear = 0, // This flag is cleared by software by writing 0

};
enum class INITSR_t : uint32_t {
    NotInitalized = 0, // Calendar has not been initialized
Initalized = 1, // Calendar has been initialized

};
enum class ALRAFR_t : uint32_t {
    Match = 1, // This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm A register (RTC_ALRMAR)

};
enum class ALRAFW_t : uint32_t {
    Clear = 0, // This flag is cleared by software by writing 0

};
enum class TAMP1FR_t : uint32_t {
    Tampered = 1, // This flag is set by hardware when a tamper detection event is detected on the RTC_TAMPx input

};
enum class TAMP1FW_t : uint32_t {
    Clear = 0, // Flag cleared by software writing 0

};
enum class INIT_t : uint32_t {
    FreeRunningMode = 0, // Free running mode
InitMode = 1, // Initialization mode used to program time and date register (RTC_TR and RTC_DR), and prescaler register (RTC_PRER). Counters are stopped and start counting from the new value when INIT is reset.

};
enum class RECALPFR_t : uint32_t {
    Pending = 1, // The RECALPF status flag is automatically set to 1 when software writes to the RTC_CALR register, indicating that the RTC_CALR register is blocked. When the new calibration settings are taken into account, this bit returns to 0

};
template <uint32_t address>
class ISR : public ReadableWritable<address> {
   public:
    ISR() : ReadableWritable<address>() {}
    ALRAWFR_t ALRAWF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ALRAWFR_t>(tmp);
}
ALRAWFR_t ALRBWF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<ALRAWFR_t>(tmp);
}
WUTWFR_t WUTWF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<WUTWFR_t>(tmp);
}
SHPFR_t SHPF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<SHPFR_t>(tmp);
}

INITSR_t INITS(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<INITSR_t>(tmp);
}
RSFR_t RSF(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<RSFR_t>(tmp);
}
void RSF(RSFW_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
INITFR_t INITF(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<INITFR_t>(tmp);
}
INIT_t INIT(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<INIT_t>(tmp);
}
void INIT(INIT_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
ALRAFR_t ALRAF(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<ALRAFR_t>(tmp);
}
void ALRAF(ALRAFW_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
ALRBFR_t ALRBF(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ALRBFR_t>(tmp);
}
void ALRBF(ALRBFW_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
WUTFR_t WUTF(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<WUTFR_t>(tmp);
}
void WUTF(WUTFW_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
TSFR_t TSF(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TSFR_t>(tmp);
}
void TSF(TSFW_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TSOVFR_t TSOVF(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TSOVFR_t>(tmp);
}
void TSOVF(TSOVFW_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TAMP1FR_t TAMP1F(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<TAMP1FR_t>(tmp);
}
void TAMP1F(TAMP1FW_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TAMP1FR_t TAMP2F(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TAMP1FR_t>(tmp);
}
void TAMP2F(TAMP1FW_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
RECALPFR_t RECALPF(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<RECALPFR_t>(tmp);
}
};
}
namespace PRER{

template <uint32_t address>
class PRER : public ReadableWritable<address> {
   public:
    PRER() : ReadableWritable<address>() {}
    uint8_t PREDIV_A(){
    uint32_t tmp = this->bits_masked(0x7f0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void PREDIV_A(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x7f0000);
}
uint16_t PREDIV_S(){
    uint32_t tmp = this->bits_masked(0x7fff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void PREDIV_S(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7fff);
}
};
}
namespace WUTR{

template <uint32_t address>
class WUTR : public ReadableWritable<address> {
   public:
    WUTR() : ReadableWritable<address>() {}
    uint16_t WUT(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void WUT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace CALIBR{
enum class DC_t : uint32_t {
    DC_0 = 0, // field has value 0x0
DC_1 = 1, // field has value 0x1
DC_2 = 2, // field has value 0x2
DC_3 = 3, // field has value 0x3
DC_4 = 4, // field has value 0x4
DC_5 = 5, // field has value 0x5
DC_6 = 6, // field has value 0x6
DC_7 = 7, // field has value 0x7
DC_8 = 8, // field has value 0x8
DC_9 = 9, // field has value 0x9
DC_10 = 10, // field has value 0xa
DC_11 = 11, // field has value 0xb
DC_12 = 12, // field has value 0xc
DC_13 = 13, // field has value 0xd
DC_14 = 14, // field has value 0xe
DC_15 = 15, // field has value 0xf
DC_16 = 16, // field has value 0x10
DC_17 = 17, // field has value 0x11
DC_18 = 18, // field has value 0x12
DC_19 = 19, // field has value 0x13
DC_20 = 20, // field has value 0x14
DC_21 = 21, // field has value 0x15
DC_22 = 22, // field has value 0x16
DC_23 = 23, // field has value 0x17
DC_24 = 24, // field has value 0x18
DC_25 = 25, // field has value 0x19
DC_26 = 26, // field has value 0x1a
DC_27 = 27, // field has value 0x1b
DC_28 = 28, // field has value 0x1c
DC_29 = 29, // field has value 0x1d
DC_30 = 30, // field has value 0x1e
DC_31 = 31, // field has value 0x1f

};
enum class DCS_t : uint32_t {
    DCS_0 = 0, // field has value 0x0
DCS_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CALIBR : public ReadableWritable<address> {
   public:
    CALIBR() : ReadableWritable<address>() {}
    DCS_t DCS(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<DCS_t>(tmp);
}
void DCS(DCS_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
DC_t DC(){
    uint32_t tmp = this->bits_masked(0x1f) >> 0;
    return reinterpret_cast<DC_t>(tmp);
}
void DC(DC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1f);
}
};
}
namespace ALRMAR{

enum class PM_t : uint32_t {
    AM = 0, // AM or 24-hour format
PM = 1, // PM

};
enum class WDSEL_t : uint32_t {
    DateUnits = 0, // DU[3:0] represents the date units
WeekDay = 1, // DU[3:0] represents the week day. DT[1:0] is don’t care.

};
enum class MSK4_t : uint32_t {
    Mask = 0, // Alarm set if the date/day match
NotMask = 1, // Date/day don’t care in Alarm comparison

};
template <uint32_t address>
class ALRMAR : public ReadableWritable<address> {
   public:
    ALRMAR() : ReadableWritable<address>() {}
    MSK4_t MSK4(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK4(MSK4_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
WDSEL_t WDSEL(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<WDSEL_t>(tmp);
}
void WDSEL(WDSEL_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
uint8_t DT(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<uint8_t>(tmp);
}
void DT(uint8_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
uint8_t DU(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void DU(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
MSK4_t MSK3(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK3(MSK4_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
PM_t PM(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PM_t>(tmp);
}
void PM(PM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
uint8_t HT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void HT(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
uint8_t HU(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void HU(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
MSK4_t MSK2(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK2(MSK4_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint8_t MNT(){
    uint32_t tmp = this->bits_masked(0x7000) >> 12;
    return reinterpret_cast<uint8_t>(tmp);
}
void MNT(uint8_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7000);
}
uint8_t MNU(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void MNU(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
MSK4_t MSK1(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK1(MSK4_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
uint8_t ST(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void ST(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
uint8_t SU(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SU(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace ALRMBR{

enum class PM_t : uint32_t {
    AM = 0, // AM or 24-hour format
PM = 1, // PM

};
enum class WDSEL_t : uint32_t {
    DateUnits = 0, // DU[3:0] represents the date units
WeekDay = 1, // DU[3:0] represents the week day. DT[1:0] is don’t care.

};
enum class MSK4_t : uint32_t {
    Mask = 0, // Alarm set if the date/day match
NotMask = 1, // Date/day don’t care in Alarm comparison

};
template <uint32_t address>
class ALRMBR : public ReadableWritable<address> {
   public:
    ALRMBR() : ReadableWritable<address>() {}
    MSK4_t MSK4(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK4(MSK4_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
WDSEL_t WDSEL(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<WDSEL_t>(tmp);
}
void WDSEL(WDSEL_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
uint8_t DT(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<uint8_t>(tmp);
}
void DT(uint8_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
uint8_t DU(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void DU(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
MSK4_t MSK3(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK3(MSK4_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
PM_t PM(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PM_t>(tmp);
}
void PM(PM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
uint8_t HT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void HT(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
uint8_t HU(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void HU(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
MSK4_t MSK2(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK2(MSK4_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint8_t MNT(){
    uint32_t tmp = this->bits_masked(0x7000) >> 12;
    return reinterpret_cast<uint8_t>(tmp);
}
void MNT(uint8_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7000);
}
uint8_t MNU(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void MNU(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
MSK4_t MSK1(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<MSK4_t>(tmp);
}
void MSK1(MSK4_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
uint8_t ST(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void ST(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
uint8_t SU(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SU(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace WPR{

template <uint32_t address>
class WPR : public Writable<address> {
   public:
    WPR() : Writable<address>() {}
    uint8_t KEY(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void KEY(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace SSR{

template <uint32_t address>
class SSR : public Readable<address> {
   public:
    SSR() : Readable<address>() {}
    uint16_t SS(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void SS(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace SHIFTR{

enum class ADD1SW_t : uint32_t {
    Add1 = 1, // Add one second to the clock/calendar

};
template <uint32_t address>
class SHIFTR : public Writable<address> {
   public:
    SHIFTR() : Writable<address>() {}
    
void ADD1S(ADD1SW_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
uint16_t SUBFS(){
    uint32_t tmp = this->bits_masked(0x7fff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void SUBFS(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7fff);
}
};
}
namespace TSTR{
enum class ST_t : uint32_t {
    ST_0 = 0, // field has value 0x0
ST_1 = 1, // field has value 0x1
ST_2 = 2, // field has value 0x2
ST_3 = 3, // field has value 0x3
ST_4 = 4, // field has value 0x4
ST_5 = 5, // field has value 0x5
ST_6 = 6, // field has value 0x6
ST_7 = 7, // field has value 0x7

};
enum class PM_t : uint32_t {
    PM_0 = 0, // field has value 0x0
PM_1 = 1, // field has value 0x1

};
enum class SU_t : uint32_t {
    SU_0 = 0, // field has value 0x0
SU_1 = 1, // field has value 0x1
SU_2 = 2, // field has value 0x2
SU_3 = 3, // field has value 0x3
SU_4 = 4, // field has value 0x4
SU_5 = 5, // field has value 0x5
SU_6 = 6, // field has value 0x6
SU_7 = 7, // field has value 0x7
SU_8 = 8, // field has value 0x8
SU_9 = 9, // field has value 0x9
SU_10 = 10, // field has value 0xa
SU_11 = 11, // field has value 0xb
SU_12 = 12, // field has value 0xc
SU_13 = 13, // field has value 0xd
SU_14 = 14, // field has value 0xe
SU_15 = 15, // field has value 0xf

};
enum class HU_t : uint32_t {
    HU_0 = 0, // field has value 0x0
HU_1 = 1, // field has value 0x1
HU_2 = 2, // field has value 0x2
HU_3 = 3, // field has value 0x3
HU_4 = 4, // field has value 0x4
HU_5 = 5, // field has value 0x5
HU_6 = 6, // field has value 0x6
HU_7 = 7, // field has value 0x7
HU_8 = 8, // field has value 0x8
HU_9 = 9, // field has value 0x9
HU_10 = 10, // field has value 0xa
HU_11 = 11, // field has value 0xb
HU_12 = 12, // field has value 0xc
HU_13 = 13, // field has value 0xd
HU_14 = 14, // field has value 0xe
HU_15 = 15, // field has value 0xf

};
enum class HT_t : uint32_t {
    HT_0 = 0, // field has value 0x0
HT_1 = 1, // field has value 0x1
HT_2 = 2, // field has value 0x2
HT_3 = 3, // field has value 0x3

};
enum class MNT_t : uint32_t {
    MNT_0 = 0, // field has value 0x0
MNT_1 = 1, // field has value 0x1
MNT_2 = 2, // field has value 0x2
MNT_3 = 3, // field has value 0x3
MNT_4 = 4, // field has value 0x4
MNT_5 = 5, // field has value 0x5
MNT_6 = 6, // field has value 0x6
MNT_7 = 7, // field has value 0x7

};
enum class MNU_t : uint32_t {
    MNU_0 = 0, // field has value 0x0
MNU_1 = 1, // field has value 0x1
MNU_2 = 2, // field has value 0x2
MNU_3 = 3, // field has value 0x3
MNU_4 = 4, // field has value 0x4
MNU_5 = 5, // field has value 0x5
MNU_6 = 6, // field has value 0x6
MNU_7 = 7, // field has value 0x7
MNU_8 = 8, // field has value 0x8
MNU_9 = 9, // field has value 0x9
MNU_10 = 10, // field has value 0xa
MNU_11 = 11, // field has value 0xb
MNU_12 = 12, // field has value 0xc
MNU_13 = 13, // field has value 0xd
MNU_14 = 14, // field has value 0xe
MNU_15 = 15, // field has value 0xf

};
template <uint32_t address>
class TSTR : public Readable<address> {
   public:
    TSTR() : Readable<address>() {}
    PM_t PM(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PM_t>(tmp);
}
void PM(PM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
HT_t HT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<HT_t>(tmp);
}
void HT(HT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
HU_t HU(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<HU_t>(tmp);
}
void HU(HU_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
MNT_t MNT(){
    uint32_t tmp = this->bits_masked(0x7000) >> 12;
    return reinterpret_cast<MNT_t>(tmp);
}
void MNT(MNT_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7000);
}
MNU_t MNU(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<MNU_t>(tmp);
}
void MNU(MNU_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
ST_t ST(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<ST_t>(tmp);
}
void ST(ST_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
SU_t SU(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<SU_t>(tmp);
}
void SU(SU_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace TSDR{
enum class DU_t : uint32_t {
    DU_0 = 0, // field has value 0x0
DU_1 = 1, // field has value 0x1
DU_2 = 2, // field has value 0x2
DU_3 = 3, // field has value 0x3
DU_4 = 4, // field has value 0x4
DU_5 = 5, // field has value 0x5
DU_6 = 6, // field has value 0x6
DU_7 = 7, // field has value 0x7
DU_8 = 8, // field has value 0x8
DU_9 = 9, // field has value 0x9
DU_10 = 10, // field has value 0xa
DU_11 = 11, // field has value 0xb
DU_12 = 12, // field has value 0xc
DU_13 = 13, // field has value 0xd
DU_14 = 14, // field has value 0xe
DU_15 = 15, // field has value 0xf

};
enum class MU_t : uint32_t {
    MU_0 = 0, // field has value 0x0
MU_1 = 1, // field has value 0x1
MU_2 = 2, // field has value 0x2
MU_3 = 3, // field has value 0x3
MU_4 = 4, // field has value 0x4
MU_5 = 5, // field has value 0x5
MU_6 = 6, // field has value 0x6
MU_7 = 7, // field has value 0x7
MU_8 = 8, // field has value 0x8
MU_9 = 9, // field has value 0x9
MU_10 = 10, // field has value 0xa
MU_11 = 11, // field has value 0xb
MU_12 = 12, // field has value 0xc
MU_13 = 13, // field has value 0xd
MU_14 = 14, // field has value 0xe
MU_15 = 15, // field has value 0xf

};
enum class WDU_t : uint32_t {
    WDU_0 = 0, // field has value 0x0
WDU_1 = 1, // field has value 0x1
WDU_2 = 2, // field has value 0x2
WDU_3 = 3, // field has value 0x3
WDU_4 = 4, // field has value 0x4
WDU_5 = 5, // field has value 0x5
WDU_6 = 6, // field has value 0x6
WDU_7 = 7, // field has value 0x7

};
enum class MT_t : uint32_t {
    MT_0 = 0, // field has value 0x0
MT_1 = 1, // field has value 0x1

};
enum class DT_t : uint32_t {
    DT_0 = 0, // field has value 0x0
DT_1 = 1, // field has value 0x1
DT_2 = 2, // field has value 0x2
DT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class TSDR : public Readable<address> {
   public:
    TSDR() : Readable<address>() {}
    WDU_t WDU(){
    uint32_t tmp = this->bits_masked(0xe000) >> 13;
    return reinterpret_cast<WDU_t>(tmp);
}
void WDU(WDU_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0xe000);
}
MT_t MT(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<MT_t>(tmp);
}
void MT(MT_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
MU_t MU(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<MU_t>(tmp);
}
void MU(MU_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
DT_t DT(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<DT_t>(tmp);
}
void DT(DT_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
DU_t DU(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<DU_t>(tmp);
}
void DU(DU_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace TSSSR{

template <uint32_t address>
class TSSSR : public Readable<address> {
   public:
    TSSSR() : Readable<address>() {}
    uint16_t SS(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void SS(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace CALR{

enum class CALW16_t : uint32_t {
    Sixteen_Second = 1, // When CALW16 is set to ‘1’, the 16-second calibration cycle period is selected.This bit must not be set to ‘1’ if CALW8=1

};
enum class CALW8_t : uint32_t {
    Eight_Second = 1, // When CALW8 is set to ‘1’, the 8-second calibration cycle period is selected

};
enum class CALP_t : uint32_t {
    NoChange = 0, // No RTCCLK pulses are added
IncreaseFreq = 1, // One RTCCLK pulse is effectively inserted every 2^11 pulses (frequency increased by 488.5 ppm)

};
template <uint32_t address>
class CALR : public ReadableWritable<address> {
   public:
    CALR() : ReadableWritable<address>() {}
    CALP_t CALP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<CALP_t>(tmp);
}
void CALP(CALP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
CALW8_t CALW8(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<CALW8_t>(tmp);
}
void CALW8(CALW8_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
CALW16_t CALW16(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<CALW16_t>(tmp);
}
void CALW16(CALW16_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
uint16_t CALM(){
    uint32_t tmp = this->bits_masked(0x1ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void CALM(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1ff);
}
};
}
namespace TAFCR{
enum class TAMPPRCH_t : uint32_t {
    TAMPPRCH_0 = 0, // field has value 0x0
TAMPPRCH_1 = 1, // field has value 0x1
TAMPPRCH_2 = 2, // field has value 0x2
TAMPPRCH_3 = 3, // field has value 0x3

};
enum class TAMP1INSEL_t : uint32_t {
    TAMP1INSEL_0 = 0, // field has value 0x0
TAMP1INSEL_1 = 1, // field has value 0x1

};
enum class TAMPPUDIS_t : uint32_t {
    TAMPPUDIS_0 = 0, // field has value 0x0
TAMPPUDIS_1 = 1, // field has value 0x1

};
enum class TAMPFLT_t : uint32_t {
    TAMPFLT_0 = 0, // field has value 0x0
TAMPFLT_1 = 1, // field has value 0x1
TAMPFLT_2 = 2, // field has value 0x2
TAMPFLT_3 = 3, // field has value 0x3

};
enum class TAMP1TRG_t : uint32_t {
    TAMP1TRG_0 = 0, // field has value 0x0
TAMP1TRG_1 = 1, // field has value 0x1

};
enum class TAMP2E_t : uint32_t {
    TAMP2E_0 = 0, // field has value 0x0
TAMP2E_1 = 1, // field has value 0x1

};
enum class TAMP1E_t : uint32_t {
    TAMP1E_0 = 0, // field has value 0x0
TAMP1E_1 = 1, // field has value 0x1

};
enum class TAMP2TRG_t : uint32_t {
    TAMP2TRG_0 = 0, // field has value 0x0
TAMP2TRG_1 = 1, // field has value 0x1

};
enum class TAMPIE_t : uint32_t {
    TAMPIE_0 = 0, // field has value 0x0
TAMPIE_1 = 1, // field has value 0x1

};
enum class TAMPTS_t : uint32_t {
    TAMPTS_0 = 0, // field has value 0x0
TAMPTS_1 = 1, // field has value 0x1

};
enum class TSINSEL_t : uint32_t {
    TSINSEL_0 = 0, // field has value 0x0
TSINSEL_1 = 1, // field has value 0x1

};
enum class TAMPFREQ_t : uint32_t {
    TAMPFREQ_0 = 0, // field has value 0x0
TAMPFREQ_1 = 1, // field has value 0x1
TAMPFREQ_2 = 2, // field has value 0x2
TAMPFREQ_3 = 3, // field has value 0x3
TAMPFREQ_4 = 4, // field has value 0x4
TAMPFREQ_5 = 5, // field has value 0x5
TAMPFREQ_6 = 6, // field has value 0x6
TAMPFREQ_7 = 7, // field has value 0x7

};
enum class ALARMOUTTYPE_t : uint32_t {
    ALARMOUTTYPE_0 = 0, // field has value 0x0
ALARMOUTTYPE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class TAFCR : public ReadableWritable<address> {
   public:
    TAFCR() : ReadableWritable<address>() {}
    ALARMOUTTYPE_t ALARMOUTTYPE(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<ALARMOUTTYPE_t>(tmp);
}
void ALARMOUTTYPE(ALARMOUTTYPE_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TSINSEL_t TSINSEL(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TSINSEL_t>(tmp);
}
void TSINSEL(TSINSEL_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TAMP1INSEL_t TAMP1INSEL(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TAMP1INSEL_t>(tmp);
}
void TAMP1INSEL(TAMP1INSEL_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TAMPPUDIS_t TAMPPUDIS(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TAMPPUDIS_t>(tmp);
}
void TAMPPUDIS(TAMPPUDIS_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TAMPPRCH_t TAMPPRCH(){
    uint32_t tmp = this->bits_masked(0x6000) >> 13;
    return reinterpret_cast<TAMPPRCH_t>(tmp);
}
void TAMPPRCH(TAMPPRCH_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x6000);
}
TAMPFLT_t TAMPFLT(){
    uint32_t tmp = this->bits_masked(0x1800) >> 11;
    return reinterpret_cast<TAMPFLT_t>(tmp);
}
void TAMPFLT(TAMPFLT_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x1800);
}
TAMPFREQ_t TAMPFREQ(){
    uint32_t tmp = this->bits_masked(0x700) >> 8;
    return reinterpret_cast<TAMPFREQ_t>(tmp);
}
void TAMPFREQ(TAMPFREQ_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x700);
}
TAMPTS_t TAMPTS(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TAMPTS_t>(tmp);
}
void TAMPTS(TAMPTS_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TAMP2TRG_t TAMP2TRG(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TAMP2TRG_t>(tmp);
}
void TAMP2TRG(TAMP2TRG_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TAMP2E_t TAMP2E(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TAMP2E_t>(tmp);
}
void TAMP2E(TAMP2E_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TAMPIE_t TAMPIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TAMPIE_t>(tmp);
}
void TAMPIE(TAMPIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TAMP1TRG_t TAMP1TRG(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TAMP1TRG_t>(tmp);
}
void TAMP1TRG(TAMP1TRG_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TAMP1E_t TAMP1E(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TAMP1E_t>(tmp);
}
void TAMP1E(TAMP1E_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace ALRMASSR{

template <uint32_t address>
class ALRMASSR : public ReadableWritable<address> {
   public:
    ALRMASSR() : ReadableWritable<address>() {}
    uint8_t MASKSS(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void MASKSS(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
uint16_t SS(){
    uint32_t tmp = this->bits_masked(0x7fff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void SS(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7fff);
}
};
}
namespace ALRMBSSR{

template <uint32_t address>
class ALRMBSSR : public ReadableWritable<address> {
   public:
    ALRMBSSR() : ReadableWritable<address>() {}
    uint8_t MASKSS(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void MASKSS(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
uint16_t SS(){
    uint32_t tmp = this->bits_masked(0x7fff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void SS(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7fff);
}
};
}
namespace BKP%sR{

template <uint32_t address>
class BKP%sR : public ReadableWritable<address> {
   public:
    BKP%sR() : ReadableWritable<address>() {}
    uint32_t BKP(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void BKP(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
template<uint32_t base_address>
class RTC{
    public:
    // time register
TR<base_address + 0> TR; 
// date register
DR<base_address + 4> DR; 
// control register
CR<base_address + 8> CR; 
// initialization and statusregister
ISR<base_address + 12> ISR; 
// prescaler register
PRER<base_address + 16> PRER; 
// wakeup timer register
WUTR<base_address + 20> WUTR; 
// calibration register
CALIBR<base_address + 24> CALIBR; 
// alarm A register
ALRMAR<base_address + 28> ALRMAR; 
// alarm B register
ALRMBR<base_address + 32> ALRMBR; 
// write protection register
WPR<base_address + 36> WPR; 
// sub second register
SSR<base_address + 40> SSR; 
// shift control register
SHIFTR<base_address + 44> SHIFTR; 
// time stamp time register
TSTR<base_address + 48> TSTR; 
// time stamp date register
TSDR<base_address + 52> TSDR; 
// timestamp sub second register
TSSSR<base_address + 56> TSSSR; 
// calibration register
CALR<base_address + 60> CALR; 
// tamper and alternate function configurationregister
TAFCR<base_address + 64> TAFCR; 
// alarm A sub second register
ALRMASSR<base_address + 68> ALRMASSR; 
// alarm B sub second register
ALRMBSSR<base_address + 72> ALRMBSSR; 
// backup register
BKP%sR<base_address + 80> BKP%sR; 
};
}

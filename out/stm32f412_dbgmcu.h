#pragma once

#include <cstdint>
#include <reg.h>

namespace DBGMCU{
namespace IDCODE{

enum class REV_ID_t : uint32_t {
    RevZ = 4097, // Revision Z device
RevB = 8192, // Revision B device
RevC = 12288, // Revision C device

};
template <uint32_t address>
class IDCODE : public Readable<address> {
   public:
    IDCODE() : Readable<address>() {}
    uint16_t DEV_ID(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void DEV_ID(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
REV_ID_t REV_ID(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<REV_ID_t>(tmp);
}

};
}
namespace CR{
enum class DBG_STANDBY_t : uint32_t {
    Disabled = 0, // Debug Standby Mode Disabled
Enabled = 1, // Debug Standby Mode Enabled

};
enum class DBG_STOP_t : uint32_t {
    Disabled = 0, // Debug Stop Mode Disabled
Enabled = 1, // Debug Stop Mode Enabled

};
enum class DBG_SLEEP_t : uint32_t {
    Disabled = 0, // Debug Sleep Mode Disabled
Enabled = 1, // Debug Sleep Mode Enabled

};
enum class TRACE_MODE_t : uint32_t {
    Async = 0, // TRACE pin assignment for Asynchronous Mode
Sync1 = 1, // TRACE pin assignment for Synchronous Mode with a TRACEDATA size of 1
Sync2 = 2, // TRACE pin assignment for Synchronous Mode with a TRACEDATA size of 2
Sync4 = 1, // TRACE pin assignment for Synchronous Mode with a TRACEDATA size of 4

};
enum class TRACE_IOEN_t : uint32_t {
    Enable = 1, // TRACE pins Enabled
Disable = 0, // TRACE pins Disabled

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    DBG_SLEEP_t DBG_SLEEP(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DBG_SLEEP_t>(tmp);
}
void DBG_SLEEP(DBG_SLEEP_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
DBG_STOP_t DBG_STOP(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DBG_STOP_t>(tmp);
}
void DBG_STOP(DBG_STOP_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
DBG_STANDBY_t DBG_STANDBY(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DBG_STANDBY_t>(tmp);
}
void DBG_STANDBY(DBG_STANDBY_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TRACE_IOEN_t TRACE_IOEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TRACE_IOEN_t>(tmp);
}
void TRACE_IOEN(TRACE_IOEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TRACE_MODE_t TRACE_MODE(){
    uint32_t tmp = this->bits_masked(0xc0) >> 6;
    return reinterpret_cast<TRACE_MODE_t>(tmp);
}
void TRACE_MODE(TRACE_MODE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0xc0);
}
};
}
namespace APB1_FZ{
enum class DBG_CANx_STOP_t : uint32_t {
    Continue = 0, // Same behavior as in normal mode
Stop = 1, // The CANx received registers are frozen

};
enum class DBG_I2Cx_TIMEOUT_t : uint32_t {
    NormalMode = 0, // Same behavior as in normal mode
SMBusTimeoutFrozen = 1, // SMBUS timeout is frozen

};
enum class DBG_xCounter_STOP_t : uint32_t {
    Continue = 0, // counter clock is fed normally
Stop = 1, // counter clock is halted

};
template <uint32_t address>
class APB1_FZ : public ReadableWritable<address> {
   public:
    APB1_FZ() : ReadableWritable<address>() {}
    DBG_xCounter_STOP_t DBG_TIM2_STOP(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM2_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
DBG_xCounter_STOP_t DBG_TIM3_STOP(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM3_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
DBG_xCounter_STOP_t DBG_TIM4_STOP(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM4_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DBG_xCounter_STOP_t DBG_TIM5_STOP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM5_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DBG_xCounter_STOP_t DBG_TIM6_STOP(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM6_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
DBG_xCounter_STOP_t DBG_TIM7_STOP(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM7_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
DBG_xCounter_STOP_t DBG_TIM12_STOP(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM12_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
DBG_xCounter_STOP_t DBG_TIM13_STOP(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM13_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
DBG_xCounter_STOP_t DBG_TIM14_STOP(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_TIM14_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
DBG_xCounter_STOP_t DBG_RTC_Stop(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_RTC_Stop(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
DBG_xCounter_STOP_t DBG_WWDG_STOP(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_WWDG_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
DBG_xCounter_STOP_t DBG_IWDG_STOP(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<DBG_xCounter_STOP_t>(tmp);
}
void DBG_IWDG_STOP(DBG_xCounter_STOP_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
DBG_I2Cx_TIMEOUT_t DBG_I2C1_SMBUS_TIMEOUT(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<DBG_I2Cx_TIMEOUT_t>(tmp);
}
void DBG_I2C1_SMBUS_TIMEOUT(DBG_I2Cx_TIMEOUT_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
DBG_I2Cx_TIMEOUT_t DBG_I2C2_SMBUS_TIMEOUT(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<DBG_I2Cx_TIMEOUT_t>(tmp);
}
void DBG_I2C2_SMBUS_TIMEOUT(DBG_I2Cx_TIMEOUT_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
DBG_I2Cx_TIMEOUT_t DBG_I2C3_SMBUS_TIMEOUT(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<DBG_I2Cx_TIMEOUT_t>(tmp);
}
void DBG_I2C3_SMBUS_TIMEOUT(DBG_I2Cx_TIMEOUT_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
DBG_I2Cx_TIMEOUT_t DBG_I2CFMP_SMBUS_TIMEOUT(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<DBG_I2Cx_TIMEOUT_t>(tmp);
}
void DBG_I2CFMP_SMBUS_TIMEOUT(DBG_I2Cx_TIMEOUT_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
DBG_CANx_STOP_t DBG_CAN1_STOP(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<DBG_CANx_STOP_t>(tmp);
}
void DBG_CAN1_STOP(DBG_CANx_STOP_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
DBG_CANx_STOP_t DBG_CAN2_STOP(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<DBG_CANx_STOP_t>(tmp);
}
void DBG_CAN2_STOP(DBG_CANx_STOP_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
};
}
namespace APB2_FZ{
enum class DBG_TIM9_STOP_t : uint32_t {
    DBG_TIM9_STOP_0 = 0, // field has value 0x0
DBG_TIM9_STOP_1 = 1, // field has value 0x1

};
enum class DBG_TIM1_STOP_t : uint32_t {
    DBG_TIM1_STOP_0 = 0, // field has value 0x0
DBG_TIM1_STOP_1 = 1, // field has value 0x1

};
enum class DBG_TIM10_STOP_t : uint32_t {
    DBG_TIM10_STOP_0 = 0, // field has value 0x0
DBG_TIM10_STOP_1 = 1, // field has value 0x1

};
enum class DBG_TIM11_STOP_t : uint32_t {
    DBG_TIM11_STOP_0 = 0, // field has value 0x0
DBG_TIM11_STOP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class APB2_FZ : public ReadableWritable<address> {
   public:
    APB2_FZ() : ReadableWritable<address>() {}
    DBG_TIM1_STOP_t DBG_TIM1_STOP(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DBG_TIM1_STOP_t>(tmp);
}
void DBG_TIM1_STOP(DBG_TIM1_STOP_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
DBG_TIM9_STOP_t DBG_TIM9_STOP(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<DBG_TIM9_STOP_t>(tmp);
}
void DBG_TIM9_STOP(DBG_TIM9_STOP_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
DBG_TIM10_STOP_t DBG_TIM10_STOP(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<DBG_TIM10_STOP_t>(tmp);
}
void DBG_TIM10_STOP(DBG_TIM10_STOP_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
DBG_TIM11_STOP_t DBG_TIM11_STOP(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<DBG_TIM11_STOP_t>(tmp);
}
void DBG_TIM11_STOP(DBG_TIM11_STOP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
};
}
template<uint32_t base_address>
class DBG{
    public:
    // IDCODE
IDCODE<base_address + 0> IDCODE; 
// Control Register
CR<base_address + 4> CR; 
// Debug MCU APB1 Freeze registe
APB1_FZ<base_address + 8> APB1_FZ; 
// Debug MCU APB2 Freeze registe
APB2_FZ<base_address + 12> APB2_FZ; 
};
}

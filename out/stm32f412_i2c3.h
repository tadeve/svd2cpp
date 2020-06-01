#pragma once

#include <cstdint>
#include <reg.h>

namespace I2C3{
namespace CR1{
enum class ALERT_t : uint32_t {
    Release = 0, // SMBA pin released high
Drive = 1, // SMBA pin driven low

};
enum class SWRST_t : uint32_t {
    NotReset = 0, // I2C peripheral not under reset
Reset = 1, // I2C peripheral under reset

};
enum class NOSTRETCH_t : uint32_t {
    Enabled = 0, // Clock stretching enabled
Disabled = 1, // Clock stretching disabled

};
enum class SMBTYPE_t : uint32_t {
    Device = 0, // SMBus Device
Host = 1, // SMBus Host

};
enum class SMBUS_t : uint32_t {
    I2C = 0, // I2C Mode
SMBus = 1, // SMBus

};
enum class ENGC_t : uint32_t {
    Disabled = 0, // General call disabled
Enabled = 1, // General call enabled

};
enum class START_t : uint32_t {
    NoStart = 0, // No Start generation
Start = 1, // In master mode: repeated start generation, in slave mode: start generation when bus is free

};
enum class ACK_t : uint32_t {
    NAK = 0, // No acknowledge returned
ACK = 1, // Acknowledge returned after a byte is received

};
enum class PEC_t : uint32_t {
    Disabled = 0, // No PEC transfer
Enabled = 1, // PEC transfer

};
enum class POS_t : uint32_t {
    Current = 0, // ACK bit controls the (N)ACK of the current byte being received
Next = 1, // ACK bit controls the (N)ACK of the next byte to be received

};
enum class STOP_t : uint32_t {
    NoStop = 0, // No Stop generation
Stop = 1, // In master mode: stop generation after current byte/start, in slave mode: release SCL and SDA after current byte

};
enum class ENARP_t : uint32_t {
    Disabled = 0, // ARP disabled
Enabled = 1, // ARP enabled

};
enum class ENPEC_t : uint32_t {
    Disabled = 0, // PEC calculation disabled
Enabled = 1, // PEC calculation enabled

};
enum class PE_t : uint32_t {
    Disabled = 0, // Peripheral disabled
Enabled = 1, // Peripheral enabled

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    SWRST_t SWRST(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<SWRST_t>(tmp);
}
void SWRST(SWRST_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
ALERT_t ALERT(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ALERT_t>(tmp);
}
void ALERT(ALERT_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
PEC_t PEC(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<PEC_t>(tmp);
}
void PEC(PEC_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
POS_t POS(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<POS_t>(tmp);
}
void POS(POS_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
STOP_t STOP(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<STOP_t>(tmp);
}
void STOP(STOP_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
START_t START(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<START_t>(tmp);
}
void START(START_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
NOSTRETCH_t NOSTRETCH(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<NOSTRETCH_t>(tmp);
}
void NOSTRETCH(NOSTRETCH_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
ENGC_t ENGC(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<ENGC_t>(tmp);
}
void ENGC(ENGC_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ENPEC_t ENPEC(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ENPEC_t>(tmp);
}
void ENPEC(ENPEC_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
ENARP_t ENARP(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ENARP_t>(tmp);
}
void ENARP(ENARP_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
SMBTYPE_t SMBTYPE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<SMBTYPE_t>(tmp);
}
void SMBTYPE(SMBTYPE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
SMBUS_t SMBUS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SMBUS_t>(tmp);
}
void SMBUS(SMBUS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
PE_t PE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PE_t>(tmp);
}
void PE(PE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CR2{

enum class ITEVTEN_t : uint32_t {
    Disabled = 0, // Event interrupt disabled
Enabled = 1, // Event interrupt enabled

};
enum class ITBUFEN_t : uint32_t {
    Disabled = 0, // TxE=1 or RxNE=1 does not generate any interrupt
Enabled = 1, // TxE=1 or RxNE=1 generates Event interrupt

};
enum class LAST_t : uint32_t {
    NotLast = 0, // Next DMA EOT is not the last transfer
Last = 1, // Next DMA EOT is the last transfer

};
enum class DMAEN_t : uint32_t {
    Disabled = 0, // DMA requests disabled
Enabled = 1, // DMA request enabled when TxE=1 or RxNE=1

};
enum class ITERREN_t : uint32_t {
    Disabled = 0, // Error interrupt disabled
Enabled = 1, // Error interrupt enabled

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    LAST_t LAST(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<LAST_t>(tmp);
}
void LAST(LAST_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
DMAEN_t DMAEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<DMAEN_t>(tmp);
}
void DMAEN(DMAEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
ITBUFEN_t ITBUFEN(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<ITBUFEN_t>(tmp);
}
void ITBUFEN(ITBUFEN_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
ITEVTEN_t ITEVTEN(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ITEVTEN_t>(tmp);
}
void ITEVTEN(ITEVTEN_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
ITERREN_t ITERREN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<ITERREN_t>(tmp);
}
void ITERREN(ITERREN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
uint8_t FREQ(){
    uint32_t tmp = this->bits_masked(0x3f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void FREQ(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3f);
}
};
}
namespace OAR1{

enum class ADDMODE_t : uint32_t {
    ADD7 = 0, // 7-bit slave address
ADD10 = 1, // 10-bit slave address

};
template <uint32_t address>
class OAR1 : public ReadableWritable<address> {
   public:
    OAR1() : ReadableWritable<address>() {}
    ADDMODE_t ADDMODE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ADDMODE_t>(tmp);
}
void ADDMODE(ADDMODE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t ADD(){
    uint32_t tmp = this->bits_masked(0x3ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void ADD(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3ff);
}
};
}
namespace OAR2{

enum class ENDUAL_t : uint32_t {
    Single = 0, // Single addressing mode
Dual = 1, // Dual addressing mode

};
template <uint32_t address>
class OAR2 : public ReadableWritable<address> {
   public:
    OAR2() : ReadableWritable<address>() {}
    uint8_t ADD2(){
    uint32_t tmp = this->bits_masked(0xfe) >> 1;
    return reinterpret_cast<uint8_t>(tmp);
}
void ADD2(uint8_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0xfe);
}
ENDUAL_t ENDUAL(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ENDUAL_t>(tmp);
}
void ENDUAL(ENDUAL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public ReadableWritable<address> {
   public:
    DR() : ReadableWritable<address>() {}
    uint8_t DR(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void DR(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace SR1{
enum class ADD10_t : uint32_t {
    ADD10_0 = 0, // field has value 0x0
ADD10_1 = 1, // field has value 0x1

};
enum class ADDR_t : uint32_t {
    NotMatch = 0, // Adress mismatched or not received
Match = 1, // Received slave address matched with one of the enabled slave addresses

};
enum class STOPF_t : uint32_t {
    NoStop = 0, // No Stop condition detected
Stop = 1, // Stop condition detected

};
enum class BTF_t : uint32_t {
    NotFinished = 0, // Data byte transfer not done
Finished = 1, // Data byte transfer successful

};
enum class BERR_t : uint32_t {
    NoError = 0, // No misplaced Start or Stop condition
Error = 1, // Misplaced Start or Stop condition

};
enum class TxE_t : uint32_t {
    NotEmpty = 0, // Data register not empty
Empty = 1, // Data register empty

};
enum class SB_t : uint32_t {
    NoStart = 0, // No Start condition
Start = 1, // Start condition generated

};
enum class ARLO_t : uint32_t {
    NoLost = 0, // No Arbitration Lost detected
Lost = 1, // Arbitration Lost detected

};
enum class AF_t : uint32_t {
    NoFailure = 0, // No acknowledge failure
Failure = 1, // Acknowledge failure

};
enum class RxNE_t : uint32_t {
    Empty = 0, // Data register empty
NotEmpty = 1, // Data register not empty

};
enum class PECERR_t : uint32_t {
    NoError = 0, // no PEC error: receiver returns ACK after PEC reception (if ACK=1)
Error = 1, // PEC error: receiver returns NACK after PEC reception (whatever ACK)

};
enum class SMBALERT_t : uint32_t {
    NoAlert = 0, // No SMBALERT occured
Alert = 1, // SMBALERT occurred

};
enum class TIMEOUT_t : uint32_t {
    NoTimeout = 0, // No Timeout error
Timeout = 1, // SCL remained LOW for 25 ms

};
enum class OVR_t : uint32_t {
    NoOverrun = 0, // No overrun/underrun occured
Overrun = 1, // Overrun/underrun occured

};
template <uint32_t address>
class SR1 : public ReadableWritable<address> {
   public:
    SR1() : ReadableWritable<address>() {}
    SMBALERT_t SMBALERT(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<SMBALERT_t>(tmp);
}
void SMBALERT(SMBALERT_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TIMEOUT_t TIMEOUT(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TIMEOUT_t>(tmp);
}
void TIMEOUT(TIMEOUT_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
PECERR_t PECERR(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<PECERR_t>(tmp);
}
void PECERR(PECERR_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
OVR_t OVR(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<OVR_t>(tmp);
}
void OVR(OVR_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
AF_t AF(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<AF_t>(tmp);
}
void AF(AF_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
ARLO_t ARLO(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ARLO_t>(tmp);
}
void ARLO(ARLO_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
BERR_t BERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BERR_t>(tmp);
}
void BERR(BERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TxE_t TxE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TxE_t>(tmp);
}
RxNE_t RxNE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<RxNE_t>(tmp);
}
STOPF_t STOPF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<STOPF_t>(tmp);
}
ADD10_t ADD10(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ADD10_t>(tmp);
}
BTF_t BTF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<BTF_t>(tmp);
}
ADDR_t ADDR(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<ADDR_t>(tmp);
}
SB_t SB(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<SB_t>(tmp);
}
};
}
namespace SR2{

enum class GENCALL_t : uint32_t {
    GENCALL_0 = 0, // field has value 0x0
GENCALL_1 = 1, // field has value 0x1

};
enum class DUALF_t : uint32_t {
    DUALF_0 = 0, // field has value 0x0
DUALF_1 = 1, // field has value 0x1

};
enum class TRA_t : uint32_t {
    TRA_0 = 0, // field has value 0x0
TRA_1 = 1, // field has value 0x1

};
enum class BUSY_t : uint32_t {
    BUSY_0 = 0, // field has value 0x0
BUSY_1 = 1, // field has value 0x1

};
enum class SMBDEFAULT_t : uint32_t {
    SMBDEFAULT_0 = 0, // field has value 0x0
SMBDEFAULT_1 = 1, // field has value 0x1

};
enum class SMBHOST_t : uint32_t {
    SMBHOST_0 = 0, // field has value 0x0
SMBHOST_1 = 1, // field has value 0x1

};
enum class MSL_t : uint32_t {
    MSL_0 = 0, // field has value 0x0
MSL_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR2 : public Readable<address> {
   public:
    SR2() : Readable<address>() {}
    uint8_t PEC(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void PEC(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
DUALF_t DUALF(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<DUALF_t>(tmp);
}
void DUALF(DUALF_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
SMBHOST_t SMBHOST(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<SMBHOST_t>(tmp);
}
void SMBHOST(SMBHOST_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SMBDEFAULT_t SMBDEFAULT(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<SMBDEFAULT_t>(tmp);
}
void SMBDEFAULT(SMBDEFAULT_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
GENCALL_t GENCALL(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<GENCALL_t>(tmp);
}
void GENCALL(GENCALL_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TRA_t TRA(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TRA_t>(tmp);
}
void TRA(TRA_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
BUSY_t BUSY(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<BUSY_t>(tmp);
}
void BUSY(BUSY_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MSL_t MSL(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<MSL_t>(tmp);
}
void MSL(MSL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CCR{

enum class DUTY_t : uint32_t {
    Duty2_1 = 0, // Duty cycle t_low/t_high = 2/1
Duty16_9 = 1, // Duty cycle t_low/t_high = 16/9

};
enum class F_S_t : uint32_t {
    Standard = 0, // Standard mode I2C
Fast = 1, // Fast mode I2C

};
template <uint32_t address>
class CCR : public ReadableWritable<address> {
   public:
    CCR() : ReadableWritable<address>() {}
    F_S_t F_S(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<F_S_t>(tmp);
}
void F_S(F_S_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
DUTY_t DUTY(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<DUTY_t>(tmp);
}
void DUTY(DUTY_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
uint16_t CCR(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void CCR(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
};
}
namespace TRISE{

template <uint32_t address>
class TRISE : public ReadableWritable<address> {
   public:
    TRISE() : ReadableWritable<address>() {}
    uint8_t TRISE(){
    uint32_t tmp = this->bits_masked(0x3f) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void TRISE(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3f);
}
};
}
template<uint32_t base_address>
class I2C{
    public:
    // Control register 1
CR1<base_address + 0> CR1; 
// Control register 2
CR2<base_address + 4> CR2; 
// Own address register 1
OAR1<base_address + 8> OAR1; 
// Own address register 2
OAR2<base_address + 12> OAR2; 
// Data register
DR<base_address + 16> DR; 
// Status register 1
SR1<base_address + 20> SR1; 
// Status register 2
SR2<base_address + 24> SR2; 
// Clock control register
CCR<base_address + 28> CCR; 
// TRISE register
TRISE<base_address + 32> TRISE; 
};
}

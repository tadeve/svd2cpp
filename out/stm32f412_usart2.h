#pragma once

#include <cstdint>
#include <reg.h>

namespace USART2{
namespace SR{
enum class ORE_t : uint32_t {
    ORE_0 = 0, // field has value 0x0
ORE_1 = 1, // field has value 0x1

};
enum class LBD_t : uint32_t {
    LBD_0 = 0, // field has value 0x0
LBD_1 = 1, // field has value 0x1

};
enum class RXNE_t : uint32_t {
    RXNE_0 = 0, // field has value 0x0
RXNE_1 = 1, // field has value 0x1

};
enum class IDLE_t : uint32_t {
    IDLE_0 = 0, // field has value 0x0
IDLE_1 = 1, // field has value 0x1

};
enum class CTS_t : uint32_t {
    CTS_0 = 0, // field has value 0x0
CTS_1 = 1, // field has value 0x1

};
enum class FE_t : uint32_t {
    FE_0 = 0, // field has value 0x0
FE_1 = 1, // field has value 0x1

};
enum class PE_t : uint32_t {
    PE_0 = 0, // field has value 0x0
PE_1 = 1, // field has value 0x1

};
enum class TXE_t : uint32_t {
    TXE_0 = 0, // field has value 0x0
TXE_1 = 1, // field has value 0x1

};
enum class NF_t : uint32_t {
    NF_0 = 0, // field has value 0x0
NF_1 = 1, // field has value 0x1

};
enum class TC_t : uint32_t {
    TC_0 = 0, // field has value 0x0
TC_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    CTS_t CTS(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CTS_t>(tmp);
}
void CTS(CTS_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
LBD_t LBD(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<LBD_t>(tmp);
}
void LBD(LBD_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TXE_t TXE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXE_t>(tmp);
}
TC_t TC(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TC_t>(tmp);
}
void TC(TC_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
RXNE_t RXNE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<RXNE_t>(tmp);
}
void RXNE(RXNE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
IDLE_t IDLE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<IDLE_t>(tmp);
}
ORE_t ORE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ORE_t>(tmp);
}
NF_t NF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<NF_t>(tmp);
}
FE_t FE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FE_t>(tmp);
}
PE_t PE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PE_t>(tmp);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public ReadableWritable<address> {
   public:
    DR() : ReadableWritable<address>() {}
    uint16_t DR(){
    uint32_t tmp = this->bits_masked(0x1ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void DR(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1ff);
}
};
}
namespace BRR{

template <uint32_t address>
class BRR : public ReadableWritable<address> {
   public:
    BRR() : ReadableWritable<address>() {}
    uint16_t DIV_Mantissa(){
    uint32_t tmp = this->bits_masked(0xfff0) >> 4;
    return reinterpret_cast<uint16_t>(tmp);
}
void DIV_Mantissa(uint16_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xfff0);
}
uint8_t DIV_Fraction(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void DIV_Fraction(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace CR1{
enum class PCE_t : uint32_t {
    Disabled = 0, // Parity control disabled
Enabled = 1, // Parity control enabled

};
enum class RXNEIE_t : uint32_t {
    Disabled = 0, // RXNE interrupt disabled
Enabled = 1, // RXNE interrupt enabled

};
enum class M_t : uint32_t {
    M8 = 0, // 8 data bits
M9 = 1, // 9 data bits

};
enum class TCIE_t : uint32_t {
    Disabled = 0, // TC interrupt disabled
Enabled = 1, // TC interrupt enabled

};
enum class RWU_t : uint32_t {
    Active = 0, // Receiver in active mode
Mute = 1, // Receiver in mute mode

};
enum class RE_t : uint32_t {
    Disabled = 0, // Receiver disabled
Enabled = 1, // Receiver enabled

};
enum class SBK_t : uint32_t {
    NoBreak = 0, // No break character is transmitted
Break = 1, // Break character transmitted

};
enum class PEIE_t : uint32_t {
    Disabled = 0, // PE interrupt disabled
Enabled = 1, // PE interrupt enabled

};
enum class TXEIE_t : uint32_t {
    Disabled = 0, // TXE interrupt disabled
Enabled = 1, // TXE interrupt enabled

};
enum class PS_t : uint32_t {
    Even = 0, // Even parity
Odd = 1, // Odd parity

};
enum class TE_t : uint32_t {
    Disabled = 0, // Transmitter disabled
Enabled = 1, // Transmitter enabled

};
enum class UE_t : uint32_t {
    Disabled = 0, // USART prescaler and outputs disabled
Enabled = 1, // USART enabled

};
enum class IDLEIE_t : uint32_t {
    Disabled = 0, // IDLE interrupt disabled
Enabled = 1, // IDLE interrupt enabled

};
enum class OVER8_t : uint32_t {
    Oversample16 = 0, // Oversampling by 16
Oversample8 = 1, // Oversampling by 8

};
enum class WAKE_t : uint32_t {
    IdleLine = 0, // USART wakeup on idle line
AddressMark = 1, // USART wakeup on address mark

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    OVER8_t OVER8(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<OVER8_t>(tmp);
}
void OVER8(OVER8_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
UE_t UE(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<UE_t>(tmp);
}
void UE(UE_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
M_t M(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<M_t>(tmp);
}
void M(M_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
WAKE_t WAKE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<WAKE_t>(tmp);
}
void WAKE(WAKE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
PCE_t PCE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<PCE_t>(tmp);
}
void PCE(PCE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
PS_t PS(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<PS_t>(tmp);
}
void PS(PS_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
PEIE_t PEIE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<PEIE_t>(tmp);
}
void PEIE(PEIE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TXEIE_t TXEIE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXEIE_t>(tmp);
}
void TXEIE(TXEIE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TCIE_t TCIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TCIE_t>(tmp);
}
void TCIE(TCIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
RXNEIE_t RXNEIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<RXNEIE_t>(tmp);
}
void RXNEIE(RXNEIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
IDLEIE_t IDLEIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<IDLEIE_t>(tmp);
}
void IDLEIE(IDLEIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TE_t TE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TE_t>(tmp);
}
void TE(TE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
RE_t RE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<RE_t>(tmp);
}
void RE(RE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
RWU_t RWU(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<RWU_t>(tmp);
}
void RWU(RWU_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
SBK_t SBK(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<SBK_t>(tmp);
}
void SBK(SBK_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CR2{

enum class STOP_t : uint32_t {
    Stop1 = 0, // 1 stop bit
Stop0p5 = 1, // 0.5 stop bits
Stop2 = 2, // 2 stop bits
Stop1p5 = 3, // 1.5 stop bits

};
enum class LBDL_t : uint32_t {
    LBDL10 = 0, // 10-bit break detection
LBDL11 = 1, // 11-bit break detection

};
enum class CPHA_t : uint32_t {
    First = 0, // The first clock transition is the first data capture edge
Second = 1, // The second clock transition is the first data capture edge

};
enum class CLKEN_t : uint32_t {
    Disabled = 0, // CK pin disabled
Enabled = 1, // CK pin enabled

};
enum class LINEN_t : uint32_t {
    Disabled = 0, // LIN mode disabled
Enabled = 1, // LIN mode enabled

};
enum class LBDIE_t : uint32_t {
    Disabled = 0, // LIN break detection interrupt disabled
Enabled = 1, // LIN break detection interrupt enabled

};
enum class LBCL_t : uint32_t {
    LBCL_0 = 0, // field has value 0x0
LBCL_1 = 1, // field has value 0x1

};
enum class CPOL_t : uint32_t {
    Low = 0, // Steady low value on CK pin outside transmission window
High = 1, // Steady high value on CK pin outside transmission window

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    LINEN_t LINEN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<LINEN_t>(tmp);
}
void LINEN(LINEN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
STOP_t STOP(){
    uint32_t tmp = this->bits_masked(0x3000) >> 12;
    return reinterpret_cast<STOP_t>(tmp);
}
void STOP(STOP_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x3000);
}
CLKEN_t CLKEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CLKEN_t>(tmp);
}
void CLKEN(CLKEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CPOL_t CPOL(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CPOL_t>(tmp);
}
void CPOL(CPOL_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CPHA_t CPHA(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CPHA_t>(tmp);
}
void CPHA(CPHA_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
LBCL_t LBCL(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<LBCL_t>(tmp);
}
void LBCL(LBCL_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
LBDIE_t LBDIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<LBDIE_t>(tmp);
}
void LBDIE(LBDIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
LBDL_t LBDL(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<LBDL_t>(tmp);
}
void LBDL(LBDL_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
uint8_t ADD(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void ADD(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace CR3{
enum class DMAT_t : uint32_t {
    Disabled = 0, // DMA mode is disabled for transmission
Enabled = 1, // DMA mode is enabled for transmission

};
enum class CTSE_t : uint32_t {
    Disabled = 0, // CTS hardware flow control disabled
Enabled = 1, // CTS hardware flow control enabled

};
enum class DMAR_t : uint32_t {
    Disabled = 0, // DMA mode is disabled for reception
Enabled = 1, // DMA mode is enabled for reception

};
enum class IRLP_t : uint32_t {
    Normal = 0, // Normal mode
LowPower = 1, // Low-power mode

};
enum class CTSIE_t : uint32_t {
    Disabled = 0, // CTS interrupt disabled
Enabled = 1, // CTS interrupt enabled

};
enum class RTSE_t : uint32_t {
    Disabled = 0, // RTS hardware flow control disabled
Enabled = 1, // RTS hardware flow control enabled

};
enum class ONEBIT_t : uint32_t {
    Sample3 = 0, // Three sample bit method
Sample1 = 1, // One sample bit method

};
enum class SCEN_t : uint32_t {
    Disabled = 0, // Smartcard mode disabled
Enabled = 1, // Smartcard mode enabled

};
enum class EIE_t : uint32_t {
    Disabled = 0, // Error interrupt disabled
Enabled = 1, // Error interrupt enabled

};
enum class NACK_t : uint32_t {
    Disabled = 0, // NACK transmission in case of parity error is disabled
Enabled = 1, // NACK transmission during parity error is enabled

};
enum class HDSEL_t : uint32_t {
    FullDuplex = 0, // Half duplex mode is not selected
HalfDuplex = 1, // Half duplex mode is selected

};
enum class IREN_t : uint32_t {
    Disabled = 0, // IrDA disabled
Enabled = 1, // IrDA enabled

};
template <uint32_t address>
class CR3 : public ReadableWritable<address> {
   public:
    CR3() : ReadableWritable<address>() {}
    ONEBIT_t ONEBIT(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<ONEBIT_t>(tmp);
}
void ONEBIT(ONEBIT_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CTSIE_t CTSIE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CTSIE_t>(tmp);
}
void CTSIE(CTSIE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CTSE_t CTSE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CTSE_t>(tmp);
}
void CTSE(CTSE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
RTSE_t RTSE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<RTSE_t>(tmp);
}
void RTSE(RTSE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
DMAT_t DMAT(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<DMAT_t>(tmp);
}
void DMAT(DMAT_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
DMAR_t DMAR(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<DMAR_t>(tmp);
}
void DMAR(DMAR_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SCEN_t SCEN(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<SCEN_t>(tmp);
}
void SCEN(SCEN_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NACK_t NACK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NACK_t>(tmp);
}
void NACK(NACK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
HDSEL_t HDSEL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<HDSEL_t>(tmp);
}
void HDSEL(HDSEL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
IRLP_t IRLP(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<IRLP_t>(tmp);
}
void IRLP(IRLP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
IREN_t IREN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<IREN_t>(tmp);
}
void IREN(IREN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
EIE_t EIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<EIE_t>(tmp);
}
void EIE(EIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace GTPR{

template <uint32_t address>
class GTPR : public ReadableWritable<address> {
   public:
    GTPR() : ReadableWritable<address>() {}
    uint8_t GT(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void GT(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t PSC(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void PSC(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
template<uint32_t base_address>
class USART{
    public:
    // Status register
SR<base_address + 0> SR; 
// Data register
DR<base_address + 4> DR; 
// Baud rate register
BRR<base_address + 8> BRR; 
// Control register 1
CR1<base_address + 12> CR1; 
// Control register 2
CR2<base_address + 16> CR2; 
// Control register 3
CR3<base_address + 20> CR3; 
// Guard time and prescalerregister
GTPR<base_address + 24> GTPR; 
};
}

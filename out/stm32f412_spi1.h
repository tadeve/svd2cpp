#pragma once

#include <cstdint>
#include <reg.h>

namespace SPI1{
namespace CR1{
enum class SSM_t : uint32_t {
    Disabled = 0, // Software slave management disabled
Enabled = 1, // Software slave management enabled

};
enum class CRCNEXT_t : uint32_t {
    TxBuffer = 0, // Next transmit value is from Tx buffer
CRC = 1, // Next transmit value is from Tx CRC register

};
enum class LSBFIRST_t : uint32_t {
    MSBFirst = 0, // Data is transmitted/received with the MSB first
LSBFirst = 1, // Data is transmitted/received with the LSB first

};
enum class MSTR_t : uint32_t {
    Slave = 0, // Slave configuration
Master = 1, // Master configuration

};
enum class CPHA_t : uint32_t {
    FirstEdge = 0, // The first clock transition is the first data capture edge
SecondEdge = 1, // The second clock transition is the first data capture edge

};
enum class BR_t : uint32_t {
    Div2 = 0, // f_PCLK / 2
Div4 = 1, // f_PCLK / 4
Div8 = 2, // f_PCLK / 8
Div16 = 3, // f_PCLK / 16
Div32 = 4, // f_PCLK / 32
Div64 = 5, // f_PCLK / 64
Div128 = 6, // f_PCLK / 128
Div256 = 7, // f_PCLK / 256

};
enum class CPOL_t : uint32_t {
    IdleLow = 0, // CK to 0 when idle
IdleHigh = 1, // CK to 1 when idle

};
enum class BIDIMODE_t : uint32_t {
    Unidirectional = 0, // 2-line unidirectional data mode selected
Bidirectional = 1, // 1-line bidirectional data mode selected

};
enum class RXONLY_t : uint32_t {
    FullDuplex = 0, // Full duplex (Transmit and receive)
OutputDisabled = 1, // Output disabled (Receive-only mode)

};
enum class SSI_t : uint32_t {
    SlaveSelected = 0, // 0 is forced onto the NSS pin and the I/O value of the NSS pin is ignored
SlaveNotSelected = 1, // 1 is forced onto the NSS pin and the I/O value of the NSS pin is ignored

};
enum class BIDIOE_t : uint32_t {
    OutputDisabled = 0, // Output disabled (receive-only mode)
OutputEnabled = 1, // Output enabled (transmit-only mode)

};
enum class DFF_t : uint32_t {
    EightBit = 0, // 8-bit data frame format is selected for transmission/reception
SixteenBit = 1, // 16-bit data frame format is selected for transmission/reception

};
enum class SPE_t : uint32_t {
    Disabled = 0, // Peripheral disabled
Enabled = 1, // Peripheral enabled

};
enum class CRCEN_t : uint32_t {
    Disabled = 0, // CRC calculation disabled
Enabled = 1, // CRC calculation enabled

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    BIDIMODE_t BIDIMODE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<BIDIMODE_t>(tmp);
}
void BIDIMODE(BIDIMODE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
BIDIOE_t BIDIOE(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<BIDIOE_t>(tmp);
}
void BIDIOE(BIDIOE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
CRCEN_t CRCEN(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<CRCEN_t>(tmp);
}
void CRCEN(CRCEN_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
CRCNEXT_t CRCNEXT(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<CRCNEXT_t>(tmp);
}
void CRCNEXT(CRCNEXT_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
DFF_t DFF(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<DFF_t>(tmp);
}
void DFF(DFF_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
RXONLY_t RXONLY(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<RXONLY_t>(tmp);
}
void RXONLY(RXONLY_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
SSM_t SSM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<SSM_t>(tmp);
}
void SSM(SSM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
SSI_t SSI(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<SSI_t>(tmp);
}
void SSI(SSI_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
LSBFIRST_t LSBFIRST(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<LSBFIRST_t>(tmp);
}
void LSBFIRST(LSBFIRST_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
SPE_t SPE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<SPE_t>(tmp);
}
void SPE(SPE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
BR_t BR(){
    uint32_t tmp = this->bits_masked(0x38) >> 3;
    return reinterpret_cast<BR_t>(tmp);
}
void BR(BR_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x38);
}
MSTR_t MSTR(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<MSTR_t>(tmp);
}
void MSTR(MSTR_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CPOL_t CPOL(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CPOL_t>(tmp);
}
void CPOL(CPOL_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CPHA_t CPHA(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CPHA_t>(tmp);
}
void CPHA(CPHA_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CR2{
enum class TXEIE_t : uint32_t {
    Masked = 0, // TXE interrupt masked
NotMasked = 1, // TXE interrupt not masked

};
enum class SSOE_t : uint32_t {
    Disabled = 0, // SS output is disabled in master mode
Enabled = 1, // SS output is enabled in master mode

};
enum class TXDMAEN_t : uint32_t {
    Disabled = 0, // Tx buffer DMA disabled
Enabled = 1, // Tx buffer DMA enabled

};
enum class ERRIE_t : uint32_t {
    Masked = 0, // Error interrupt masked
NotMasked = 1, // Error interrupt not masked

};
enum class FRF_t : uint32_t {
    Motorola = 0, // SPI Motorola mode
TI = 1, // SPI TI mode

};
enum class RXDMAEN_t : uint32_t {
    Disabled = 0, // Rx buffer DMA disabled
Enabled = 1, // Rx buffer DMA enabled

};
enum class RXNEIE_t : uint32_t {
    Masked = 0, // RXE interrupt masked
NotMasked = 1, // RXE interrupt not masked

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    TXEIE_t TXEIE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXEIE_t>(tmp);
}
void TXEIE(TXEIE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
RXNEIE_t RXNEIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<RXNEIE_t>(tmp);
}
void RXNEIE(RXNEIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ERRIE_t ERRIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ERRIE_t>(tmp);
}
void ERRIE(ERRIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FRF_t FRF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FRF_t>(tmp);
}
void FRF(FRF_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
SSOE_t SSOE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<SSOE_t>(tmp);
}
void SSOE(SSOE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TXDMAEN_t TXDMAEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TXDMAEN_t>(tmp);
}
void TXDMAEN(TXDMAEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
RXDMAEN_t RXDMAEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<RXDMAEN_t>(tmp);
}
void RXDMAEN(RXDMAEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace SR{
enum class CHSIDE_t : uint32_t {
    Left = 0, // Channel left has to be transmitted or has been received
Right = 1, // Channel right has to be transmitted or has been received

};
enum class RXNE_t : uint32_t {
    Empty = 0, // Rx buffer empty
NotEmpty = 1, // Rx buffer not empty

};
enum class TXE_t : uint32_t {
    NotEmpty = 0, // Tx buffer not empty
Empty = 1, // Tx buffer empty

};
enum class MODFR_t : uint32_t {
    NoFault = 0, // No mode fault occurred
Fault = 1, // Mode fault occurred

};
enum class BSYR_t : uint32_t {
    NotBusy = 0, // SPI not busy
Busy = 1, // SPI busy

};
enum class OVRR_t : uint32_t {
    NoOverrun = 0, // No overrun occurred
Overrun = 1, // Overrun occurred

};
enum class FRER_t : uint32_t {
    NoError = 0, // No frame format error
Error = 1, // A frame format error occurred

};
enum class CRCERR_t : uint32_t {
    Match = 0, // CRC value received matches the SPIx_RXCRCR value
NoMatch = 1, // CRC value received does not match the SPIx_RXCRCR value

};
enum class UDRR_t : uint32_t {
    NoUnderrun = 0, // No underrun occurred
Underrun = 1, // Underrun occurred

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    FRER_t FRE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<FRER_t>(tmp);
}
BSYR_t BSY(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<BSYR_t>(tmp);
}
OVRR_t OVR(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<OVRR_t>(tmp);
}
MODFR_t MODF(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<MODFR_t>(tmp);
}
CRCERR_t CRCERR(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CRCERR_t>(tmp);
}
void CRCERR(CRCERR_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
UDRR_t UDR(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<UDRR_t>(tmp);
}
CHSIDE_t CHSIDE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CHSIDE_t>(tmp);
}
TXE_t TXE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TXE_t>(tmp);
}
RXNE_t RXNE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<RXNE_t>(tmp);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public ReadableWritable<address> {
   public:
    DR() : ReadableWritable<address>() {}
    uint16_t DR(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void DR(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace CRCPR{

template <uint32_t address>
class CRCPR : public ReadableWritable<address> {
   public:
    CRCPR() : ReadableWritable<address>() {}
    uint16_t CRCPOLY(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void CRCPOLY(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace RXCRCR{

template <uint32_t address>
class RXCRCR : public Readable<address> {
   public:
    RXCRCR() : Readable<address>() {}
    uint16_t RxCRC(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void RxCRC(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace TXCRCR{

template <uint32_t address>
class TXCRCR : public Readable<address> {
   public:
    TXCRCR() : Readable<address>() {}
    uint16_t TxCRC(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void TxCRC(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace I2SCFGR{
enum class I2SE_t : uint32_t {
    Disabled = 0, // I2S peripheral is disabled
Enabled = 1, // I2S peripheral is enabled

};
enum class I2SMOD_t : uint32_t {
    SPIMode = 0, // SPI mode is selected
I2SMode = 1, // I2S mode is selected

};
enum class DATLEN_t : uint32_t {
    SixteenBit = 0, // 16-bit data length
TwentyFourBit = 1, // 24-bit data length
ThirtyTwoBit = 2, // 32-bit data length

};
enum class CHLEN_t : uint32_t {
    SixteenBit = 0, // 16-bit wide
ThirtyTwoBit = 1, // 32-bit wide

};
enum class I2SSTD_t : uint32_t {
    Philips = 0, // I2S Philips standard
MSB = 1, // MSB justified standard
LSB = 2, // LSB justified standard
PCM = 3, // PCM standard

};
enum class PCMSYNC_t : uint32_t {
    Short = 0, // Short frame synchronisation
Long = 1, // Long frame synchronisation

};
enum class I2SCFG_t : uint32_t {
    SlaveTx = 0, // Slave - transmit
SlaveRx = 1, // Slave - receive
MasterTx = 2, // Master - transmit
MasterRx = 3, // Master - receive

};
enum class CKPOL_t : uint32_t {
    IdleLow = 0, // I2S clock inactive state is low level
IdleHigh = 1, // I2S clock inactive state is high level

};
template <uint32_t address>
class I2SCFGR : public ReadableWritable<address> {
   public:
    I2SCFGR() : ReadableWritable<address>() {}
    I2SMOD_t I2SMOD(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<I2SMOD_t>(tmp);
}
void I2SMOD(I2SMOD_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
I2SE_t I2SE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<I2SE_t>(tmp);
}
void I2SE(I2SE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
I2SCFG_t I2SCFG(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<I2SCFG_t>(tmp);
}
void I2SCFG(I2SCFG_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
PCMSYNC_t PCMSYNC(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<PCMSYNC_t>(tmp);
}
void PCMSYNC(PCMSYNC_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
I2SSTD_t I2SSTD(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<I2SSTD_t>(tmp);
}
void I2SSTD(I2SSTD_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
CKPOL_t CKPOL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CKPOL_t>(tmp);
}
void CKPOL(CKPOL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DATLEN_t DATLEN(){
    uint32_t tmp = this->bits_masked(0x6) >> 1;
    return reinterpret_cast<DATLEN_t>(tmp);
}
void DATLEN(DATLEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x6);
}
CHLEN_t CHLEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CHLEN_t>(tmp);
}
void CHLEN(CHLEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace I2SPR{
enum class ODD_t : uint32_t {
    Even = 0, // Real divider value is I2SDIV * 2
Odd = 1, // Real divider value is (I2SDIV * 2) + 1

};

enum class MCKOE_t : uint32_t {
    Disabled = 0, // Master clock output is disabled
Enabled = 1, // Master clock output is enabled

};
template <uint32_t address>
class I2SPR : public ReadableWritable<address> {
   public:
    I2SPR() : ReadableWritable<address>() {}
    MCKOE_t MCKOE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<MCKOE_t>(tmp);
}
void MCKOE(MCKOE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
ODD_t ODD(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<ODD_t>(tmp);
}
void ODD(ODD_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
uint8_t I2SDIV(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void I2SDIV(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
template<uint32_t base_address>
class SPI{
    public:
    // control register 1
CR1<base_address + 0> CR1; 
// control register 2
CR2<base_address + 4> CR2; 
// status register
SR<base_address + 8> SR; 
// data register
DR<base_address + 12> DR; 
// CRC polynomial register
CRCPR<base_address + 16> CRCPR; 
// RX CRC register
RXCRCR<base_address + 20> RXCRCR; 
// TX CRC register
TXCRCR<base_address + 24> TXCRCR; 
// I2S configuration register
I2SCFGR<base_address + 28> I2SCFGR; 
// I2S prescaler register
I2SPR<base_address + 32> I2SPR; 
};
}

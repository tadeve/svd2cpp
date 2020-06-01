#pragma once

#include <cstdint>
#include <reg.h>

namespace FSMC{
namespace BCR1{
enum class ASYNCWAIT_t : uint32_t {
    Disabled = 0, // Wait signal not used in asynchronous mode
Enabled = 1, // Wait signal used even in asynchronous mode

};
enum class CBURSTRW_t : uint32_t {
    Enabled = 1, // Write operations are performed in synchronous mode
Disabled = 0, // Write operations are always performed in asynchronous mode

};
enum class FACCEN_t : uint32_t {
    Disabled = 0, // Corresponding NOR Flash memory access is disabled
Enabled = 1, // Corresponding NOR Flash memory access is enabled

};
enum class MWID_t : uint32_t {
    Bits8 = 0, // Memory data bus width 8 bits
Bits16 = 1, // Memory data bus width 16 bits
Bits32 = 2, // Memory data bus width 32 bits

};
enum class WFDIS_t : uint32_t {
    Enabled = 0, // Write FIFO enabled
Disabled = 1, // Write FIFO disabled

};
enum class MBKEN_t : uint32_t {
    Disabled = 0, // Corresponding memory bank is disabled
Enabled = 1, // Corresponding memory bank is enabled

};
enum class BURSTEN_t : uint32_t {
    Disabled = 0, // Burst mode disabled
Enabled = 1, // Burst mode enabled

};
enum class CCLKEN_t : uint32_t {
    Enabled = 1, // FSMC_CLK is generated continuously during asynchronous and synchronous access
Disabled = 0, // FSMC_CLK is only generated during the synchronous memory access

};
enum class EXTMOD_t : uint32_t {
    Disabled = 0, // Values inside the FMC_BWTR are not taken into account
Enabled = 1, // Values inside the FMC_BWTR are taken into account

};
enum class MTYP_t : uint32_t {
    SRAM = 0, // SRAM memory type
PSRAM = 1, // PSRAM (CRAM) memory type
Flash = 2, // NOR Flash/OneNAND Flash

};
enum class WAITCFG_t : uint32_t {
    BeforeWaitState = 0, // NWAIT signal is active one data cycle before wait state
DuringWaitState = 1, // NWAIT signal is active during wait state

};
enum class MUXEN_t : uint32_t {
    Disabled = 0, // Address/Data non-multiplexed
Enabled = 1, // Address/Data multiplexed on databus

};
enum class WAITPOL_t : uint32_t {
    ActiveLow = 0, // NWAIT active low
ActiveHigh = 1, // NWAIT active high

};
enum class WREN_t : uint32_t {
    Disabled = 0, // Write operations disabled for the bank by the FMC
Enabled = 1, // Write operations enabled for the bank by the FMC

};
enum class CPSIZE_t : uint32_t {
    NoBurstSplit = 0, // No burst split when crossing page boundary
Bytes128 = 1, // 128 bytes CRAM page size
Bytes256 = 2, // 256 bytes CRAM page size
Bytes512 = 3, // 512 bytes CRAM page size
Bytes1024 = 4, // 1024 bytes CRAM page size

};
enum class WAITEN_t : uint32_t {
    Disabled = 0, // Values inside the FMC_BWTR are taken into account
Enabled = 1, // NWAIT signal enabled

};
template <uint32_t address>
class BCR1 : public ReadableWritable<address> {
   public:
    BCR1() : ReadableWritable<address>() {}
    CBURSTRW_t CBURSTRW(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<CBURSTRW_t>(tmp);
}
void CBURSTRW(CBURSTRW_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
ASYNCWAIT_t ASYNCWAIT(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ASYNCWAIT_t>(tmp);
}
void ASYNCWAIT(ASYNCWAIT_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
EXTMOD_t EXTMOD(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<EXTMOD_t>(tmp);
}
void EXTMOD(EXTMOD_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
WAITEN_t WAITEN(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<WAITEN_t>(tmp);
}
void WAITEN(WAITEN_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
WREN_t WREN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<WREN_t>(tmp);
}
void WREN(WREN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
WAITCFG_t WAITCFG(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<WAITCFG_t>(tmp);
}
void WAITCFG(WAITCFG_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
WAITPOL_t WAITPOL(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<WAITPOL_t>(tmp);
}
void WAITPOL(WAITPOL_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
BURSTEN_t BURSTEN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BURSTEN_t>(tmp);
}
void BURSTEN(BURSTEN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FACCEN_t FACCEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FACCEN_t>(tmp);
}
void FACCEN(FACCEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
MWID_t MWID(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<MWID_t>(tmp);
}
void MWID(MWID_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
MTYP_t MTYP(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<MTYP_t>(tmp);
}
void MTYP(MTYP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
MUXEN_t MUXEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<MUXEN_t>(tmp);
}
void MUXEN(MUXEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MBKEN_t MBKEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<MBKEN_t>(tmp);
}
void MBKEN(MBKEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
WFDIS_t WFDIS(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<WFDIS_t>(tmp);
}
void WFDIS(WFDIS_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
CCLKEN_t CCLKEN(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<CCLKEN_t>(tmp);
}
void CCLKEN(CCLKEN_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
CPSIZE_t CPSIZE(){
    uint32_t tmp = this->bits_masked(0x70000) >> 16;
    return reinterpret_cast<CPSIZE_t>(tmp);
}
void CPSIZE(CPSIZE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x70000);
}
};
}
namespace BTR%s{

enum class ACCMOD_t : uint32_t {
    A = 0, // Access mode A
B = 1, // Access mode B
C = 2, // Access mode C
D = 3, // Access mode D

};
template <uint32_t address>
class BTR%s : public ReadableWritable<address> {
   public:
    BTR%s() : ReadableWritable<address>() {}
    ACCMOD_t ACCMOD(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<ACCMOD_t>(tmp);
}
void ACCMOD(ACCMOD_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
uint8_t DATLAT(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void DATLAT(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
uint8_t CLKDIV(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<uint8_t>(tmp);
}
void CLKDIV(uint8_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
uint8_t BUSTURN(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void BUSTURN(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
uint8_t DATAST(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void DATAST(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t ADDHLD(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void ADDHLD(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
uint8_t ADDSET(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void ADDSET(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace BCR%s{
enum class ASYNCWAIT_t : uint32_t {
    Disabled = 0, // Wait signal not used in asynchronous mode
Enabled = 1, // Wait signal used even in asynchronous mode

};
enum class CBURSTRW_t : uint32_t {
    Enabled = 1, // Write operations are performed in synchronous mode
Disabled = 0, // Write operations are always performed in asynchronous mode

};
enum class FACCEN_t : uint32_t {
    Disabled = 0, // Corresponding NOR Flash memory access is disabled
Enabled = 1, // Corresponding NOR Flash memory access is enabled

};
enum class MWID_t : uint32_t {
    Bits8 = 0, // Memory data bus width 8 bits
Bits16 = 1, // Memory data bus width 16 bits
Bits32 = 2, // Memory data bus width 32 bits

};
enum class MBKEN_t : uint32_t {
    Disabled = 0, // Corresponding memory bank is disabled
Enabled = 1, // Corresponding memory bank is enabled

};
enum class BURSTEN_t : uint32_t {
    Disabled = 0, // Burst mode disabled
Enabled = 1, // Burst mode enabled

};
enum class EXTMOD_t : uint32_t {
    Disabled = 0, // Values inside the FMC_BWTR are not taken into account
Enabled = 1, // Values inside the FMC_BWTR are taken into account

};
enum class MTYP_t : uint32_t {
    SRAM = 0, // SRAM memory type
PSRAM = 1, // PSRAM (CRAM) memory type
Flash = 2, // NOR Flash/OneNAND Flash

};
enum class WAITCFG_t : uint32_t {
    BeforeWaitState = 0, // NWAIT signal is active one data cycle before wait state
DuringWaitState = 1, // NWAIT signal is active during wait state

};
enum class MUXEN_t : uint32_t {
    Disabled = 0, // Address/Data non-multiplexed
Enabled = 1, // Address/Data multiplexed on databus

};
enum class WAITPOL_t : uint32_t {
    ActiveLow = 0, // NWAIT active low
ActiveHigh = 1, // NWAIT active high

};
enum class WREN_t : uint32_t {
    Disabled = 0, // Write operations disabled for the bank by the FMC
Enabled = 1, // Write operations enabled for the bank by the FMC

};
enum class CPSIZE_t : uint32_t {
    NoBurstSplit = 0, // No burst split when crossing page boundary
Bytes128 = 1, // 128 bytes CRAM page size
Bytes256 = 2, // 256 bytes CRAM page size
Bytes512 = 3, // 512 bytes CRAM page size
Bytes1024 = 4, // 1024 bytes CRAM page size

};
enum class WAITEN_t : uint32_t {
    Disabled = 0, // Values inside the FMC_BWTR are taken into account
Enabled = 1, // NWAIT signal enabled

};
template <uint32_t address>
class BCR%s : public ReadableWritable<address> {
   public:
    BCR%s() : ReadableWritable<address>() {}
    CBURSTRW_t CBURSTRW(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<CBURSTRW_t>(tmp);
}
void CBURSTRW(CBURSTRW_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
ASYNCWAIT_t ASYNCWAIT(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ASYNCWAIT_t>(tmp);
}
void ASYNCWAIT(ASYNCWAIT_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
EXTMOD_t EXTMOD(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<EXTMOD_t>(tmp);
}
void EXTMOD(EXTMOD_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
WAITEN_t WAITEN(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<WAITEN_t>(tmp);
}
void WAITEN(WAITEN_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
WREN_t WREN(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<WREN_t>(tmp);
}
void WREN(WREN_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
WAITCFG_t WAITCFG(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<WAITCFG_t>(tmp);
}
void WAITCFG(WAITCFG_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
WAITPOL_t WAITPOL(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<WAITPOL_t>(tmp);
}
void WAITPOL(WAITPOL_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
BURSTEN_t BURSTEN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BURSTEN_t>(tmp);
}
void BURSTEN(BURSTEN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FACCEN_t FACCEN(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FACCEN_t>(tmp);
}
void FACCEN(FACCEN_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
MWID_t MWID(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<MWID_t>(tmp);
}
void MWID(MWID_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
MTYP_t MTYP(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<MTYP_t>(tmp);
}
void MTYP(MTYP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
MUXEN_t MUXEN(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<MUXEN_t>(tmp);
}
void MUXEN(MUXEN_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MBKEN_t MBKEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<MBKEN_t>(tmp);
}
void MBKEN(MBKEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CPSIZE_t CPSIZE(){
    uint32_t tmp = this->bits_masked(0x70000) >> 16;
    return reinterpret_cast<CPSIZE_t>(tmp);
}
void CPSIZE(CPSIZE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x70000);
}
};
}
namespace BWTR%s{

enum class ACCMOD_t : uint32_t {
    A = 0, // Access mode A
B = 1, // Access mode B
C = 2, // Access mode C
D = 3, // Access mode D

};
template <uint32_t address>
class BWTR%s : public ReadableWritable<address> {
   public:
    BWTR%s() : ReadableWritable<address>() {}
    ACCMOD_t ACCMOD(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<ACCMOD_t>(tmp);
}
void ACCMOD(ACCMOD_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
uint8_t DATAST(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void DATAST(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t ADDHLD(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<uint8_t>(tmp);
}
void ADDHLD(uint8_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
uint8_t ADDSET(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void ADDSET(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
uint8_t BUSTURN(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void BUSTURN(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
};
}
template<uint32_t base_address>
class FSMC{
    public:
    // SRAM/NOR-Flash chip-select control register1
BCR1<base_address + 0> BCR1; 
// SRAM/NOR-Flash chip-select timing register1
BTR%s<base_address + 4> BTR%s; 
// SRAM/NOR-Flash chip-select control register2
BCR%s<base_address + 8> BCR%s; 
// SRAM/NOR-Flash write timing registers1
BWTR%s<base_address + 260> BWTR%s; 
};
}

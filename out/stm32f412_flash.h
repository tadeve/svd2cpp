#pragma once

#include <cstdint>
#include <reg.h>

namespace FLASH{
namespace ACR{
enum class DCEN_t : uint32_t {
    DCEN_0 = 0, // field has value 0x0
DCEN_1 = 1, // field has value 0x1

};
enum class ICRST_t : uint32_t {
    ICRST_0 = 0, // field has value 0x0
ICRST_1 = 1, // field has value 0x1

};
enum class DCRST_t : uint32_t {
    DCRST_0 = 0, // field has value 0x0
DCRST_1 = 1, // field has value 0x1

};
enum class ICEN_t : uint32_t {
    ICEN_0 = 0, // field has value 0x0
ICEN_1 = 1, // field has value 0x1

};
enum class PRFTEN_t : uint32_t {
    PRFTEN_0 = 0, // field has value 0x0
PRFTEN_1 = 1, // field has value 0x1

};
enum class LATENCY_t : uint32_t {
    LATENCY_0 = 0, // field has value 0x0
LATENCY_1 = 1, // field has value 0x1
LATENCY_2 = 2, // field has value 0x2
LATENCY_3 = 3, // field has value 0x3
LATENCY_4 = 4, // field has value 0x4
LATENCY_5 = 5, // field has value 0x5
LATENCY_6 = 6, // field has value 0x6
LATENCY_7 = 7, // field has value 0x7

};
template <uint32_t address>
class ACR : public ReadableWritable<address> {
   public:
    ACR() : ReadableWritable<address>() {}
    LATENCY_t LATENCY(){
    uint32_t tmp = this->bits_masked(0x7) >> 0;
    return reinterpret_cast<LATENCY_t>(tmp);
}
void LATENCY(LATENCY_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7);
}
PRFTEN_t PRFTEN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<PRFTEN_t>(tmp);
}
void PRFTEN(PRFTEN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
ICEN_t ICEN(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ICEN_t>(tmp);
}
void ICEN(ICEN_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DCEN_t DCEN(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DCEN_t>(tmp);
}
void DCEN(DCEN_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
void ICRST(ICRST_t v){
   uint32_t tmp = v << 11;
   this->bits(v);
}
DCRST_t DCRST(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<DCRST_t>(tmp);
}
void DCRST(DCRST_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
};
}
namespace KEYR{

template <uint32_t address>
class KEYR : public Writable<address> {
   public:
    KEYR() : Writable<address>() {}
    uint32_t KEY(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void KEY(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace OPTKEYR{

template <uint32_t address>
class OPTKEYR : public Writable<address> {
   public:
    OPTKEYR() : Writable<address>() {}
    uint32_t OPTKEY(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void OPTKEY(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace SR{
enum class PGSERR_t : uint32_t {
    PGSERR_0 = 0, // field has value 0x0
PGSERR_1 = 1, // field has value 0x1

};
enum class EOP_t : uint32_t {
    EOP_0 = 0, // field has value 0x0
EOP_1 = 1, // field has value 0x1

};
enum class WRPERR_t : uint32_t {
    WRPERR_0 = 0, // field has value 0x0
WRPERR_1 = 1, // field has value 0x1

};
enum class PGAERR_t : uint32_t {
    PGAERR_0 = 0, // field has value 0x0
PGAERR_1 = 1, // field has value 0x1

};
enum class BSY_t : uint32_t {
    BSY_0 = 0, // field has value 0x0
BSY_1 = 1, // field has value 0x1

};
enum class PGPERR_t : uint32_t {
    PGPERR_0 = 0, // field has value 0x0
PGPERR_1 = 1, // field has value 0x1

};
enum class OPERR_t : uint32_t {
    OPERR_0 = 0, // field has value 0x0
OPERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    EOP_t EOP(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<EOP_t>(tmp);
}
void EOP(EOP_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
OPERR_t OPERR(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<OPERR_t>(tmp);
}
void OPERR(OPERR_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
WRPERR_t WRPERR(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<WRPERR_t>(tmp);
}
void WRPERR(WRPERR_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
PGAERR_t PGAERR(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<PGAERR_t>(tmp);
}
void PGAERR(PGAERR_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
PGPERR_t PGPERR(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<PGPERR_t>(tmp);
}
void PGPERR(PGPERR_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
PGSERR_t PGSERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<PGSERR_t>(tmp);
}
void PGSERR(PGSERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BSY_t BSY(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<BSY_t>(tmp);
}
};
}
namespace CR{
enum class ERRIE_t : uint32_t {
    ERRIE_0 = 0, // field has value 0x0
ERRIE_1 = 1, // field has value 0x1

};
enum class LOCK_t : uint32_t {
    LOCK_0 = 0, // field has value 0x0
LOCK_1 = 1, // field has value 0x1

};
enum class SER_t : uint32_t {
    SER_0 = 0, // field has value 0x0
SER_1 = 1, // field has value 0x1

};
enum class PSIZE_t : uint32_t {
    PSIZE_0 = 0, // field has value 0x0
PSIZE_1 = 1, // field has value 0x1
PSIZE_2 = 2, // field has value 0x2
PSIZE_3 = 3, // field has value 0x3

};
enum class PG_t : uint32_t {
    PG_0 = 0, // field has value 0x0
PG_1 = 1, // field has value 0x1

};
enum class STRT_t : uint32_t {
    STRT_0 = 0, // field has value 0x0
STRT_1 = 1, // field has value 0x1

};
enum class SNB_t : uint32_t {
    SNB_0 = 0, // field has value 0x0
SNB_1 = 1, // field has value 0x1
SNB_2 = 2, // field has value 0x2
SNB_3 = 3, // field has value 0x3
SNB_4 = 4, // field has value 0x4
SNB_5 = 5, // field has value 0x5
SNB_6 = 6, // field has value 0x6
SNB_7 = 7, // field has value 0x7
SNB_8 = 8, // field has value 0x8
SNB_9 = 9, // field has value 0x9
SNB_10 = 10, // field has value 0xa
SNB_11 = 11, // field has value 0xb
SNB_12 = 12, // field has value 0xc
SNB_13 = 13, // field has value 0xd
SNB_14 = 14, // field has value 0xe
SNB_15 = 15, // field has value 0xf

};
enum class EOPIE_t : uint32_t {
    EOPIE_0 = 0, // field has value 0x0
EOPIE_1 = 1, // field has value 0x1

};
enum class MER_t : uint32_t {
    MER_0 = 0, // field has value 0x0
MER_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    PG_t PG(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PG_t>(tmp);
}
void PG(PG_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
SER_t SER(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SER_t>(tmp);
}
void SER(SER_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MER_t MER(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<MER_t>(tmp);
}
void MER(MER_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
SNB_t SNB(){
    uint32_t tmp = this->bits_masked(0x78) >> 3;
    return reinterpret_cast<SNB_t>(tmp);
}
void SNB(SNB_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x78);
}
PSIZE_t PSIZE(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<PSIZE_t>(tmp);
}
void PSIZE(PSIZE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
STRT_t STRT(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<STRT_t>(tmp);
}
void STRT(STRT_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
EOPIE_t EOPIE(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<EOPIE_t>(tmp);
}
void EOPIE(EOPIE_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
ERRIE_t ERRIE(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<ERRIE_t>(tmp);
}
void ERRIE(ERRIE_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
LOCK_t LOCK(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<LOCK_t>(tmp);
}
void LOCK(LOCK_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace OPTCR{

enum class OPTLOCK_t : uint32_t {
    OPTLOCK_0 = 0, // field has value 0x0
OPTLOCK_1 = 1, // field has value 0x1

};
enum class WDG_SW_t : uint32_t {
    WDG_SW_0 = 0, // field has value 0x0
WDG_SW_1 = 1, // field has value 0x1

};
enum class nRST_STOP_t : uint32_t {
    nRST_STOP_0 = 0, // field has value 0x0
nRST_STOP_1 = 1, // field has value 0x1

};
enum class OPTSTRT_t : uint32_t {
    OPTSTRT_0 = 0, // field has value 0x0
OPTSTRT_1 = 1, // field has value 0x1

};
enum class BOR_LEV_t : uint32_t {
    BOR_LEV_0 = 0, // field has value 0x0
BOR_LEV_1 = 1, // field has value 0x1
BOR_LEV_2 = 2, // field has value 0x2
BOR_LEV_3 = 3, // field has value 0x3

};
enum class nRST_STDBY_t : uint32_t {
    nRST_STDBY_0 = 0, // field has value 0x0
nRST_STDBY_1 = 1, // field has value 0x1

};
template <uint32_t address>
class OPTCR : public ReadableWritable<address> {
   public:
    OPTCR() : ReadableWritable<address>() {}
    OPTLOCK_t OPTLOCK(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<OPTLOCK_t>(tmp);
}
void OPTLOCK(OPTLOCK_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
OPTSTRT_t OPTSTRT(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<OPTSTRT_t>(tmp);
}
void OPTSTRT(OPTSTRT_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
BOR_LEV_t BOR_LEV(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<BOR_LEV_t>(tmp);
}
void BOR_LEV(BOR_LEV_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
WDG_SW_t WDG_SW(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<WDG_SW_t>(tmp);
}
void WDG_SW(WDG_SW_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
nRST_STOP_t nRST_STOP(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<nRST_STOP_t>(tmp);
}
void nRST_STOP(nRST_STOP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
nRST_STDBY_t nRST_STDBY(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<nRST_STDBY_t>(tmp);
}
void nRST_STDBY(nRST_STDBY_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
uint8_t RDP(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void RDP(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint16_t nWRP(){
    uint32_t tmp = this->bits_masked(0xfff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void nWRP(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xfff0000);
}
};
}
template<uint32_t base_address>
class FLASH{
    public:
    // Flash access control register
ACR<base_address + 0> ACR; 
// Flash key register
KEYR<base_address + 4> KEYR; 
// Flash option key register
OPTKEYR<base_address + 8> OPTKEYR; 
// Status register
SR<base_address + 12> SR; 
// Control register
CR<base_address + 16> CR; 
// Flash option control register
OPTCR<base_address + 20> OPTCR; 
};
}

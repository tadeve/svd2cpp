#pragma once

#include <cstdint>
#include <reg.h>

namespace PWR{
namespace CR{
enum class CSBF_t : uint32_t {
    CSBF_0 = 0, // field has value 0x0
CSBF_1 = 1, // field has value 0x1

};
enum class FPDS_t : uint32_t {
    FPDS_0 = 0, // field has value 0x0
FPDS_1 = 1, // field has value 0x1

};
enum class PLS_t : uint32_t {
    PLS_0 = 0, // field has value 0x0
PLS_1 = 1, // field has value 0x1
PLS_2 = 2, // field has value 0x2
PLS_3 = 3, // field has value 0x3
PLS_4 = 4, // field has value 0x4
PLS_5 = 5, // field has value 0x5
PLS_6 = 6, // field has value 0x6
PLS_7 = 7, // field has value 0x7

};
enum class PDDS_t : uint32_t {
    PDDS_0 = 0, // field has value 0x0
PDDS_1 = 1, // field has value 0x1

};
enum class LPDS_t : uint32_t {
    LPDS_0 = 0, // field has value 0x0
LPDS_1 = 1, // field has value 0x1

};
enum class DBP_t : uint32_t {
    DBP_0 = 0, // field has value 0x0
DBP_1 = 1, // field has value 0x1

};
enum class ADCDC1_t : uint32_t {
    ADCDC1_0 = 0, // field has value 0x0
ADCDC1_1 = 1, // field has value 0x1

};
enum class PVDE_t : uint32_t {
    PVDE_0 = 0, // field has value 0x0
PVDE_1 = 1, // field has value 0x1

};
enum class VOS_t : uint32_t {
    VOS_0 = 0, // field has value 0x0
VOS_1 = 1, // field has value 0x1
VOS_2 = 2, // field has value 0x2
VOS_3 = 3, // field has value 0x3

};
enum class CWUF_t : uint32_t {
    CWUF_0 = 0, // field has value 0x0
CWUF_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    VOS_t VOS(){
    uint32_t tmp = this->bits_masked(0xc000) >> 14;
    return reinterpret_cast<VOS_t>(tmp);
}
void VOS(VOS_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0xc000);
}
ADCDC1_t ADCDC1(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ADCDC1_t>(tmp);
}
void ADCDC1(ADCDC1_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
FPDS_t FPDS(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FPDS_t>(tmp);
}
void FPDS(FPDS_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DBP_t DBP(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DBP_t>(tmp);
}
void DBP(DBP_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
PLS_t PLS(){
    uint32_t tmp = this->bits_masked(0xe0) >> 5;
    return reinterpret_cast<PLS_t>(tmp);
}
void PLS(PLS_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0xe0);
}
PVDE_t PVDE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<PVDE_t>(tmp);
}
void PVDE(PVDE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
CSBF_t CSBF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CSBF_t>(tmp);
}
void CSBF(CSBF_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CWUF_t CWUF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CWUF_t>(tmp);
}
void CWUF(CWUF_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
PDDS_t PDDS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<PDDS_t>(tmp);
}
void PDDS(PDDS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
LPDS_t LPDS(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<LPDS_t>(tmp);
}
void LPDS(LPDS_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace CSR{
enum class BRE_t : uint32_t {
    BRE_0 = 0, // field has value 0x0
BRE_1 = 1, // field has value 0x1

};
enum class SBF_t : uint32_t {
    SBF_0 = 0, // field has value 0x0
SBF_1 = 1, // field has value 0x1

};
enum class EWUP_t : uint32_t {
    EWUP_0 = 0, // field has value 0x0
EWUP_1 = 1, // field has value 0x1

};
enum class WUF_t : uint32_t {
    WUF_0 = 0, // field has value 0x0
WUF_1 = 1, // field has value 0x1

};
enum class BRR_t : uint32_t {
    BRR_0 = 0, // field has value 0x0
BRR_1 = 1, // field has value 0x1

};
enum class VOSRDY_t : uint32_t {
    VOSRDY_0 = 0, // field has value 0x0
VOSRDY_1 = 1, // field has value 0x1

};
enum class PVDO_t : uint32_t {
    PVDO_0 = 0, // field has value 0x0
PVDO_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CSR : public ReadableWritable<address> {
   public:
    CSR() : ReadableWritable<address>() {}
    WUF_t WUF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<WUF_t>(tmp);
}
SBF_t SBF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SBF_t>(tmp);
}
PVDO_t PVDO(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<PVDO_t>(tmp);
}
BRR_t BRR(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<BRR_t>(tmp);
}
EWUP_t EWUP(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<EWUP_t>(tmp);
}
void EWUP(EWUP_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
BRE_t BRE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<BRE_t>(tmp);
}
void BRE(BRE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
VOSRDY_t VOSRDY(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<VOSRDY_t>(tmp);
}
void VOSRDY(VOSRDY_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
};
}
template<uint32_t base_address>
class PWR{
    public:
    // power control register
CR<base_address + 0> CR; 
// power control/status register
CSR<base_address + 4> CSR; 
};
}

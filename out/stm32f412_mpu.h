#pragma once

#include <cstdint>
#include <reg.h>

namespace MPU{
namespace MPU_TYPER{

enum class SEPARATE_t : uint32_t {
    SEPARATE_0 = 0, // field has value 0x0
SEPARATE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class MPU_TYPER : public Readable<address> {
   public:
    MPU_TYPER() : Readable<address>() {}
    SEPARATE_t SEPARATE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<SEPARATE_t>(tmp);
}
void SEPARATE(SEPARATE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
uint8_t DREGION(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void DREGION(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IREGION(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IREGION(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
};
}
namespace MPU_CTRL{
enum class HFNMIENA_t : uint32_t {
    HFNMIENA_0 = 0, // field has value 0x0
HFNMIENA_1 = 1, // field has value 0x1

};
enum class ENABLE_t : uint32_t {
    ENABLE_0 = 0, // field has value 0x0
ENABLE_1 = 1, // field has value 0x1

};
enum class PRIVDEFENA_t : uint32_t {
    PRIVDEFENA_0 = 0, // field has value 0x0
PRIVDEFENA_1 = 1, // field has value 0x1

};
template <uint32_t address>
class MPU_CTRL : public Readable<address> {
   public:
    MPU_CTRL() : Readable<address>() {}
    ENABLE_t ENABLE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ENABLE_t>(tmp);
}
void ENABLE(ENABLE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
HFNMIENA_t HFNMIENA(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<HFNMIENA_t>(tmp);
}
void HFNMIENA(HFNMIENA_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
PRIVDEFENA_t PRIVDEFENA(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<PRIVDEFENA_t>(tmp);
}
void PRIVDEFENA(PRIVDEFENA_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
};
}
namespace MPU_RNR{

template <uint32_t address>
class MPU_RNR : public ReadableWritable<address> {
   public:
    MPU_RNR() : ReadableWritable<address>() {}
    uint8_t REGION(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void REGION(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace MPU_RBAR{
enum class VALID_t : uint32_t {
    VALID_0 = 0, // field has value 0x0
VALID_1 = 1, // field has value 0x1

};

enum class REGION_t : uint32_t {
    REGION_0 = 0, // field has value 0x0
REGION_1 = 1, // field has value 0x1
REGION_2 = 2, // field has value 0x2
REGION_3 = 3, // field has value 0x3
REGION_4 = 4, // field has value 0x4
REGION_5 = 5, // field has value 0x5
REGION_6 = 6, // field has value 0x6
REGION_7 = 7, // field has value 0x7
REGION_8 = 8, // field has value 0x8
REGION_9 = 9, // field has value 0x9
REGION_10 = 10, // field has value 0xa
REGION_11 = 11, // field has value 0xb
REGION_12 = 12, // field has value 0xc
REGION_13 = 13, // field has value 0xd
REGION_14 = 14, // field has value 0xe
REGION_15 = 15, // field has value 0xf

};
template <uint32_t address>
class MPU_RBAR : public ReadableWritable<address> {
   public:
    MPU_RBAR() : ReadableWritable<address>() {}
    REGION_t REGION(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<REGION_t>(tmp);
}
void REGION(REGION_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
VALID_t VALID(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<VALID_t>(tmp);
}
void VALID(VALID_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
uint32_t ADDR(){
    uint32_t tmp = this->bits_masked(0xffffffe0) >> 5;
    return reinterpret_cast<uint32_t>(tmp);
}
void ADDR(uint32_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0xffffffe0);
}
};
}
namespace MPU_RASR{

enum class C_t : uint32_t {
    C_0 = 0, // field has value 0x0
C_1 = 1, // field has value 0x1

};
enum class XN_t : uint32_t {
    XN_0 = 0, // field has value 0x0
XN_1 = 1, // field has value 0x1

};
enum class SIZE_t : uint32_t {
    SIZE_0 = 0, // field has value 0x0
SIZE_1 = 1, // field has value 0x1
SIZE_2 = 2, // field has value 0x2
SIZE_3 = 3, // field has value 0x3
SIZE_4 = 4, // field has value 0x4
SIZE_5 = 5, // field has value 0x5
SIZE_6 = 6, // field has value 0x6
SIZE_7 = 7, // field has value 0x7
SIZE_8 = 8, // field has value 0x8
SIZE_9 = 9, // field has value 0x9
SIZE_10 = 10, // field has value 0xa
SIZE_11 = 11, // field has value 0xb
SIZE_12 = 12, // field has value 0xc
SIZE_13 = 13, // field has value 0xd
SIZE_14 = 14, // field has value 0xe
SIZE_15 = 15, // field has value 0xf
SIZE_16 = 16, // field has value 0x10
SIZE_17 = 17, // field has value 0x11
SIZE_18 = 18, // field has value 0x12
SIZE_19 = 19, // field has value 0x13
SIZE_20 = 20, // field has value 0x14
SIZE_21 = 21, // field has value 0x15
SIZE_22 = 22, // field has value 0x16
SIZE_23 = 23, // field has value 0x17
SIZE_24 = 24, // field has value 0x18
SIZE_25 = 25, // field has value 0x19
SIZE_26 = 26, // field has value 0x1a
SIZE_27 = 27, // field has value 0x1b
SIZE_28 = 28, // field has value 0x1c
SIZE_29 = 29, // field has value 0x1d
SIZE_30 = 30, // field has value 0x1e
SIZE_31 = 31, // field has value 0x1f

};
enum class TEX_t : uint32_t {
    TEX_0 = 0, // field has value 0x0
TEX_1 = 1, // field has value 0x1
TEX_2 = 2, // field has value 0x2
TEX_3 = 3, // field has value 0x3
TEX_4 = 4, // field has value 0x4
TEX_5 = 5, // field has value 0x5
TEX_6 = 6, // field has value 0x6
TEX_7 = 7, // field has value 0x7

};
enum class AP_t : uint32_t {
    AP_0 = 0, // field has value 0x0
AP_1 = 1, // field has value 0x1
AP_2 = 2, // field has value 0x2
AP_3 = 3, // field has value 0x3
AP_4 = 4, // field has value 0x4
AP_5 = 5, // field has value 0x5
AP_6 = 6, // field has value 0x6
AP_7 = 7, // field has value 0x7

};
enum class S_t : uint32_t {
    S_0 = 0, // field has value 0x0
S_1 = 1, // field has value 0x1

};
enum class ENABLE_t : uint32_t {
    ENABLE_0 = 0, // field has value 0x0
ENABLE_1 = 1, // field has value 0x1

};
enum class B_t : uint32_t {
    B_0 = 0, // field has value 0x0
B_1 = 1, // field has value 0x1

};
template <uint32_t address>
class MPU_RASR : public ReadableWritable<address> {
   public:
    MPU_RASR() : ReadableWritable<address>() {}
    ENABLE_t ENABLE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ENABLE_t>(tmp);
}
void ENABLE(ENABLE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
SIZE_t SIZE(){
    uint32_t tmp = this->bits_masked(0x3e) >> 1;
    return reinterpret_cast<SIZE_t>(tmp);
}
void SIZE(SIZE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x3e);
}
uint8_t SRD(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void SRD(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
B_t B(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<B_t>(tmp);
}
void B(B_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
C_t C(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<C_t>(tmp);
}
void C(C_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
S_t S(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<S_t>(tmp);
}
void S(S_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TEX_t TEX(){
    uint32_t tmp = this->bits_masked(0x380000) >> 19;
    return reinterpret_cast<TEX_t>(tmp);
}
void TEX(TEX_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x380000);
}
AP_t AP(){
    uint32_t tmp = this->bits_masked(0x7000000) >> 24;
    return reinterpret_cast<AP_t>(tmp);
}
void AP(AP_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x7000000);
}
XN_t XN(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<XN_t>(tmp);
}
void XN(XN_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
};
}
template<uint32_t base_address>
class MPU{
    public:
    // MPU type register
MPU_TYPER<base_address + 0> MPU_TYPER; 
// MPU control register
MPU_CTRL<base_address + 4> MPU_CTRL; 
// MPU region number register
MPU_RNR<base_address + 8> MPU_RNR; 
// MPU region base addressregister
MPU_RBAR<base_address + 12> MPU_RBAR; 
// MPU region attribute and sizeregister
MPU_RASR<base_address + 16> MPU_RASR; 
};
}

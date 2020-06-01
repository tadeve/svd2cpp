#pragma once

#include <cstdint>
#include <reg.h>

namespace SDIO{
namespace POWER{
enum class PWRCTRL_t : uint32_t {
    PWRCTRL_0 = 0, // field has value 0x0
PWRCTRL_1 = 1, // field has value 0x1
PWRCTRL_2 = 2, // field has value 0x2
PWRCTRL_3 = 3, // field has value 0x3

};
template <uint32_t address>
class POWER : public ReadableWritable<address> {
   public:
    POWER() : ReadableWritable<address>() {}
    PWRCTRL_t PWRCTRL(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<PWRCTRL_t>(tmp);
}
void PWRCTRL(PWRCTRL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace CLKCR{
enum class PWRSAV_t : uint32_t {
    PWRSAV_0 = 0, // field has value 0x0
PWRSAV_1 = 1, // field has value 0x1

};
enum class NEGEDGE_t : uint32_t {
    NEGEDGE_0 = 0, // field has value 0x0
NEGEDGE_1 = 1, // field has value 0x1

};

enum class HWFC_EN_t : uint32_t {
    HWFC_EN_0 = 0, // field has value 0x0
HWFC_EN_1 = 1, // field has value 0x1

};
enum class CLKEN_t : uint32_t {
    CLKEN_0 = 0, // field has value 0x0
CLKEN_1 = 1, // field has value 0x1

};
enum class BYPASS_t : uint32_t {
    BYPASS_0 = 0, // field has value 0x0
BYPASS_1 = 1, // field has value 0x1

};
enum class WIDBUS_t : uint32_t {
    WIDBUS_0 = 0, // field has value 0x0
WIDBUS_1 = 1, // field has value 0x1
WIDBUS_2 = 2, // field has value 0x2
WIDBUS_3 = 3, // field has value 0x3

};
template <uint32_t address>
class CLKCR : public ReadableWritable<address> {
   public:
    CLKCR() : ReadableWritable<address>() {}
    HWFC_EN_t HWFC_EN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<HWFC_EN_t>(tmp);
}
void HWFC_EN(HWFC_EN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
NEGEDGE_t NEGEDGE(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<NEGEDGE_t>(tmp);
}
void NEGEDGE(NEGEDGE_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
WIDBUS_t WIDBUS(){
    uint32_t tmp = this->bits_masked(0x1800) >> 11;
    return reinterpret_cast<WIDBUS_t>(tmp);
}
void WIDBUS(WIDBUS_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x1800);
}
BYPASS_t BYPASS(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<BYPASS_t>(tmp);
}
void BYPASS(BYPASS_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
PWRSAV_t PWRSAV(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<PWRSAV_t>(tmp);
}
void PWRSAV(PWRSAV_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
CLKEN_t CLKEN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<CLKEN_t>(tmp);
}
void CLKEN(CLKEN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
uint8_t CLKDIV(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void CLKDIV(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace ARG{

template <uint32_t address>
class ARG : public ReadableWritable<address> {
   public:
    ARG() : ReadableWritable<address>() {}
    uint32_t CMDARG(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CMDARG(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace CMD{
enum class WAITRESP_t : uint32_t {
    WAITRESP_0 = 0, // field has value 0x0
WAITRESP_1 = 1, // field has value 0x1
WAITRESP_2 = 2, // field has value 0x2
WAITRESP_3 = 3, // field has value 0x3

};
enum class nIEN_t : uint32_t {
    nIEN_0 = 0, // field has value 0x0
nIEN_1 = 1, // field has value 0x1

};
enum class WAITINT_t : uint32_t {
    WAITINT_0 = 0, // field has value 0x0
WAITINT_1 = 1, // field has value 0x1

};
enum class CE_ATACMD_t : uint32_t {
    CE_ATACMD_0 = 0, // field has value 0x0
CE_ATACMD_1 = 1, // field has value 0x1

};
enum class SDIOSuspend_t : uint32_t {
    SDIOSuspend_0 = 0, // field has value 0x0
SDIOSuspend_1 = 1, // field has value 0x1

};
enum class CMDINDEX_t : uint32_t {
    CMDINDEX_0 = 0, // field has value 0x0
CMDINDEX_1 = 1, // field has value 0x1
CMDINDEX_2 = 2, // field has value 0x2
CMDINDEX_3 = 3, // field has value 0x3
CMDINDEX_4 = 4, // field has value 0x4
CMDINDEX_5 = 5, // field has value 0x5
CMDINDEX_6 = 6, // field has value 0x6
CMDINDEX_7 = 7, // field has value 0x7
CMDINDEX_8 = 8, // field has value 0x8
CMDINDEX_9 = 9, // field has value 0x9
CMDINDEX_10 = 10, // field has value 0xa
CMDINDEX_11 = 11, // field has value 0xb
CMDINDEX_12 = 12, // field has value 0xc
CMDINDEX_13 = 13, // field has value 0xd
CMDINDEX_14 = 14, // field has value 0xe
CMDINDEX_15 = 15, // field has value 0xf
CMDINDEX_16 = 16, // field has value 0x10
CMDINDEX_17 = 17, // field has value 0x11
CMDINDEX_18 = 18, // field has value 0x12
CMDINDEX_19 = 19, // field has value 0x13
CMDINDEX_20 = 20, // field has value 0x14
CMDINDEX_21 = 21, // field has value 0x15
CMDINDEX_22 = 22, // field has value 0x16
CMDINDEX_23 = 23, // field has value 0x17
CMDINDEX_24 = 24, // field has value 0x18
CMDINDEX_25 = 25, // field has value 0x19
CMDINDEX_26 = 26, // field has value 0x1a
CMDINDEX_27 = 27, // field has value 0x1b
CMDINDEX_28 = 28, // field has value 0x1c
CMDINDEX_29 = 29, // field has value 0x1d
CMDINDEX_30 = 30, // field has value 0x1e
CMDINDEX_31 = 31, // field has value 0x1f
CMDINDEX_32 = 32, // field has value 0x20
CMDINDEX_33 = 33, // field has value 0x21
CMDINDEX_34 = 34, // field has value 0x22
CMDINDEX_35 = 35, // field has value 0x23
CMDINDEX_36 = 36, // field has value 0x24
CMDINDEX_37 = 37, // field has value 0x25
CMDINDEX_38 = 38, // field has value 0x26
CMDINDEX_39 = 39, // field has value 0x27
CMDINDEX_40 = 40, // field has value 0x28
CMDINDEX_41 = 41, // field has value 0x29
CMDINDEX_42 = 42, // field has value 0x2a
CMDINDEX_43 = 43, // field has value 0x2b
CMDINDEX_44 = 44, // field has value 0x2c
CMDINDEX_45 = 45, // field has value 0x2d
CMDINDEX_46 = 46, // field has value 0x2e
CMDINDEX_47 = 47, // field has value 0x2f
CMDINDEX_48 = 48, // field has value 0x30
CMDINDEX_49 = 49, // field has value 0x31
CMDINDEX_50 = 50, // field has value 0x32
CMDINDEX_51 = 51, // field has value 0x33
CMDINDEX_52 = 52, // field has value 0x34
CMDINDEX_53 = 53, // field has value 0x35
CMDINDEX_54 = 54, // field has value 0x36
CMDINDEX_55 = 55, // field has value 0x37
CMDINDEX_56 = 56, // field has value 0x38
CMDINDEX_57 = 57, // field has value 0x39
CMDINDEX_58 = 58, // field has value 0x3a
CMDINDEX_59 = 59, // field has value 0x3b
CMDINDEX_60 = 60, // field has value 0x3c
CMDINDEX_61 = 61, // field has value 0x3d
CMDINDEX_62 = 62, // field has value 0x3e
CMDINDEX_63 = 63, // field has value 0x3f

};
enum class WAITPEND_t : uint32_t {
    WAITPEND_0 = 0, // field has value 0x0
WAITPEND_1 = 1, // field has value 0x1

};
enum class ENCMDcompl_t : uint32_t {
    ENCMDcompl_0 = 0, // field has value 0x0
ENCMDcompl_1 = 1, // field has value 0x1

};
enum class CPSMEN_t : uint32_t {
    CPSMEN_0 = 0, // field has value 0x0
CPSMEN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CMD : public ReadableWritable<address> {
   public:
    CMD() : ReadableWritable<address>() {}
    CE_ATACMD_t CE_ATACMD(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<CE_ATACMD_t>(tmp);
}
void CE_ATACMD(CE_ATACMD_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
nIEN_t nIEN(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<nIEN_t>(tmp);
}
void nIEN(nIEN_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
ENCMDcompl_t ENCMDcompl(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<ENCMDcompl_t>(tmp);
}
void ENCMDcompl(ENCMDcompl_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
SDIOSuspend_t SDIOSuspend(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<SDIOSuspend_t>(tmp);
}
void SDIOSuspend(SDIOSuspend_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CPSMEN_t CPSMEN(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CPSMEN_t>(tmp);
}
void CPSMEN(CPSMEN_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
WAITPEND_t WAITPEND(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<WAITPEND_t>(tmp);
}
void WAITPEND(WAITPEND_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
WAITINT_t WAITINT(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<WAITINT_t>(tmp);
}
void WAITINT(WAITINT_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
WAITRESP_t WAITRESP(){
    uint32_t tmp = this->bits_masked(0xc0) >> 6;
    return reinterpret_cast<WAITRESP_t>(tmp);
}
void WAITRESP(WAITRESP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0xc0);
}
CMDINDEX_t CMDINDEX(){
    uint32_t tmp = this->bits_masked(0x3f) >> 0;
    return reinterpret_cast<CMDINDEX_t>(tmp);
}
void CMDINDEX(CMDINDEX_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3f);
}
};
}
namespace RESPCMD{
enum class RESPCMD_t : uint32_t {
    RESPCMD_0 = 0, // field has value 0x0
RESPCMD_1 = 1, // field has value 0x1
RESPCMD_2 = 2, // field has value 0x2
RESPCMD_3 = 3, // field has value 0x3
RESPCMD_4 = 4, // field has value 0x4
RESPCMD_5 = 5, // field has value 0x5
RESPCMD_6 = 6, // field has value 0x6
RESPCMD_7 = 7, // field has value 0x7
RESPCMD_8 = 8, // field has value 0x8
RESPCMD_9 = 9, // field has value 0x9
RESPCMD_10 = 10, // field has value 0xa
RESPCMD_11 = 11, // field has value 0xb
RESPCMD_12 = 12, // field has value 0xc
RESPCMD_13 = 13, // field has value 0xd
RESPCMD_14 = 14, // field has value 0xe
RESPCMD_15 = 15, // field has value 0xf
RESPCMD_16 = 16, // field has value 0x10
RESPCMD_17 = 17, // field has value 0x11
RESPCMD_18 = 18, // field has value 0x12
RESPCMD_19 = 19, // field has value 0x13
RESPCMD_20 = 20, // field has value 0x14
RESPCMD_21 = 21, // field has value 0x15
RESPCMD_22 = 22, // field has value 0x16
RESPCMD_23 = 23, // field has value 0x17
RESPCMD_24 = 24, // field has value 0x18
RESPCMD_25 = 25, // field has value 0x19
RESPCMD_26 = 26, // field has value 0x1a
RESPCMD_27 = 27, // field has value 0x1b
RESPCMD_28 = 28, // field has value 0x1c
RESPCMD_29 = 29, // field has value 0x1d
RESPCMD_30 = 30, // field has value 0x1e
RESPCMD_31 = 31, // field has value 0x1f
RESPCMD_32 = 32, // field has value 0x20
RESPCMD_33 = 33, // field has value 0x21
RESPCMD_34 = 34, // field has value 0x22
RESPCMD_35 = 35, // field has value 0x23
RESPCMD_36 = 36, // field has value 0x24
RESPCMD_37 = 37, // field has value 0x25
RESPCMD_38 = 38, // field has value 0x26
RESPCMD_39 = 39, // field has value 0x27
RESPCMD_40 = 40, // field has value 0x28
RESPCMD_41 = 41, // field has value 0x29
RESPCMD_42 = 42, // field has value 0x2a
RESPCMD_43 = 43, // field has value 0x2b
RESPCMD_44 = 44, // field has value 0x2c
RESPCMD_45 = 45, // field has value 0x2d
RESPCMD_46 = 46, // field has value 0x2e
RESPCMD_47 = 47, // field has value 0x2f
RESPCMD_48 = 48, // field has value 0x30
RESPCMD_49 = 49, // field has value 0x31
RESPCMD_50 = 50, // field has value 0x32
RESPCMD_51 = 51, // field has value 0x33
RESPCMD_52 = 52, // field has value 0x34
RESPCMD_53 = 53, // field has value 0x35
RESPCMD_54 = 54, // field has value 0x36
RESPCMD_55 = 55, // field has value 0x37
RESPCMD_56 = 56, // field has value 0x38
RESPCMD_57 = 57, // field has value 0x39
RESPCMD_58 = 58, // field has value 0x3a
RESPCMD_59 = 59, // field has value 0x3b
RESPCMD_60 = 60, // field has value 0x3c
RESPCMD_61 = 61, // field has value 0x3d
RESPCMD_62 = 62, // field has value 0x3e
RESPCMD_63 = 63, // field has value 0x3f

};
template <uint32_t address>
class RESPCMD : public Readable<address> {
   public:
    RESPCMD() : Readable<address>() {}
    RESPCMD_t RESPCMD(){
    uint32_t tmp = this->bits_masked(0x3f) >> 0;
    return reinterpret_cast<RESPCMD_t>(tmp);
}
void RESPCMD(RESPCMD_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3f);
}
};
}
namespace RESP1{

template <uint32_t address>
class RESP1 : public Readable<address> {
   public:
    RESP1() : Readable<address>() {}
    uint32_t CARDSTATUS1(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CARDSTATUS1(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace RESP2{

template <uint32_t address>
class RESP2 : public Readable<address> {
   public:
    RESP2() : Readable<address>() {}
    uint32_t CARDSTATUS2(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CARDSTATUS2(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace RESP3{

template <uint32_t address>
class RESP3 : public Readable<address> {
   public:
    RESP3() : Readable<address>() {}
    uint32_t CARDSTATUS3(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CARDSTATUS3(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace RESP4{

template <uint32_t address>
class RESP4 : public Readable<address> {
   public:
    RESP4() : Readable<address>() {}
    uint32_t CARDSTATUS4(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CARDSTATUS4(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace DTIMER{

template <uint32_t address>
class DTIMER : public ReadableWritable<address> {
   public:
    DTIMER() : ReadableWritable<address>() {}
    uint32_t DATATIME(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void DATATIME(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace DLEN{

template <uint32_t address>
class DLEN : public ReadableWritable<address> {
   public:
    DLEN() : ReadableWritable<address>() {}
    uint32_t DATALENGTH(){
    uint32_t tmp = this->bits_masked(0x1ffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void DATALENGTH(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1ffffff);
}
};
}
namespace DCTRL{
enum class DTMODE_t : uint32_t {
    DTMODE_0 = 0, // field has value 0x0
DTMODE_1 = 1, // field has value 0x1

};
enum class RWSTART_t : uint32_t {
    RWSTART_0 = 0, // field has value 0x0
RWSTART_1 = 1, // field has value 0x1

};
enum class RWMOD_t : uint32_t {
    RWMOD_0 = 0, // field has value 0x0
RWMOD_1 = 1, // field has value 0x1

};
enum class SDIOEN_t : uint32_t {
    SDIOEN_0 = 0, // field has value 0x0
SDIOEN_1 = 1, // field has value 0x1

};
enum class RWSTOP_t : uint32_t {
    RWSTOP_0 = 0, // field has value 0x0
RWSTOP_1 = 1, // field has value 0x1

};
enum class DBLOCKSIZE_t : uint32_t {
    DBLOCKSIZE_0 = 0, // field has value 0x0
DBLOCKSIZE_1 = 1, // field has value 0x1
DBLOCKSIZE_2 = 2, // field has value 0x2
DBLOCKSIZE_3 = 3, // field has value 0x3
DBLOCKSIZE_4 = 4, // field has value 0x4
DBLOCKSIZE_5 = 5, // field has value 0x5
DBLOCKSIZE_6 = 6, // field has value 0x6
DBLOCKSIZE_7 = 7, // field has value 0x7
DBLOCKSIZE_8 = 8, // field has value 0x8
DBLOCKSIZE_9 = 9, // field has value 0x9
DBLOCKSIZE_10 = 10, // field has value 0xa
DBLOCKSIZE_11 = 11, // field has value 0xb
DBLOCKSIZE_12 = 12, // field has value 0xc
DBLOCKSIZE_13 = 13, // field has value 0xd
DBLOCKSIZE_14 = 14, // field has value 0xe
DBLOCKSIZE_15 = 15, // field has value 0xf

};
enum class DTDIR_t : uint32_t {
    DTDIR_0 = 0, // field has value 0x0
DTDIR_1 = 1, // field has value 0x1

};
enum class DTEN_t : uint32_t {
    DTEN_0 = 0, // field has value 0x0
DTEN_1 = 1, // field has value 0x1

};
enum class DMAEN_t : uint32_t {
    DMAEN_0 = 0, // field has value 0x0
DMAEN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DCTRL : public ReadableWritable<address> {
   public:
    DCTRL() : ReadableWritable<address>() {}
    SDIOEN_t SDIOEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<SDIOEN_t>(tmp);
}
void SDIOEN(SDIOEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
RWMOD_t RWMOD(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<RWMOD_t>(tmp);
}
void RWMOD(RWMOD_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
RWSTOP_t RWSTOP(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<RWSTOP_t>(tmp);
}
void RWSTOP(RWSTOP_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
RWSTART_t RWSTART(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<RWSTART_t>(tmp);
}
void RWSTART(RWSTART_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
DBLOCKSIZE_t DBLOCKSIZE(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<DBLOCKSIZE_t>(tmp);
}
void DBLOCKSIZE(DBLOCKSIZE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
DMAEN_t DMAEN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<DMAEN_t>(tmp);
}
void DMAEN(DMAEN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DTMODE_t DTMODE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DTMODE_t>(tmp);
}
void DTMODE(DTMODE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DTDIR_t DTDIR(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DTDIR_t>(tmp);
}
void DTDIR(DTDIR_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
DTEN_t DTEN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DTEN_t>(tmp);
}
void DTEN(DTEN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DCOUNT{

template <uint32_t address>
class DCOUNT : public Readable<address> {
   public:
    DCOUNT() : Readable<address>() {}
    uint32_t DATACOUNT(){
    uint32_t tmp = this->bits_masked(0x1ffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void DATACOUNT(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1ffffff);
}
};
}
namespace STA{
enum class CEATAEND_t : uint32_t {
    CEATAEND_0 = 0, // field has value 0x0
CEATAEND_1 = 1, // field has value 0x1

};
enum class DTIMEOUT_t : uint32_t {
    DTIMEOUT_0 = 0, // field has value 0x0
DTIMEOUT_1 = 1, // field has value 0x1

};
enum class DCRCFAIL_t : uint32_t {
    DCRCFAIL_0 = 0, // field has value 0x0
DCRCFAIL_1 = 1, // field has value 0x1

};
enum class TXACT_t : uint32_t {
    TXACT_0 = 0, // field has value 0x0
TXACT_1 = 1, // field has value 0x1

};
enum class CMDSENT_t : uint32_t {
    CMDSENT_0 = 0, // field has value 0x0
CMDSENT_1 = 1, // field has value 0x1

};
enum class TXFIFOHE_t : uint32_t {
    TXFIFOHE_0 = 0, // field has value 0x0
TXFIFOHE_1 = 1, // field has value 0x1

};
enum class RXFIFOF_t : uint32_t {
    RXFIFOF_0 = 0, // field has value 0x0
RXFIFOF_1 = 1, // field has value 0x1

};
enum class RXACT_t : uint32_t {
    RXACT_0 = 0, // field has value 0x0
RXACT_1 = 1, // field has value 0x1

};
enum class RXDAVL_t : uint32_t {
    RXDAVL_0 = 0, // field has value 0x0
RXDAVL_1 = 1, // field has value 0x1

};
enum class RXFIFOHF_t : uint32_t {
    RXFIFOHF_0 = 0, // field has value 0x0
RXFIFOHF_1 = 1, // field has value 0x1

};
enum class SDIOIT_t : uint32_t {
    SDIOIT_0 = 0, // field has value 0x0
SDIOIT_1 = 1, // field has value 0x1

};
enum class RXOVERR_t : uint32_t {
    RXOVERR_0 = 0, // field has value 0x0
RXOVERR_1 = 1, // field has value 0x1

};
enum class CTIMEOUT_t : uint32_t {
    CTIMEOUT_0 = 0, // field has value 0x0
CTIMEOUT_1 = 1, // field has value 0x1

};
enum class RXFIFOE_t : uint32_t {
    RXFIFOE_0 = 0, // field has value 0x0
RXFIFOE_1 = 1, // field has value 0x1

};
enum class TXFIFOE_t : uint32_t {
    TXFIFOE_0 = 0, // field has value 0x0
TXFIFOE_1 = 1, // field has value 0x1

};
enum class TXUNDERR_t : uint32_t {
    TXUNDERR_0 = 0, // field has value 0x0
TXUNDERR_1 = 1, // field has value 0x1

};
enum class TXDAVL_t : uint32_t {
    TXDAVL_0 = 0, // field has value 0x0
TXDAVL_1 = 1, // field has value 0x1

};
enum class CCRCFAIL_t : uint32_t {
    CCRCFAIL_0 = 0, // field has value 0x0
CCRCFAIL_1 = 1, // field has value 0x1

};
enum class DBCKEND_t : uint32_t {
    DBCKEND_0 = 0, // field has value 0x0
DBCKEND_1 = 1, // field has value 0x1

};
enum class TXFIFOF_t : uint32_t {
    TXFIFOF_0 = 0, // field has value 0x0
TXFIFOF_1 = 1, // field has value 0x1

};
enum class STBITERR_t : uint32_t {
    STBITERR_0 = 0, // field has value 0x0
STBITERR_1 = 1, // field has value 0x1

};
enum class CMDACT_t : uint32_t {
    CMDACT_0 = 0, // field has value 0x0
CMDACT_1 = 1, // field has value 0x1

};
enum class DATAEND_t : uint32_t {
    DATAEND_0 = 0, // field has value 0x0
DATAEND_1 = 1, // field has value 0x1

};
enum class CMDREND_t : uint32_t {
    CMDREND_0 = 0, // field has value 0x0
CMDREND_1 = 1, // field has value 0x1

};
template <uint32_t address>
class STA : public Readable<address> {
   public:
    STA() : Readable<address>() {}
    CEATAEND_t CEATAEND(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<CEATAEND_t>(tmp);
}
void CEATAEND(CEATAEND_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
SDIOIT_t SDIOIT(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<SDIOIT_t>(tmp);
}
void SDIOIT(SDIOIT_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
RXDAVL_t RXDAVL(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<RXDAVL_t>(tmp);
}
void RXDAVL(RXDAVL_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TXDAVL_t TXDAVL(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TXDAVL_t>(tmp);
}
void TXDAVL(TXDAVL_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
RXFIFOE_t RXFIFOE(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<RXFIFOE_t>(tmp);
}
void RXFIFOE(RXFIFOE_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
TXFIFOE_t TXFIFOE(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TXFIFOE_t>(tmp);
}
void TXFIFOE(TXFIFOE_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
RXFIFOF_t RXFIFOF(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<RXFIFOF_t>(tmp);
}
void RXFIFOF(RXFIFOF_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TXFIFOF_t TXFIFOF(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TXFIFOF_t>(tmp);
}
void TXFIFOF(TXFIFOF_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
RXFIFOHF_t RXFIFOHF(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<RXFIFOHF_t>(tmp);
}
void RXFIFOHF(RXFIFOHF_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TXFIFOHE_t TXFIFOHE(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TXFIFOHE_t>(tmp);
}
void TXFIFOHE(TXFIFOHE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
RXACT_t RXACT(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<RXACT_t>(tmp);
}
void RXACT(RXACT_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TXACT_t TXACT(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TXACT_t>(tmp);
}
void TXACT(TXACT_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
CMDACT_t CMDACT(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CMDACT_t>(tmp);
}
void CMDACT(CMDACT_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
DBCKEND_t DBCKEND(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DBCKEND_t>(tmp);
}
void DBCKEND(DBCKEND_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
STBITERR_t STBITERR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<STBITERR_t>(tmp);
}
void STBITERR(STBITERR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DATAEND_t DATAEND(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DATAEND_t>(tmp);
}
void DATAEND(DATAEND_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CMDSENT_t CMDSENT(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<CMDSENT_t>(tmp);
}
void CMDSENT(CMDSENT_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
CMDREND_t CMDREND(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CMDREND_t>(tmp);
}
void CMDREND(CMDREND_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
RXOVERR_t RXOVERR(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<RXOVERR_t>(tmp);
}
void RXOVERR(RXOVERR_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXUNDERR_t TXUNDERR(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TXUNDERR_t>(tmp);
}
void TXUNDERR(TXUNDERR_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
DTIMEOUT_t DTIMEOUT(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<DTIMEOUT_t>(tmp);
}
void DTIMEOUT(DTIMEOUT_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CTIMEOUT_t CTIMEOUT(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CTIMEOUT_t>(tmp);
}
void CTIMEOUT(CTIMEOUT_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DCRCFAIL_t DCRCFAIL(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DCRCFAIL_t>(tmp);
}
void DCRCFAIL(DCRCFAIL_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CCRCFAIL_t CCRCFAIL(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CCRCFAIL_t>(tmp);
}
void CCRCFAIL(CCRCFAIL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace ICR{
enum class CEATAENDC_t : uint32_t {
    CEATAENDC_0 = 0, // field has value 0x0
CEATAENDC_1 = 1, // field has value 0x1

};
enum class DATAENDC_t : uint32_t {
    DATAENDC_0 = 0, // field has value 0x0
DATAENDC_1 = 1, // field has value 0x1

};
enum class CMDRENDC_t : uint32_t {
    CMDRENDC_0 = 0, // field has value 0x0
CMDRENDC_1 = 1, // field has value 0x1

};
enum class RXOVERRC_t : uint32_t {
    RXOVERRC_0 = 0, // field has value 0x0
RXOVERRC_1 = 1, // field has value 0x1

};
enum class DTIMEOUTC_t : uint32_t {
    DTIMEOUTC_0 = 0, // field has value 0x0
DTIMEOUTC_1 = 1, // field has value 0x1

};
enum class TXUNDERRC_t : uint32_t {
    TXUNDERRC_0 = 0, // field has value 0x0
TXUNDERRC_1 = 1, // field has value 0x1

};
enum class DBCKENDC_t : uint32_t {
    DBCKENDC_0 = 0, // field has value 0x0
DBCKENDC_1 = 1, // field has value 0x1

};
enum class STBITERRC_t : uint32_t {
    STBITERRC_0 = 0, // field has value 0x0
STBITERRC_1 = 1, // field has value 0x1

};
enum class CTIMEOUTC_t : uint32_t {
    CTIMEOUTC_0 = 0, // field has value 0x0
CTIMEOUTC_1 = 1, // field has value 0x1

};
enum class DCRCFAILC_t : uint32_t {
    DCRCFAILC_0 = 0, // field has value 0x0
DCRCFAILC_1 = 1, // field has value 0x1

};
enum class SDIOITC_t : uint32_t {
    SDIOITC_0 = 0, // field has value 0x0
SDIOITC_1 = 1, // field has value 0x1

};
enum class CMDSENTC_t : uint32_t {
    CMDSENTC_0 = 0, // field has value 0x0
CMDSENTC_1 = 1, // field has value 0x1

};
enum class CCRCFAILC_t : uint32_t {
    CCRCFAILC_0 = 0, // field has value 0x0
CCRCFAILC_1 = 1, // field has value 0x1

};
template <uint32_t address>
class ICR : public ReadableWritable<address> {
   public:
    ICR() : ReadableWritable<address>() {}
    CEATAENDC_t CEATAENDC(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<CEATAENDC_t>(tmp);
}
void CEATAENDC(CEATAENDC_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
SDIOITC_t SDIOITC(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<SDIOITC_t>(tmp);
}
void SDIOITC(SDIOITC_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
DBCKENDC_t DBCKENDC(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DBCKENDC_t>(tmp);
}
void DBCKENDC(DBCKENDC_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
STBITERRC_t STBITERRC(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<STBITERRC_t>(tmp);
}
void STBITERRC(STBITERRC_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DATAENDC_t DATAENDC(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DATAENDC_t>(tmp);
}
void DATAENDC(DATAENDC_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CMDSENTC_t CMDSENTC(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<CMDSENTC_t>(tmp);
}
void CMDSENTC(CMDSENTC_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
CMDRENDC_t CMDRENDC(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CMDRENDC_t>(tmp);
}
void CMDRENDC(CMDRENDC_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
RXOVERRC_t RXOVERRC(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<RXOVERRC_t>(tmp);
}
void RXOVERRC(RXOVERRC_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXUNDERRC_t TXUNDERRC(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TXUNDERRC_t>(tmp);
}
void TXUNDERRC(TXUNDERRC_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
DTIMEOUTC_t DTIMEOUTC(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<DTIMEOUTC_t>(tmp);
}
void DTIMEOUTC(DTIMEOUTC_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CTIMEOUTC_t CTIMEOUTC(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CTIMEOUTC_t>(tmp);
}
void CTIMEOUTC(CTIMEOUTC_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DCRCFAILC_t DCRCFAILC(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DCRCFAILC_t>(tmp);
}
void DCRCFAILC(DCRCFAILC_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CCRCFAILC_t CCRCFAILC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CCRCFAILC_t>(tmp);
}
void CCRCFAILC(CCRCFAILC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace MASK{
enum class CMDACTIE_t : uint32_t {
    CMDACTIE_0 = 0, // field has value 0x0
CMDACTIE_1 = 1, // field has value 0x1

};
enum class DCRCFAILIE_t : uint32_t {
    DCRCFAILIE_0 = 0, // field has value 0x0
DCRCFAILIE_1 = 1, // field has value 0x1

};
enum class RXDAVLIE_t : uint32_t {
    RXDAVLIE_0 = 0, // field has value 0x0
RXDAVLIE_1 = 1, // field has value 0x1

};
enum class TXUNDERRIE_t : uint32_t {
    TXUNDERRIE_0 = 0, // field has value 0x0
TXUNDERRIE_1 = 1, // field has value 0x1

};
enum class TXFIFOHEIE_t : uint32_t {
    TXFIFOHEIE_0 = 0, // field has value 0x0
TXFIFOHEIE_1 = 1, // field has value 0x1

};
enum class CEATAENDIE_t : uint32_t {
    CEATAENDIE_0 = 0, // field has value 0x0
CEATAENDIE_1 = 1, // field has value 0x1

};
enum class STBITERRIE_t : uint32_t {
    STBITERRIE_0 = 0, // field has value 0x0
STBITERRIE_1 = 1, // field has value 0x1

};
enum class RXFIFOFIE_t : uint32_t {
    RXFIFOFIE_0 = 0, // field has value 0x0
RXFIFOFIE_1 = 1, // field has value 0x1

};
enum class DTIMEOUTIE_t : uint32_t {
    DTIMEOUTIE_0 = 0, // field has value 0x0
DTIMEOUTIE_1 = 1, // field has value 0x1

};
enum class RXACTIE_t : uint32_t {
    RXACTIE_0 = 0, // field has value 0x0
RXACTIE_1 = 1, // field has value 0x1

};
enum class SDIOITIE_t : uint32_t {
    SDIOITIE_0 = 0, // field has value 0x0
SDIOITIE_1 = 1, // field has value 0x1

};
enum class CTIMEOUTIE_t : uint32_t {
    CTIMEOUTIE_0 = 0, // field has value 0x0
CTIMEOUTIE_1 = 1, // field has value 0x1

};
enum class RXFIFOEIE_t : uint32_t {
    RXFIFOEIE_0 = 0, // field has value 0x0
RXFIFOEIE_1 = 1, // field has value 0x1

};
enum class CMDSENTIE_t : uint32_t {
    CMDSENTIE_0 = 0, // field has value 0x0
CMDSENTIE_1 = 1, // field has value 0x1

};
enum class TXDAVLIE_t : uint32_t {
    TXDAVLIE_0 = 0, // field has value 0x0
TXDAVLIE_1 = 1, // field has value 0x1

};
enum class DBCKENDIE_t : uint32_t {
    DBCKENDIE_0 = 0, // field has value 0x0
DBCKENDIE_1 = 1, // field has value 0x1

};
enum class TXFIFOFIE_t : uint32_t {
    TXFIFOFIE_0 = 0, // field has value 0x0
TXFIFOFIE_1 = 1, // field has value 0x1

};
enum class TXFIFOEIE_t : uint32_t {
    TXFIFOEIE_0 = 0, // field has value 0x0
TXFIFOEIE_1 = 1, // field has value 0x1

};
enum class TXACTIE_t : uint32_t {
    TXACTIE_0 = 0, // field has value 0x0
TXACTIE_1 = 1, // field has value 0x1

};
enum class CMDRENDIE_t : uint32_t {
    CMDRENDIE_0 = 0, // field has value 0x0
CMDRENDIE_1 = 1, // field has value 0x1

};
enum class CCRCFAILIE_t : uint32_t {
    CCRCFAILIE_0 = 0, // field has value 0x0
CCRCFAILIE_1 = 1, // field has value 0x1

};
enum class RXFIFOHFIE_t : uint32_t {
    RXFIFOHFIE_0 = 0, // field has value 0x0
RXFIFOHFIE_1 = 1, // field has value 0x1

};
enum class RXOVERRIE_t : uint32_t {
    RXOVERRIE_0 = 0, // field has value 0x0
RXOVERRIE_1 = 1, // field has value 0x1

};
enum class DATAENDIE_t : uint32_t {
    DATAENDIE_0 = 0, // field has value 0x0
DATAENDIE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class MASK : public ReadableWritable<address> {
   public:
    MASK() : ReadableWritable<address>() {}
    CEATAENDIE_t CEATAENDIE(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<CEATAENDIE_t>(tmp);
}
void CEATAENDIE(CEATAENDIE_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
SDIOITIE_t SDIOITIE(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<SDIOITIE_t>(tmp);
}
void SDIOITIE(SDIOITIE_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
RXDAVLIE_t RXDAVLIE(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<RXDAVLIE_t>(tmp);
}
void RXDAVLIE(RXDAVLIE_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TXDAVLIE_t TXDAVLIE(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TXDAVLIE_t>(tmp);
}
void TXDAVLIE(TXDAVLIE_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
RXFIFOEIE_t RXFIFOEIE(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<RXFIFOEIE_t>(tmp);
}
void RXFIFOEIE(RXFIFOEIE_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
TXFIFOEIE_t TXFIFOEIE(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TXFIFOEIE_t>(tmp);
}
void TXFIFOEIE(TXFIFOEIE_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
RXFIFOFIE_t RXFIFOFIE(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<RXFIFOFIE_t>(tmp);
}
void RXFIFOFIE(RXFIFOFIE_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TXFIFOFIE_t TXFIFOFIE(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TXFIFOFIE_t>(tmp);
}
void TXFIFOFIE(TXFIFOFIE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
RXFIFOHFIE_t RXFIFOHFIE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<RXFIFOHFIE_t>(tmp);
}
void RXFIFOHFIE(RXFIFOHFIE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TXFIFOHEIE_t TXFIFOHEIE(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TXFIFOHEIE_t>(tmp);
}
void TXFIFOHEIE(TXFIFOHEIE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
RXACTIE_t RXACTIE(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<RXACTIE_t>(tmp);
}
void RXACTIE(RXACTIE_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TXACTIE_t TXACTIE(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TXACTIE_t>(tmp);
}
void TXACTIE(TXACTIE_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
CMDACTIE_t CMDACTIE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CMDACTIE_t>(tmp);
}
void CMDACTIE(CMDACTIE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
DBCKENDIE_t DBCKENDIE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DBCKENDIE_t>(tmp);
}
void DBCKENDIE(DBCKENDIE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
STBITERRIE_t STBITERRIE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<STBITERRIE_t>(tmp);
}
void STBITERRIE(STBITERRIE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DATAENDIE_t DATAENDIE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DATAENDIE_t>(tmp);
}
void DATAENDIE(DATAENDIE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CMDSENTIE_t CMDSENTIE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<CMDSENTIE_t>(tmp);
}
void CMDSENTIE(CMDSENTIE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
CMDRENDIE_t CMDRENDIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CMDRENDIE_t>(tmp);
}
void CMDRENDIE(CMDRENDIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
RXOVERRIE_t RXOVERRIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<RXOVERRIE_t>(tmp);
}
void RXOVERRIE(RXOVERRIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXUNDERRIE_t TXUNDERRIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TXUNDERRIE_t>(tmp);
}
void TXUNDERRIE(TXUNDERRIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
DTIMEOUTIE_t DTIMEOUTIE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<DTIMEOUTIE_t>(tmp);
}
void DTIMEOUTIE(DTIMEOUTIE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CTIMEOUTIE_t CTIMEOUTIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CTIMEOUTIE_t>(tmp);
}
void CTIMEOUTIE(CTIMEOUTIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DCRCFAILIE_t DCRCFAILIE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DCRCFAILIE_t>(tmp);
}
void DCRCFAILIE(DCRCFAILIE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CCRCFAILIE_t CCRCFAILIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CCRCFAILIE_t>(tmp);
}
void CCRCFAILIE(CCRCFAILIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace FIFOCNT{

template <uint32_t address>
class FIFOCNT : public Readable<address> {
   public:
    FIFOCNT() : Readable<address>() {}
    uint32_t FIFOCOUNT(){
    uint32_t tmp = this->bits_masked(0xffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void FIFOCOUNT(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffff);
}
};
}
namespace FIFO{

template <uint32_t address>
class FIFO : public ReadableWritable<address> {
   public:
    FIFO() : ReadableWritable<address>() {}
    uint32_t FIFOData(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void FIFOData(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
template<uint32_t base_address>
class SDIO{
    public:
    // power control register
POWER<base_address + 0> POWER; 
// SDI clock control register
CLKCR<base_address + 4> CLKCR; 
// argument register
ARG<base_address + 8> ARG; 
// command register
CMD<base_address + 12> CMD; 
// command response register
RESPCMD<base_address + 16> RESPCMD; 
// response 1..4 register
RESP1<base_address + 20> RESP1; 
// response 1..4 register
RESP2<base_address + 24> RESP2; 
// response 1..4 register
RESP3<base_address + 28> RESP3; 
// response 1..4 register
RESP4<base_address + 32> RESP4; 
// data timer register
DTIMER<base_address + 36> DTIMER; 
// data length register
DLEN<base_address + 40> DLEN; 
// data control register
DCTRL<base_address + 44> DCTRL; 
// data counter register
DCOUNT<base_address + 48> DCOUNT; 
// status register
STA<base_address + 52> STA; 
// interrupt clear register
ICR<base_address + 56> ICR; 
// mask register
MASK<base_address + 60> MASK; 
// FIFO counter register
FIFOCNT<base_address + 72> FIFOCNT; 
// data FIFO register
FIFO<base_address + 128> FIFO; 
};
}

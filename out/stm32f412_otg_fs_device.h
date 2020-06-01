#pragma once

#include <cstdint>
#include <reg.h>

namespace OTG_FS_DEVICE{
namespace DCFG{
enum class DAD_t : uint32_t {
    DAD_0 = 0, // field has value 0x0
DAD_1 = 1, // field has value 0x1
DAD_2 = 2, // field has value 0x2
DAD_3 = 3, // field has value 0x3
DAD_4 = 4, // field has value 0x4
DAD_5 = 5, // field has value 0x5
DAD_6 = 6, // field has value 0x6
DAD_7 = 7, // field has value 0x7
DAD_8 = 8, // field has value 0x8
DAD_9 = 9, // field has value 0x9
DAD_10 = 10, // field has value 0xa
DAD_11 = 11, // field has value 0xb
DAD_12 = 12, // field has value 0xc
DAD_13 = 13, // field has value 0xd
DAD_14 = 14, // field has value 0xe
DAD_15 = 15, // field has value 0xf
DAD_16 = 16, // field has value 0x10
DAD_17 = 17, // field has value 0x11
DAD_18 = 18, // field has value 0x12
DAD_19 = 19, // field has value 0x13
DAD_20 = 20, // field has value 0x14
DAD_21 = 21, // field has value 0x15
DAD_22 = 22, // field has value 0x16
DAD_23 = 23, // field has value 0x17
DAD_24 = 24, // field has value 0x18
DAD_25 = 25, // field has value 0x19
DAD_26 = 26, // field has value 0x1a
DAD_27 = 27, // field has value 0x1b
DAD_28 = 28, // field has value 0x1c
DAD_29 = 29, // field has value 0x1d
DAD_30 = 30, // field has value 0x1e
DAD_31 = 31, // field has value 0x1f
DAD_32 = 32, // field has value 0x20
DAD_33 = 33, // field has value 0x21
DAD_34 = 34, // field has value 0x22
DAD_35 = 35, // field has value 0x23
DAD_36 = 36, // field has value 0x24
DAD_37 = 37, // field has value 0x25
DAD_38 = 38, // field has value 0x26
DAD_39 = 39, // field has value 0x27
DAD_40 = 40, // field has value 0x28
DAD_41 = 41, // field has value 0x29
DAD_42 = 42, // field has value 0x2a
DAD_43 = 43, // field has value 0x2b
DAD_44 = 44, // field has value 0x2c
DAD_45 = 45, // field has value 0x2d
DAD_46 = 46, // field has value 0x2e
DAD_47 = 47, // field has value 0x2f
DAD_48 = 48, // field has value 0x30
DAD_49 = 49, // field has value 0x31
DAD_50 = 50, // field has value 0x32
DAD_51 = 51, // field has value 0x33
DAD_52 = 52, // field has value 0x34
DAD_53 = 53, // field has value 0x35
DAD_54 = 54, // field has value 0x36
DAD_55 = 55, // field has value 0x37
DAD_56 = 56, // field has value 0x38
DAD_57 = 57, // field has value 0x39
DAD_58 = 58, // field has value 0x3a
DAD_59 = 59, // field has value 0x3b
DAD_60 = 60, // field has value 0x3c
DAD_61 = 61, // field has value 0x3d
DAD_62 = 62, // field has value 0x3e
DAD_63 = 63, // field has value 0x3f
DAD_64 = 64, // field has value 0x40
DAD_65 = 65, // field has value 0x41
DAD_66 = 66, // field has value 0x42
DAD_67 = 67, // field has value 0x43
DAD_68 = 68, // field has value 0x44
DAD_69 = 69, // field has value 0x45
DAD_70 = 70, // field has value 0x46
DAD_71 = 71, // field has value 0x47
DAD_72 = 72, // field has value 0x48
DAD_73 = 73, // field has value 0x49
DAD_74 = 74, // field has value 0x4a
DAD_75 = 75, // field has value 0x4b
DAD_76 = 76, // field has value 0x4c
DAD_77 = 77, // field has value 0x4d
DAD_78 = 78, // field has value 0x4e
DAD_79 = 79, // field has value 0x4f
DAD_80 = 80, // field has value 0x50
DAD_81 = 81, // field has value 0x51
DAD_82 = 82, // field has value 0x52
DAD_83 = 83, // field has value 0x53
DAD_84 = 84, // field has value 0x54
DAD_85 = 85, // field has value 0x55
DAD_86 = 86, // field has value 0x56
DAD_87 = 87, // field has value 0x57
DAD_88 = 88, // field has value 0x58
DAD_89 = 89, // field has value 0x59
DAD_90 = 90, // field has value 0x5a
DAD_91 = 91, // field has value 0x5b
DAD_92 = 92, // field has value 0x5c
DAD_93 = 93, // field has value 0x5d
DAD_94 = 94, // field has value 0x5e
DAD_95 = 95, // field has value 0x5f
DAD_96 = 96, // field has value 0x60
DAD_97 = 97, // field has value 0x61
DAD_98 = 98, // field has value 0x62
DAD_99 = 99, // field has value 0x63
DAD_100 = 100, // field has value 0x64
DAD_101 = 101, // field has value 0x65
DAD_102 = 102, // field has value 0x66
DAD_103 = 103, // field has value 0x67
DAD_104 = 104, // field has value 0x68
DAD_105 = 105, // field has value 0x69
DAD_106 = 106, // field has value 0x6a
DAD_107 = 107, // field has value 0x6b
DAD_108 = 108, // field has value 0x6c
DAD_109 = 109, // field has value 0x6d
DAD_110 = 110, // field has value 0x6e
DAD_111 = 111, // field has value 0x6f
DAD_112 = 112, // field has value 0x70
DAD_113 = 113, // field has value 0x71
DAD_114 = 114, // field has value 0x72
DAD_115 = 115, // field has value 0x73
DAD_116 = 116, // field has value 0x74
DAD_117 = 117, // field has value 0x75
DAD_118 = 118, // field has value 0x76
DAD_119 = 119, // field has value 0x77
DAD_120 = 120, // field has value 0x78
DAD_121 = 121, // field has value 0x79
DAD_122 = 122, // field has value 0x7a
DAD_123 = 123, // field has value 0x7b
DAD_124 = 124, // field has value 0x7c
DAD_125 = 125, // field has value 0x7d
DAD_126 = 126, // field has value 0x7e
DAD_127 = 127, // field has value 0x7f

};
enum class DSPD_t : uint32_t {
    DSPD_0 = 0, // field has value 0x0
DSPD_1 = 1, // field has value 0x1
DSPD_2 = 2, // field has value 0x2
DSPD_3 = 3, // field has value 0x3

};
enum class NZLSOHSK_t : uint32_t {
    NZLSOHSK_0 = 0, // field has value 0x0
NZLSOHSK_1 = 1, // field has value 0x1

};
enum class PFIVL_t : uint32_t {
    PFIVL_0 = 0, // field has value 0x0
PFIVL_1 = 1, // field has value 0x1
PFIVL_2 = 2, // field has value 0x2
PFIVL_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DCFG : public ReadableWritable<address> {
   public:
    DCFG() : ReadableWritable<address>() {}
    DSPD_t DSPD(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<DSPD_t>(tmp);
}
void DSPD(DSPD_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
NZLSOHSK_t NZLSOHSK(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<NZLSOHSK_t>(tmp);
}
void NZLSOHSK(NZLSOHSK_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x7f0) >> 4;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x7f0);
}
PFIVL_t PFIVL(){
    uint32_t tmp = this->bits_masked(0x1800) >> 11;
    return reinterpret_cast<PFIVL_t>(tmp);
}
void PFIVL(PFIVL_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x1800);
}
};
}
namespace DCTL{
enum class CGONAK_t : uint32_t {
    CGONAK_0 = 0, // field has value 0x0
CGONAK_1 = 1, // field has value 0x1

};
enum class SDIS_t : uint32_t {
    SDIS_0 = 0, // field has value 0x0
SDIS_1 = 1, // field has value 0x1

};
enum class SGONAK_t : uint32_t {
    SGONAK_0 = 0, // field has value 0x0
SGONAK_1 = 1, // field has value 0x1

};
enum class SGINAK_t : uint32_t {
    SGINAK_0 = 0, // field has value 0x0
SGINAK_1 = 1, // field has value 0x1

};
enum class GINSTS_t : uint32_t {
    GINSTS_0 = 0, // field has value 0x0
GINSTS_1 = 1, // field has value 0x1

};
enum class TCTL_t : uint32_t {
    TCTL_0 = 0, // field has value 0x0
TCTL_1 = 1, // field has value 0x1
TCTL_2 = 2, // field has value 0x2
TCTL_3 = 3, // field has value 0x3
TCTL_4 = 4, // field has value 0x4
TCTL_5 = 5, // field has value 0x5
TCTL_6 = 6, // field has value 0x6
TCTL_7 = 7, // field has value 0x7

};
enum class GONSTS_t : uint32_t {
    GONSTS_0 = 0, // field has value 0x0
GONSTS_1 = 1, // field has value 0x1

};
enum class POPRGDNE_t : uint32_t {
    POPRGDNE_0 = 0, // field has value 0x0
POPRGDNE_1 = 1, // field has value 0x1

};
enum class RWUSIG_t : uint32_t {
    RWUSIG_0 = 0, // field has value 0x0
RWUSIG_1 = 1, // field has value 0x1

};
enum class CGINAK_t : uint32_t {
    CGINAK_0 = 0, // field has value 0x0
CGINAK_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DCTL : public ReadableWritable<address> {
   public:
    DCTL() : ReadableWritable<address>() {}
    RWUSIG_t RWUSIG(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<RWUSIG_t>(tmp);
}
void RWUSIG(RWUSIG_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
SDIS_t SDIS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SDIS_t>(tmp);
}
void SDIS(SDIS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
GINSTS_t GINSTS(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<GINSTS_t>(tmp);
}
GONSTS_t GONSTS(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<GONSTS_t>(tmp);
}
TCTL_t TCTL(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<TCTL_t>(tmp);
}
void TCTL(TCTL_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
SGINAK_t SGINAK(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<SGINAK_t>(tmp);
}
void SGINAK(SGINAK_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
CGINAK_t CGINAK(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<CGINAK_t>(tmp);
}
void CGINAK(CGINAK_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
SGONAK_t SGONAK(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<SGONAK_t>(tmp);
}
void SGONAK(SGONAK_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
CGONAK_t CGONAK(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CGONAK_t>(tmp);
}
void CGONAK(CGONAK_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
POPRGDNE_t POPRGDNE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<POPRGDNE_t>(tmp);
}
void POPRGDNE(POPRGDNE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
};
}
namespace DSTS{

enum class ENUMSPD_t : uint32_t {
    ENUMSPD_0 = 0, // field has value 0x0
ENUMSPD_1 = 1, // field has value 0x1
ENUMSPD_2 = 2, // field has value 0x2
ENUMSPD_3 = 3, // field has value 0x3

};
enum class EERR_t : uint32_t {
    EERR_0 = 0, // field has value 0x0
EERR_1 = 1, // field has value 0x1

};
enum class SUSPSTS_t : uint32_t {
    SUSPSTS_0 = 0, // field has value 0x0
SUSPSTS_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DSTS : public Readable<address> {
   public:
    DSTS() : Readable<address>() {}
    SUSPSTS_t SUSPSTS(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<SUSPSTS_t>(tmp);
}
void SUSPSTS(SUSPSTS_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
ENUMSPD_t ENUMSPD(){
    uint32_t tmp = this->bits_masked(0x6) >> 1;
    return reinterpret_cast<ENUMSPD_t>(tmp);
}
void ENUMSPD(ENUMSPD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x6);
}
EERR_t EERR(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<EERR_t>(tmp);
}
void EERR(EERR_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
uint16_t FNSOF(){
    uint32_t tmp = this->bits_masked(0x3fff00) >> 8;
    return reinterpret_cast<uint16_t>(tmp);
}
void FNSOF(uint16_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x3fff00);
}
};
}
namespace DIEPMSK{
enum class INEPNMM_t : uint32_t {
    INEPNMM_0 = 0, // field has value 0x0
INEPNMM_1 = 1, // field has value 0x1

};
enum class ITTXFEMSK_t : uint32_t {
    ITTXFEMSK_0 = 0, // field has value 0x0
ITTXFEMSK_1 = 1, // field has value 0x1

};
enum class TOM_t : uint32_t {
    TOM_0 = 0, // field has value 0x0
TOM_1 = 1, // field has value 0x1

};
enum class INEPNEM_t : uint32_t {
    INEPNEM_0 = 0, // field has value 0x0
INEPNEM_1 = 1, // field has value 0x1

};
enum class EPDM_t : uint32_t {
    EPDM_0 = 0, // field has value 0x0
EPDM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DIEPMSK : public ReadableWritable<address> {
   public:
    DIEPMSK() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
EPDM_t EPDM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDM_t>(tmp);
}
void EPDM(EPDM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TOM_t TOM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TOM_t>(tmp);
}
void TOM(TOM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
ITTXFEMSK_t ITTXFEMSK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ITTXFEMSK_t>(tmp);
}
void ITTXFEMSK(ITTXFEMSK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
INEPNMM_t INEPNMM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<INEPNMM_t>(tmp);
}
void INEPNMM(INEPNMM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
INEPNEM_t INEPNEM(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<INEPNEM_t>(tmp);
}
void INEPNEM(INEPNEM_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
};
}
namespace DOEPMSK{
enum class EPDM_t : uint32_t {
    EPDM_0 = 0, // field has value 0x0
EPDM_1 = 1, // field has value 0x1

};
enum class STUPM_t : uint32_t {
    STUPM_0 = 0, // field has value 0x0
STUPM_1 = 1, // field has value 0x1

};
enum class OTEPDM_t : uint32_t {
    OTEPDM_0 = 0, // field has value 0x0
OTEPDM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPMSK : public ReadableWritable<address> {
   public:
    DOEPMSK() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
EPDM_t EPDM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDM_t>(tmp);
}
void EPDM(EPDM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STUPM_t STUPM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STUPM_t>(tmp);
}
void STUPM(STUPM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
OTEPDM_t OTEPDM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<OTEPDM_t>(tmp);
}
void OTEPDM(OTEPDM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
};
}
namespace DAINT{

template <uint32_t address>
class DAINT : public Readable<address> {
   public:
    DAINT() : Readable<address>() {}
    uint16_t IEPINT(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void IEPINT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t OEPINT(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void OEPINT(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace DAINTMSK{

template <uint32_t address>
class DAINTMSK : public ReadableWritable<address> {
   public:
    DAINTMSK() : ReadableWritable<address>() {}
    uint16_t IEPM(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void IEPM(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t OEPINT(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void OEPINT(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace DVBUSDIS{

template <uint32_t address>
class DVBUSDIS : public ReadableWritable<address> {
   public:
    DVBUSDIS() : ReadableWritable<address>() {}
    uint16_t VBUSDT(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void VBUSDT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DVBUSPULSE{

template <uint32_t address>
class DVBUSPULSE : public ReadableWritable<address> {
   public:
    DVBUSPULSE() : ReadableWritable<address>() {}
    uint16_t DVBUSP(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void DVBUSP(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
};
}
namespace DIEPEMPMSK{

template <uint32_t address>
class DIEPEMPMSK : public ReadableWritable<address> {
   public:
    DIEPEMPMSK() : ReadableWritable<address>() {}
    uint16_t INEPTXFEM(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXFEM(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DIEPCTL0{
enum class MPSIZ_t : uint32_t {
    MPSIZ_0 = 0, // field has value 0x0
MPSIZ_1 = 1, // field has value 0x1
MPSIZ_2 = 2, // field has value 0x2
MPSIZ_3 = 3, // field has value 0x3

};
enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class TXFNUM_t : uint32_t {
    TXFNUM_0 = 0, // field has value 0x0
TXFNUM_1 = 1, // field has value 0x1
TXFNUM_2 = 2, // field has value 0x2
TXFNUM_3 = 3, // field has value 0x3
TXFNUM_4 = 4, // field has value 0x4
TXFNUM_5 = 5, // field has value 0x5
TXFNUM_6 = 6, // field has value 0x6
TXFNUM_7 = 7, // field has value 0x7
TXFNUM_8 = 8, // field has value 0x8
TXFNUM_9 = 9, // field has value 0x9
TXFNUM_10 = 10, // field has value 0xa
TXFNUM_11 = 11, // field has value 0xb
TXFNUM_12 = 12, // field has value 0xc
TXFNUM_13 = 13, // field has value 0xd
TXFNUM_14 = 14, // field has value 0xe
TXFNUM_15 = 15, // field has value 0xf

};
template <uint32_t address>
class DIEPCTL0 : public ReadableWritable<address> {
   public:
    DIEPCTL0() : ReadableWritable<address>() {}
    MPSIZ_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<MPSIZ_t>(tmp);
}
void MPSIZ(MPSIZ_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TXFNUM_t TXFNUM(){
    uint32_t tmp = this->bits_masked(0x3c00000) >> 22;
    return reinterpret_cast<TXFNUM_t>(tmp);
}
void TXFNUM(TXFNUM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x3c00000);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
};
}
namespace DIEPCTL1{

enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class EONUM_DPID_t : uint32_t {
    EONUM_DPID_0 = 0, // field has value 0x0
EONUM_DPID_1 = 1, // field has value 0x1

};
enum class SODDFRM_SD1PID_t : uint32_t {
    SODDFRM_SD1PID_0 = 0, // field has value 0x0
SODDFRM_SD1PID_1 = 1, // field has value 0x1

};
enum class SD0PID_SEVNFRM_t : uint32_t {
    SD0PID_SEVNFRM_0 = 0, // field has value 0x0
SD0PID_SEVNFRM_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class TXFNUM_t : uint32_t {
    TXFNUM_0 = 0, // field has value 0x0
TXFNUM_1 = 1, // field has value 0x1
TXFNUM_2 = 2, // field has value 0x2
TXFNUM_3 = 3, // field has value 0x3
TXFNUM_4 = 4, // field has value 0x4
TXFNUM_5 = 5, // field has value 0x5
TXFNUM_6 = 6, // field has value 0x6
TXFNUM_7 = 7, // field has value 0x7
TXFNUM_8 = 8, // field has value 0x8
TXFNUM_9 = 9, // field has value 0x9
TXFNUM_10 = 10, // field has value 0xa
TXFNUM_11 = 11, // field has value 0xb
TXFNUM_12 = 12, // field has value 0xc
TXFNUM_13 = 13, // field has value 0xd
TXFNUM_14 = 14, // field has value 0xe
TXFNUM_15 = 15, // field has value 0xf

};
template <uint32_t address>
class DIEPCTL1 : public ReadableWritable<address> {
   public:
    DIEPCTL1() : ReadableWritable<address>() {}
    EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void EPDIS(EPDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
void SODDFRM_SD1PID(SODDFRM_SD1PID_t v){
   uint32_t tmp = v << 29;
   this->bits(v);
}
void SD0PID_SEVNFRM(SD0PID_SEVNFRM_t v){
   uint32_t tmp = v << 28;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
TXFNUM_t TXFNUM(){
    uint32_t tmp = this->bits_masked(0x3c00000) >> 22;
    return reinterpret_cast<TXFNUM_t>(tmp);
}
void TXFNUM(TXFNUM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x3c00000);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EONUM_DPID_t EONUM_DPID(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<EONUM_DPID_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
void USBAEP(USBAEP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
};
}
namespace DIEPCTL2{

enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class SODDFRM_t : uint32_t {
    SODDFRM_0 = 0, // field has value 0x0
SODDFRM_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class EONUM_DPID_t : uint32_t {
    EONUM_DPID_0 = 0, // field has value 0x0
EONUM_DPID_1 = 1, // field has value 0x1

};
enum class SD0PID_SEVNFRM_t : uint32_t {
    SD0PID_SEVNFRM_0 = 0, // field has value 0x0
SD0PID_SEVNFRM_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class TXFNUM_t : uint32_t {
    TXFNUM_0 = 0, // field has value 0x0
TXFNUM_1 = 1, // field has value 0x1
TXFNUM_2 = 2, // field has value 0x2
TXFNUM_3 = 3, // field has value 0x3
TXFNUM_4 = 4, // field has value 0x4
TXFNUM_5 = 5, // field has value 0x5
TXFNUM_6 = 6, // field has value 0x6
TXFNUM_7 = 7, // field has value 0x7
TXFNUM_8 = 8, // field has value 0x8
TXFNUM_9 = 9, // field has value 0x9
TXFNUM_10 = 10, // field has value 0xa
TXFNUM_11 = 11, // field has value 0xb
TXFNUM_12 = 12, // field has value 0xc
TXFNUM_13 = 13, // field has value 0xd
TXFNUM_14 = 14, // field has value 0xe
TXFNUM_15 = 15, // field has value 0xf

};
template <uint32_t address>
class DIEPCTL2 : public ReadableWritable<address> {
   public:
    DIEPCTL2() : ReadableWritable<address>() {}
    EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void EPDIS(EPDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
void SODDFRM(SODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits(v);
}
void SD0PID_SEVNFRM(SD0PID_SEVNFRM_t v){
   uint32_t tmp = v << 28;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
TXFNUM_t TXFNUM(){
    uint32_t tmp = this->bits_masked(0x3c00000) >> 22;
    return reinterpret_cast<TXFNUM_t>(tmp);
}
void TXFNUM(TXFNUM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x3c00000);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EONUM_DPID_t EONUM_DPID(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<EONUM_DPID_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
void USBAEP(USBAEP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
};
}
namespace DIEPCTL3{

enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class SODDFRM_t : uint32_t {
    SODDFRM_0 = 0, // field has value 0x0
SODDFRM_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class EONUM_DPID_t : uint32_t {
    EONUM_DPID_0 = 0, // field has value 0x0
EONUM_DPID_1 = 1, // field has value 0x1

};
enum class SD0PID_SEVNFRM_t : uint32_t {
    SD0PID_SEVNFRM_0 = 0, // field has value 0x0
SD0PID_SEVNFRM_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class TXFNUM_t : uint32_t {
    TXFNUM_0 = 0, // field has value 0x0
TXFNUM_1 = 1, // field has value 0x1
TXFNUM_2 = 2, // field has value 0x2
TXFNUM_3 = 3, // field has value 0x3
TXFNUM_4 = 4, // field has value 0x4
TXFNUM_5 = 5, // field has value 0x5
TXFNUM_6 = 6, // field has value 0x6
TXFNUM_7 = 7, // field has value 0x7
TXFNUM_8 = 8, // field has value 0x8
TXFNUM_9 = 9, // field has value 0x9
TXFNUM_10 = 10, // field has value 0xa
TXFNUM_11 = 11, // field has value 0xb
TXFNUM_12 = 12, // field has value 0xc
TXFNUM_13 = 13, // field has value 0xd
TXFNUM_14 = 14, // field has value 0xe
TXFNUM_15 = 15, // field has value 0xf

};
template <uint32_t address>
class DIEPCTL3 : public ReadableWritable<address> {
   public:
    DIEPCTL3() : ReadableWritable<address>() {}
    EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void EPDIS(EPDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
void SODDFRM(SODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits(v);
}
void SD0PID_SEVNFRM(SD0PID_SEVNFRM_t v){
   uint32_t tmp = v << 28;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
TXFNUM_t TXFNUM(){
    uint32_t tmp = this->bits_masked(0x3c00000) >> 22;
    return reinterpret_cast<TXFNUM_t>(tmp);
}
void TXFNUM(TXFNUM_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x3c00000);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EONUM_DPID_t EONUM_DPID(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<EONUM_DPID_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
void USBAEP(USBAEP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
};
}
namespace DOEPCTL0{
enum class MPSIZ_t : uint32_t {
    MPSIZ_0 = 0, // field has value 0x0
MPSIZ_1 = 1, // field has value 0x1
MPSIZ_2 = 2, // field has value 0x2
MPSIZ_3 = 3, // field has value 0x3

};
enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class SNPM_t : uint32_t {
    SNPM_0 = 0, // field has value 0x0
SNPM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPCTL0 : public ReadableWritable<address> {
   public:
    DOEPCTL0() : ReadableWritable<address>() {}
    void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits(v);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
SNPM_t SNPM(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<SNPM_t>(tmp);
}
void SNPM(SNPM_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
MPSIZ_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<MPSIZ_t>(tmp);
}
};
}
namespace DOEPCTL1{

enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class SODDFRM_t : uint32_t {
    SODDFRM_0 = 0, // field has value 0x0
SODDFRM_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class EONUM_DPID_t : uint32_t {
    EONUM_DPID_0 = 0, // field has value 0x0
EONUM_DPID_1 = 1, // field has value 0x1

};
enum class SD0PID_SEVNFRM_t : uint32_t {
    SD0PID_SEVNFRM_0 = 0, // field has value 0x0
SD0PID_SEVNFRM_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class SNPM_t : uint32_t {
    SNPM_0 = 0, // field has value 0x0
SNPM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPCTL1 : public ReadableWritable<address> {
   public:
    DOEPCTL1() : ReadableWritable<address>() {}
    EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void EPDIS(EPDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
void SODDFRM(SODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits(v);
}
void SD0PID_SEVNFRM(SD0PID_SEVNFRM_t v){
   uint32_t tmp = v << 28;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
SNPM_t SNPM(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<SNPM_t>(tmp);
}
void SNPM(SNPM_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EONUM_DPID_t EONUM_DPID(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<EONUM_DPID_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
void USBAEP(USBAEP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
};
}
namespace DOEPCTL2{

enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class SODDFRM_t : uint32_t {
    SODDFRM_0 = 0, // field has value 0x0
SODDFRM_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class EONUM_DPID_t : uint32_t {
    EONUM_DPID_0 = 0, // field has value 0x0
EONUM_DPID_1 = 1, // field has value 0x1

};
enum class SD0PID_SEVNFRM_t : uint32_t {
    SD0PID_SEVNFRM_0 = 0, // field has value 0x0
SD0PID_SEVNFRM_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class SNPM_t : uint32_t {
    SNPM_0 = 0, // field has value 0x0
SNPM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPCTL2 : public ReadableWritable<address> {
   public:
    DOEPCTL2() : ReadableWritable<address>() {}
    EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void EPDIS(EPDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
void SODDFRM(SODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits(v);
}
void SD0PID_SEVNFRM(SD0PID_SEVNFRM_t v){
   uint32_t tmp = v << 28;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
SNPM_t SNPM(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<SNPM_t>(tmp);
}
void SNPM(SNPM_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EONUM_DPID_t EONUM_DPID(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<EONUM_DPID_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
void USBAEP(USBAEP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
};
}
namespace DOEPCTL3{

enum class NAKSTS_t : uint32_t {
    NAKSTS_0 = 0, // field has value 0x0
NAKSTS_1 = 1, // field has value 0x1

};
enum class EPDIS_t : uint32_t {
    EPDIS_0 = 0, // field has value 0x0
EPDIS_1 = 1, // field has value 0x1

};
enum class SODDFRM_t : uint32_t {
    SODDFRM_0 = 0, // field has value 0x0
SODDFRM_1 = 1, // field has value 0x1

};
enum class EPENA_t : uint32_t {
    EPENA_0 = 0, // field has value 0x0
EPENA_1 = 1, // field has value 0x1

};
enum class CNAK_t : uint32_t {
    CNAK_0 = 0, // field has value 0x0
CNAK_1 = 1, // field has value 0x1

};
enum class SNAK_t : uint32_t {
    SNAK_0 = 0, // field has value 0x0
SNAK_1 = 1, // field has value 0x1

};
enum class EONUM_DPID_t : uint32_t {
    EONUM_DPID_0 = 0, // field has value 0x0
EONUM_DPID_1 = 1, // field has value 0x1

};
enum class SD0PID_SEVNFRM_t : uint32_t {
    SD0PID_SEVNFRM_0 = 0, // field has value 0x0
SD0PID_SEVNFRM_1 = 1, // field has value 0x1

};
enum class Stall_t : uint32_t {
    Stall_0 = 0, // field has value 0x0
Stall_1 = 1, // field has value 0x1

};
enum class USBAEP_t : uint32_t {
    USBAEP_0 = 0, // field has value 0x0
USBAEP_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
enum class SNPM_t : uint32_t {
    SNPM_0 = 0, // field has value 0x0
SNPM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPCTL3 : public ReadableWritable<address> {
   public:
    DOEPCTL3() : ReadableWritable<address>() {}
    EPENA_t EPENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<EPENA_t>(tmp);
}
void EPENA(EPENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
EPDIS_t EPDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<EPDIS_t>(tmp);
}
void EPDIS(EPDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
void SODDFRM(SODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits(v);
}
void SD0PID_SEVNFRM(SD0PID_SEVNFRM_t v){
   uint32_t tmp = v << 28;
   this->bits(v);
}
void SNAK(SNAK_t v){
   uint32_t tmp = v << 27;
   this->bits(v);
}
void CNAK(CNAK_t v){
   uint32_t tmp = v << 26;
   this->bits(v);
}
Stall_t Stall(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<Stall_t>(tmp);
}
void Stall(Stall_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
SNPM_t SNPM(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<SNPM_t>(tmp);
}
void SNPM(SNPM_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
NAKSTS_t NAKSTS(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NAKSTS_t>(tmp);
}
EONUM_DPID_t EONUM_DPID(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<EONUM_DPID_t>(tmp);
}
USBAEP_t USBAEP(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<USBAEP_t>(tmp);
}
void USBAEP(USBAEP_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
};
}
namespace DIEPINT0{
enum class ITTXFE_t : uint32_t {
    ITTXFE_0 = 0, // field has value 0x0
ITTXFE_1 = 1, // field has value 0x1

};
enum class TXFE_t : uint32_t {
    TXFE_0 = 0, // field has value 0x0
TXFE_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class TOC_t : uint32_t {
    TOC_0 = 0, // field has value 0x0
TOC_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class INEPNE_t : uint32_t {
    INEPNE_0 = 0, // field has value 0x0
INEPNE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DIEPINT0 : public ReadableWritable<address> {
   public:
    DIEPINT0() : ReadableWritable<address>() {}
    TXFE_t TXFE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXFE_t>(tmp);
}
INEPNE_t INEPNE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<INEPNE_t>(tmp);
}
void INEPNE(INEPNE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ITTXFE_t ITTXFE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ITTXFE_t>(tmp);
}
void ITTXFE(ITTXFE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TOC_t TOC(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TOC_t>(tmp);
}
void TOC(TOC_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DIEPINT1{
enum class ITTXFE_t : uint32_t {
    ITTXFE_0 = 0, // field has value 0x0
ITTXFE_1 = 1, // field has value 0x1

};
enum class TXFE_t : uint32_t {
    TXFE_0 = 0, // field has value 0x0
TXFE_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class TOC_t : uint32_t {
    TOC_0 = 0, // field has value 0x0
TOC_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class INEPNE_t : uint32_t {
    INEPNE_0 = 0, // field has value 0x0
INEPNE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DIEPINT1 : public ReadableWritable<address> {
   public:
    DIEPINT1() : ReadableWritable<address>() {}
    TXFE_t TXFE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXFE_t>(tmp);
}
INEPNE_t INEPNE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<INEPNE_t>(tmp);
}
void INEPNE(INEPNE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ITTXFE_t ITTXFE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ITTXFE_t>(tmp);
}
void ITTXFE(ITTXFE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TOC_t TOC(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TOC_t>(tmp);
}
void TOC(TOC_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DIEPINT2{
enum class ITTXFE_t : uint32_t {
    ITTXFE_0 = 0, // field has value 0x0
ITTXFE_1 = 1, // field has value 0x1

};
enum class TXFE_t : uint32_t {
    TXFE_0 = 0, // field has value 0x0
TXFE_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class TOC_t : uint32_t {
    TOC_0 = 0, // field has value 0x0
TOC_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class INEPNE_t : uint32_t {
    INEPNE_0 = 0, // field has value 0x0
INEPNE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DIEPINT2 : public ReadableWritable<address> {
   public:
    DIEPINT2() : ReadableWritable<address>() {}
    TXFE_t TXFE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXFE_t>(tmp);
}
INEPNE_t INEPNE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<INEPNE_t>(tmp);
}
void INEPNE(INEPNE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ITTXFE_t ITTXFE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ITTXFE_t>(tmp);
}
void ITTXFE(ITTXFE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TOC_t TOC(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TOC_t>(tmp);
}
void TOC(TOC_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DIEPINT3{
enum class ITTXFE_t : uint32_t {
    ITTXFE_0 = 0, // field has value 0x0
ITTXFE_1 = 1, // field has value 0x1

};
enum class TXFE_t : uint32_t {
    TXFE_0 = 0, // field has value 0x0
TXFE_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class TOC_t : uint32_t {
    TOC_0 = 0, // field has value 0x0
TOC_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class INEPNE_t : uint32_t {
    INEPNE_0 = 0, // field has value 0x0
INEPNE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DIEPINT3 : public ReadableWritable<address> {
   public:
    DIEPINT3() : ReadableWritable<address>() {}
    TXFE_t TXFE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXFE_t>(tmp);
}
INEPNE_t INEPNE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<INEPNE_t>(tmp);
}
void INEPNE(INEPNE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ITTXFE_t ITTXFE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ITTXFE_t>(tmp);
}
void ITTXFE(ITTXFE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TOC_t TOC(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TOC_t>(tmp);
}
void TOC(TOC_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DOEPINT0{
enum class B2BSTUP_t : uint32_t {
    B2BSTUP_0 = 0, // field has value 0x0
B2BSTUP_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class OTEPDIS_t : uint32_t {
    OTEPDIS_0 = 0, // field has value 0x0
OTEPDIS_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class STUP_t : uint32_t {
    STUP_0 = 0, // field has value 0x0
STUP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPINT0 : public ReadableWritable<address> {
   public:
    DOEPINT0() : ReadableWritable<address>() {}
    B2BSTUP_t B2BSTUP(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<B2BSTUP_t>(tmp);
}
void B2BSTUP(B2BSTUP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
OTEPDIS_t OTEPDIS(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<OTEPDIS_t>(tmp);
}
void OTEPDIS(OTEPDIS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
STUP_t STUP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STUP_t>(tmp);
}
void STUP(STUP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DOEPINT1{
enum class B2BSTUP_t : uint32_t {
    B2BSTUP_0 = 0, // field has value 0x0
B2BSTUP_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class OTEPDIS_t : uint32_t {
    OTEPDIS_0 = 0, // field has value 0x0
OTEPDIS_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class STUP_t : uint32_t {
    STUP_0 = 0, // field has value 0x0
STUP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPINT1 : public ReadableWritable<address> {
   public:
    DOEPINT1() : ReadableWritable<address>() {}
    B2BSTUP_t B2BSTUP(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<B2BSTUP_t>(tmp);
}
void B2BSTUP(B2BSTUP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
OTEPDIS_t OTEPDIS(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<OTEPDIS_t>(tmp);
}
void OTEPDIS(OTEPDIS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
STUP_t STUP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STUP_t>(tmp);
}
void STUP(STUP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DOEPINT2{
enum class B2BSTUP_t : uint32_t {
    B2BSTUP_0 = 0, // field has value 0x0
B2BSTUP_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class OTEPDIS_t : uint32_t {
    OTEPDIS_0 = 0, // field has value 0x0
OTEPDIS_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class STUP_t : uint32_t {
    STUP_0 = 0, // field has value 0x0
STUP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPINT2 : public ReadableWritable<address> {
   public:
    DOEPINT2() : ReadableWritable<address>() {}
    B2BSTUP_t B2BSTUP(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<B2BSTUP_t>(tmp);
}
void B2BSTUP(B2BSTUP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
OTEPDIS_t OTEPDIS(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<OTEPDIS_t>(tmp);
}
void OTEPDIS(OTEPDIS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
STUP_t STUP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STUP_t>(tmp);
}
void STUP(STUP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DOEPINT3{
enum class B2BSTUP_t : uint32_t {
    B2BSTUP_0 = 0, // field has value 0x0
B2BSTUP_1 = 1, // field has value 0x1

};
enum class EPDISD_t : uint32_t {
    EPDISD_0 = 0, // field has value 0x0
EPDISD_1 = 1, // field has value 0x1

};
enum class OTEPDIS_t : uint32_t {
    OTEPDIS_0 = 0, // field has value 0x0
OTEPDIS_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class STUP_t : uint32_t {
    STUP_0 = 0, // field has value 0x0
STUP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPINT3 : public ReadableWritable<address> {
   public:
    DOEPINT3() : ReadableWritable<address>() {}
    B2BSTUP_t B2BSTUP(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<B2BSTUP_t>(tmp);
}
void B2BSTUP(B2BSTUP_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
OTEPDIS_t OTEPDIS(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<OTEPDIS_t>(tmp);
}
void OTEPDIS(OTEPDIS_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
STUP_t STUP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STUP_t>(tmp);
}
void STUP(STUP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
EPDISD_t EPDISD(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPDISD_t>(tmp);
}
void EPDISD(EPDISD_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DIEPTSIZ0{
enum class XFRSIZ_t : uint32_t {
    XFRSIZ_0 = 0, // field has value 0x0
XFRSIZ_1 = 1, // field has value 0x1
XFRSIZ_2 = 2, // field has value 0x2
XFRSIZ_3 = 3, // field has value 0x3
XFRSIZ_4 = 4, // field has value 0x4
XFRSIZ_5 = 5, // field has value 0x5
XFRSIZ_6 = 6, // field has value 0x6
XFRSIZ_7 = 7, // field has value 0x7
XFRSIZ_8 = 8, // field has value 0x8
XFRSIZ_9 = 9, // field has value 0x9
XFRSIZ_10 = 10, // field has value 0xa
XFRSIZ_11 = 11, // field has value 0xb
XFRSIZ_12 = 12, // field has value 0xc
XFRSIZ_13 = 13, // field has value 0xd
XFRSIZ_14 = 14, // field has value 0xe
XFRSIZ_15 = 15, // field has value 0xf
XFRSIZ_16 = 16, // field has value 0x10
XFRSIZ_17 = 17, // field has value 0x11
XFRSIZ_18 = 18, // field has value 0x12
XFRSIZ_19 = 19, // field has value 0x13
XFRSIZ_20 = 20, // field has value 0x14
XFRSIZ_21 = 21, // field has value 0x15
XFRSIZ_22 = 22, // field has value 0x16
XFRSIZ_23 = 23, // field has value 0x17
XFRSIZ_24 = 24, // field has value 0x18
XFRSIZ_25 = 25, // field has value 0x19
XFRSIZ_26 = 26, // field has value 0x1a
XFRSIZ_27 = 27, // field has value 0x1b
XFRSIZ_28 = 28, // field has value 0x1c
XFRSIZ_29 = 29, // field has value 0x1d
XFRSIZ_30 = 30, // field has value 0x1e
XFRSIZ_31 = 31, // field has value 0x1f
XFRSIZ_32 = 32, // field has value 0x20
XFRSIZ_33 = 33, // field has value 0x21
XFRSIZ_34 = 34, // field has value 0x22
XFRSIZ_35 = 35, // field has value 0x23
XFRSIZ_36 = 36, // field has value 0x24
XFRSIZ_37 = 37, // field has value 0x25
XFRSIZ_38 = 38, // field has value 0x26
XFRSIZ_39 = 39, // field has value 0x27
XFRSIZ_40 = 40, // field has value 0x28
XFRSIZ_41 = 41, // field has value 0x29
XFRSIZ_42 = 42, // field has value 0x2a
XFRSIZ_43 = 43, // field has value 0x2b
XFRSIZ_44 = 44, // field has value 0x2c
XFRSIZ_45 = 45, // field has value 0x2d
XFRSIZ_46 = 46, // field has value 0x2e
XFRSIZ_47 = 47, // field has value 0x2f
XFRSIZ_48 = 48, // field has value 0x30
XFRSIZ_49 = 49, // field has value 0x31
XFRSIZ_50 = 50, // field has value 0x32
XFRSIZ_51 = 51, // field has value 0x33
XFRSIZ_52 = 52, // field has value 0x34
XFRSIZ_53 = 53, // field has value 0x35
XFRSIZ_54 = 54, // field has value 0x36
XFRSIZ_55 = 55, // field has value 0x37
XFRSIZ_56 = 56, // field has value 0x38
XFRSIZ_57 = 57, // field has value 0x39
XFRSIZ_58 = 58, // field has value 0x3a
XFRSIZ_59 = 59, // field has value 0x3b
XFRSIZ_60 = 60, // field has value 0x3c
XFRSIZ_61 = 61, // field has value 0x3d
XFRSIZ_62 = 62, // field has value 0x3e
XFRSIZ_63 = 63, // field has value 0x3f
XFRSIZ_64 = 64, // field has value 0x40
XFRSIZ_65 = 65, // field has value 0x41
XFRSIZ_66 = 66, // field has value 0x42
XFRSIZ_67 = 67, // field has value 0x43
XFRSIZ_68 = 68, // field has value 0x44
XFRSIZ_69 = 69, // field has value 0x45
XFRSIZ_70 = 70, // field has value 0x46
XFRSIZ_71 = 71, // field has value 0x47
XFRSIZ_72 = 72, // field has value 0x48
XFRSIZ_73 = 73, // field has value 0x49
XFRSIZ_74 = 74, // field has value 0x4a
XFRSIZ_75 = 75, // field has value 0x4b
XFRSIZ_76 = 76, // field has value 0x4c
XFRSIZ_77 = 77, // field has value 0x4d
XFRSIZ_78 = 78, // field has value 0x4e
XFRSIZ_79 = 79, // field has value 0x4f
XFRSIZ_80 = 80, // field has value 0x50
XFRSIZ_81 = 81, // field has value 0x51
XFRSIZ_82 = 82, // field has value 0x52
XFRSIZ_83 = 83, // field has value 0x53
XFRSIZ_84 = 84, // field has value 0x54
XFRSIZ_85 = 85, // field has value 0x55
XFRSIZ_86 = 86, // field has value 0x56
XFRSIZ_87 = 87, // field has value 0x57
XFRSIZ_88 = 88, // field has value 0x58
XFRSIZ_89 = 89, // field has value 0x59
XFRSIZ_90 = 90, // field has value 0x5a
XFRSIZ_91 = 91, // field has value 0x5b
XFRSIZ_92 = 92, // field has value 0x5c
XFRSIZ_93 = 93, // field has value 0x5d
XFRSIZ_94 = 94, // field has value 0x5e
XFRSIZ_95 = 95, // field has value 0x5f
XFRSIZ_96 = 96, // field has value 0x60
XFRSIZ_97 = 97, // field has value 0x61
XFRSIZ_98 = 98, // field has value 0x62
XFRSIZ_99 = 99, // field has value 0x63
XFRSIZ_100 = 100, // field has value 0x64
XFRSIZ_101 = 101, // field has value 0x65
XFRSIZ_102 = 102, // field has value 0x66
XFRSIZ_103 = 103, // field has value 0x67
XFRSIZ_104 = 104, // field has value 0x68
XFRSIZ_105 = 105, // field has value 0x69
XFRSIZ_106 = 106, // field has value 0x6a
XFRSIZ_107 = 107, // field has value 0x6b
XFRSIZ_108 = 108, // field has value 0x6c
XFRSIZ_109 = 109, // field has value 0x6d
XFRSIZ_110 = 110, // field has value 0x6e
XFRSIZ_111 = 111, // field has value 0x6f
XFRSIZ_112 = 112, // field has value 0x70
XFRSIZ_113 = 113, // field has value 0x71
XFRSIZ_114 = 114, // field has value 0x72
XFRSIZ_115 = 115, // field has value 0x73
XFRSIZ_116 = 116, // field has value 0x74
XFRSIZ_117 = 117, // field has value 0x75
XFRSIZ_118 = 118, // field has value 0x76
XFRSIZ_119 = 119, // field has value 0x77
XFRSIZ_120 = 120, // field has value 0x78
XFRSIZ_121 = 121, // field has value 0x79
XFRSIZ_122 = 122, // field has value 0x7a
XFRSIZ_123 = 123, // field has value 0x7b
XFRSIZ_124 = 124, // field has value 0x7c
XFRSIZ_125 = 125, // field has value 0x7d
XFRSIZ_126 = 126, // field has value 0x7e
XFRSIZ_127 = 127, // field has value 0x7f

};
enum class PKTCNT_t : uint32_t {
    PKTCNT_0 = 0, // field has value 0x0
PKTCNT_1 = 1, // field has value 0x1
PKTCNT_2 = 2, // field has value 0x2
PKTCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DIEPTSIZ0 : public ReadableWritable<address> {
   public:
    DIEPTSIZ0() : ReadableWritable<address>() {}
    PKTCNT_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x180000) >> 19;
    return reinterpret_cast<PKTCNT_t>(tmp);
}
void PKTCNT(PKTCNT_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x180000);
}
XFRSIZ_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7f) >> 0;
    return reinterpret_cast<XFRSIZ_t>(tmp);
}
void XFRSIZ(XFRSIZ_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7f);
}
};
}
namespace DOEPTSIZ0{
enum class XFRSIZ_t : uint32_t {
    XFRSIZ_0 = 0, // field has value 0x0
XFRSIZ_1 = 1, // field has value 0x1
XFRSIZ_2 = 2, // field has value 0x2
XFRSIZ_3 = 3, // field has value 0x3
XFRSIZ_4 = 4, // field has value 0x4
XFRSIZ_5 = 5, // field has value 0x5
XFRSIZ_6 = 6, // field has value 0x6
XFRSIZ_7 = 7, // field has value 0x7
XFRSIZ_8 = 8, // field has value 0x8
XFRSIZ_9 = 9, // field has value 0x9
XFRSIZ_10 = 10, // field has value 0xa
XFRSIZ_11 = 11, // field has value 0xb
XFRSIZ_12 = 12, // field has value 0xc
XFRSIZ_13 = 13, // field has value 0xd
XFRSIZ_14 = 14, // field has value 0xe
XFRSIZ_15 = 15, // field has value 0xf
XFRSIZ_16 = 16, // field has value 0x10
XFRSIZ_17 = 17, // field has value 0x11
XFRSIZ_18 = 18, // field has value 0x12
XFRSIZ_19 = 19, // field has value 0x13
XFRSIZ_20 = 20, // field has value 0x14
XFRSIZ_21 = 21, // field has value 0x15
XFRSIZ_22 = 22, // field has value 0x16
XFRSIZ_23 = 23, // field has value 0x17
XFRSIZ_24 = 24, // field has value 0x18
XFRSIZ_25 = 25, // field has value 0x19
XFRSIZ_26 = 26, // field has value 0x1a
XFRSIZ_27 = 27, // field has value 0x1b
XFRSIZ_28 = 28, // field has value 0x1c
XFRSIZ_29 = 29, // field has value 0x1d
XFRSIZ_30 = 30, // field has value 0x1e
XFRSIZ_31 = 31, // field has value 0x1f
XFRSIZ_32 = 32, // field has value 0x20
XFRSIZ_33 = 33, // field has value 0x21
XFRSIZ_34 = 34, // field has value 0x22
XFRSIZ_35 = 35, // field has value 0x23
XFRSIZ_36 = 36, // field has value 0x24
XFRSIZ_37 = 37, // field has value 0x25
XFRSIZ_38 = 38, // field has value 0x26
XFRSIZ_39 = 39, // field has value 0x27
XFRSIZ_40 = 40, // field has value 0x28
XFRSIZ_41 = 41, // field has value 0x29
XFRSIZ_42 = 42, // field has value 0x2a
XFRSIZ_43 = 43, // field has value 0x2b
XFRSIZ_44 = 44, // field has value 0x2c
XFRSIZ_45 = 45, // field has value 0x2d
XFRSIZ_46 = 46, // field has value 0x2e
XFRSIZ_47 = 47, // field has value 0x2f
XFRSIZ_48 = 48, // field has value 0x30
XFRSIZ_49 = 49, // field has value 0x31
XFRSIZ_50 = 50, // field has value 0x32
XFRSIZ_51 = 51, // field has value 0x33
XFRSIZ_52 = 52, // field has value 0x34
XFRSIZ_53 = 53, // field has value 0x35
XFRSIZ_54 = 54, // field has value 0x36
XFRSIZ_55 = 55, // field has value 0x37
XFRSIZ_56 = 56, // field has value 0x38
XFRSIZ_57 = 57, // field has value 0x39
XFRSIZ_58 = 58, // field has value 0x3a
XFRSIZ_59 = 59, // field has value 0x3b
XFRSIZ_60 = 60, // field has value 0x3c
XFRSIZ_61 = 61, // field has value 0x3d
XFRSIZ_62 = 62, // field has value 0x3e
XFRSIZ_63 = 63, // field has value 0x3f
XFRSIZ_64 = 64, // field has value 0x40
XFRSIZ_65 = 65, // field has value 0x41
XFRSIZ_66 = 66, // field has value 0x42
XFRSIZ_67 = 67, // field has value 0x43
XFRSIZ_68 = 68, // field has value 0x44
XFRSIZ_69 = 69, // field has value 0x45
XFRSIZ_70 = 70, // field has value 0x46
XFRSIZ_71 = 71, // field has value 0x47
XFRSIZ_72 = 72, // field has value 0x48
XFRSIZ_73 = 73, // field has value 0x49
XFRSIZ_74 = 74, // field has value 0x4a
XFRSIZ_75 = 75, // field has value 0x4b
XFRSIZ_76 = 76, // field has value 0x4c
XFRSIZ_77 = 77, // field has value 0x4d
XFRSIZ_78 = 78, // field has value 0x4e
XFRSIZ_79 = 79, // field has value 0x4f
XFRSIZ_80 = 80, // field has value 0x50
XFRSIZ_81 = 81, // field has value 0x51
XFRSIZ_82 = 82, // field has value 0x52
XFRSIZ_83 = 83, // field has value 0x53
XFRSIZ_84 = 84, // field has value 0x54
XFRSIZ_85 = 85, // field has value 0x55
XFRSIZ_86 = 86, // field has value 0x56
XFRSIZ_87 = 87, // field has value 0x57
XFRSIZ_88 = 88, // field has value 0x58
XFRSIZ_89 = 89, // field has value 0x59
XFRSIZ_90 = 90, // field has value 0x5a
XFRSIZ_91 = 91, // field has value 0x5b
XFRSIZ_92 = 92, // field has value 0x5c
XFRSIZ_93 = 93, // field has value 0x5d
XFRSIZ_94 = 94, // field has value 0x5e
XFRSIZ_95 = 95, // field has value 0x5f
XFRSIZ_96 = 96, // field has value 0x60
XFRSIZ_97 = 97, // field has value 0x61
XFRSIZ_98 = 98, // field has value 0x62
XFRSIZ_99 = 99, // field has value 0x63
XFRSIZ_100 = 100, // field has value 0x64
XFRSIZ_101 = 101, // field has value 0x65
XFRSIZ_102 = 102, // field has value 0x66
XFRSIZ_103 = 103, // field has value 0x67
XFRSIZ_104 = 104, // field has value 0x68
XFRSIZ_105 = 105, // field has value 0x69
XFRSIZ_106 = 106, // field has value 0x6a
XFRSIZ_107 = 107, // field has value 0x6b
XFRSIZ_108 = 108, // field has value 0x6c
XFRSIZ_109 = 109, // field has value 0x6d
XFRSIZ_110 = 110, // field has value 0x6e
XFRSIZ_111 = 111, // field has value 0x6f
XFRSIZ_112 = 112, // field has value 0x70
XFRSIZ_113 = 113, // field has value 0x71
XFRSIZ_114 = 114, // field has value 0x72
XFRSIZ_115 = 115, // field has value 0x73
XFRSIZ_116 = 116, // field has value 0x74
XFRSIZ_117 = 117, // field has value 0x75
XFRSIZ_118 = 118, // field has value 0x76
XFRSIZ_119 = 119, // field has value 0x77
XFRSIZ_120 = 120, // field has value 0x78
XFRSIZ_121 = 121, // field has value 0x79
XFRSIZ_122 = 122, // field has value 0x7a
XFRSIZ_123 = 123, // field has value 0x7b
XFRSIZ_124 = 124, // field has value 0x7c
XFRSIZ_125 = 125, // field has value 0x7d
XFRSIZ_126 = 126, // field has value 0x7e
XFRSIZ_127 = 127, // field has value 0x7f

};
enum class STUPCNT_t : uint32_t {
    STUPCNT_0 = 0, // field has value 0x0
STUPCNT_1 = 1, // field has value 0x1
STUPCNT_2 = 2, // field has value 0x2
STUPCNT_3 = 3, // field has value 0x3

};
enum class PKTCNT_t : uint32_t {
    PKTCNT_0 = 0, // field has value 0x0
PKTCNT_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DOEPTSIZ0 : public ReadableWritable<address> {
   public:
    DOEPTSIZ0() : ReadableWritable<address>() {}
    STUPCNT_t STUPCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<STUPCNT_t>(tmp);
}
void STUPCNT(STUPCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
PKTCNT_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<PKTCNT_t>(tmp);
}
void PKTCNT(PKTCNT_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
XFRSIZ_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7f) >> 0;
    return reinterpret_cast<XFRSIZ_t>(tmp);
}
void XFRSIZ(XFRSIZ_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7f);
}
};
}
namespace DIEPTSIZ1{

enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DIEPTSIZ1 : public ReadableWritable<address> {
   public:
    DIEPTSIZ1() : ReadableWritable<address>() {}
    MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
};
}
namespace DIEPTSIZ2{

enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DIEPTSIZ2 : public ReadableWritable<address> {
   public:
    DIEPTSIZ2() : ReadableWritable<address>() {}
    MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
};
}
namespace DIEPTSIZ3{

enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DIEPTSIZ3 : public ReadableWritable<address> {
   public:
    DIEPTSIZ3() : ReadableWritable<address>() {}
    MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
};
}
namespace DTXFSTS0{

template <uint32_t address>
class DTXFSTS0 : public Readable<address> {
   public:
    DTXFSTS0() : Readable<address>() {}
    uint16_t INEPTFSAV(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTFSAV(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DTXFSTS1{

template <uint32_t address>
class DTXFSTS1 : public Readable<address> {
   public:
    DTXFSTS1() : Readable<address>() {}
    uint16_t INEPTFSAV(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTFSAV(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DTXFSTS2{

template <uint32_t address>
class DTXFSTS2 : public Readable<address> {
   public:
    DTXFSTS2() : Readable<address>() {}
    uint16_t INEPTFSAV(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTFSAV(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DTXFSTS3{

template <uint32_t address>
class DTXFSTS3 : public Readable<address> {
   public:
    DTXFSTS3() : Readable<address>() {}
    uint16_t INEPTFSAV(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTFSAV(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace DOEPTSIZ1{

enum class RXDPID_STUPCNT_t : uint32_t {
    RXDPID_STUPCNT_0 = 0, // field has value 0x0
RXDPID_STUPCNT_1 = 1, // field has value 0x1
RXDPID_STUPCNT_2 = 2, // field has value 0x2
RXDPID_STUPCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DOEPTSIZ1 : public ReadableWritable<address> {
   public:
    DOEPTSIZ1() : ReadableWritable<address>() {}
    RXDPID_STUPCNT_t RXDPID_STUPCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<RXDPID_STUPCNT_t>(tmp);
}
void RXDPID_STUPCNT(RXDPID_STUPCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
};
}
namespace DOEPTSIZ2{

enum class RXDPID_STUPCNT_t : uint32_t {
    RXDPID_STUPCNT_0 = 0, // field has value 0x0
RXDPID_STUPCNT_1 = 1, // field has value 0x1
RXDPID_STUPCNT_2 = 2, // field has value 0x2
RXDPID_STUPCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DOEPTSIZ2 : public ReadableWritable<address> {
   public:
    DOEPTSIZ2() : ReadableWritable<address>() {}
    RXDPID_STUPCNT_t RXDPID_STUPCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<RXDPID_STUPCNT_t>(tmp);
}
void RXDPID_STUPCNT(RXDPID_STUPCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
};
}
namespace DOEPTSIZ3{

enum class RXDPID_STUPCNT_t : uint32_t {
    RXDPID_STUPCNT_0 = 0, // field has value 0x0
RXDPID_STUPCNT_1 = 1, // field has value 0x1
RXDPID_STUPCNT_2 = 2, // field has value 0x2
RXDPID_STUPCNT_3 = 3, // field has value 0x3

};
template <uint32_t address>
class DOEPTSIZ3 : public ReadableWritable<address> {
   public:
    DOEPTSIZ3() : ReadableWritable<address>() {}
    RXDPID_STUPCNT_t RXDPID_STUPCNT(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<RXDPID_STUPCNT_t>(tmp);
}
void RXDPID_STUPCNT(RXDPID_STUPCNT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
};
}
template<uint32_t base_address>
class USB_OTG_FS{
    public:
    // OTG_FS device configuration register(OTG_FS_DCFG)
DCFG<base_address + 0> DCFG; 
// OTG_FS device control register(OTG_FS_DCTL)
DCTL<base_address + 4> DCTL; 
// OTG_FS device status register(OTG_FS_DSTS)
DSTS<base_address + 8> DSTS; 
// OTG_FS device IN endpoint common interruptmask register (OTG_FS_DIEPMSK)
DIEPMSK<base_address + 16> DIEPMSK; 
// OTG_FS device OUT endpoint common interruptmask register (OTG_FS_DOEPMSK)
DOEPMSK<base_address + 20> DOEPMSK; 
// OTG_FS device all endpoints interruptregister (OTG_FS_DAINT)
DAINT<base_address + 24> DAINT; 
// OTG_FS all endpoints interrupt mask register(OTG_FS_DAINTMSK)
DAINTMSK<base_address + 28> DAINTMSK; 
// OTG_FS device VBUS discharge timeregister
DVBUSDIS<base_address + 40> DVBUSDIS; 
// OTG_FS device VBUS pulsing timeregister
DVBUSPULSE<base_address + 44> DVBUSPULSE; 
// OTG_FS device IN endpoint FIFO emptyinterrupt mask register
DIEPEMPMSK<base_address + 52> DIEPEMPMSK; 
// OTG_FS device control IN endpoint 0 controlregister (OTG_FS_DIEPCTL0)
DIEPCTL0<base_address + 256> DIEPCTL0; 
// OTG device endpoint-1 controlregister
DIEPCTL1<base_address + 288> DIEPCTL1; 
// OTG device endpoint-2 controlregister
DIEPCTL2<base_address + 320> DIEPCTL2; 
// OTG device endpoint-3 controlregister
DIEPCTL3<base_address + 352> DIEPCTL3; 
// device endpoint-0 controlregister
DOEPCTL0<base_address + 768> DOEPCTL0; 
// device endpoint-1 controlregister
DOEPCTL1<base_address + 800> DOEPCTL1; 
// device endpoint-2 controlregister
DOEPCTL2<base_address + 832> DOEPCTL2; 
// device endpoint-3 controlregister
DOEPCTL3<base_address + 864> DOEPCTL3; 
// device endpoint-x interruptregister
DIEPINT0<base_address + 264> DIEPINT0; 
// device endpoint-1 interruptregister
DIEPINT1<base_address + 296> DIEPINT1; 
// device endpoint-2 interruptregister
DIEPINT2<base_address + 328> DIEPINT2; 
// device endpoint-3 interruptregister
DIEPINT3<base_address + 360> DIEPINT3; 
// device endpoint-0 interruptregister
DOEPINT0<base_address + 776> DOEPINT0; 
// device endpoint-1 interruptregister
DOEPINT1<base_address + 808> DOEPINT1; 
// device endpoint-2 interruptregister
DOEPINT2<base_address + 840> DOEPINT2; 
// device endpoint-3 interruptregister
DOEPINT3<base_address + 872> DOEPINT3; 
// device endpoint-0 transfer sizeregister
DIEPTSIZ0<base_address + 272> DIEPTSIZ0; 
// device OUT endpoint-0 transfer sizeregister
DOEPTSIZ0<base_address + 784> DOEPTSIZ0; 
// device endpoint-1 transfer sizeregister
DIEPTSIZ1<base_address + 304> DIEPTSIZ1; 
// device endpoint-2 transfer sizeregister
DIEPTSIZ2<base_address + 336> DIEPTSIZ2; 
// device endpoint-3 transfer sizeregister
DIEPTSIZ3<base_address + 368> DIEPTSIZ3; 
// OTG_FS device IN endpoint transmit FIFOstatus register
DTXFSTS0<base_address + 280> DTXFSTS0; 
// OTG_FS device IN endpoint transmit FIFOstatus register
DTXFSTS1<base_address + 312> DTXFSTS1; 
// OTG_FS device IN endpoint transmit FIFOstatus register
DTXFSTS2<base_address + 344> DTXFSTS2; 
// OTG_FS device IN endpoint transmit FIFOstatus register
DTXFSTS3<base_address + 376> DTXFSTS3; 
// device OUT endpoint-1 transfer sizeregister
DOEPTSIZ1<base_address + 816> DOEPTSIZ1; 
// device OUT endpoint-2 transfer sizeregister
DOEPTSIZ2<base_address + 848> DOEPTSIZ2; 
// device OUT endpoint-3 transfer sizeregister
DOEPTSIZ3<base_address + 880> DOEPTSIZ3; 
};
}

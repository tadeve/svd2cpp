#pragma once

#include <cstdint>
#include <reg.h>

namespace OTG_FS_HOST{
namespace HCFG{
enum class FSLSPCS_t : uint32_t {
    FSLSPCS_0 = 0, // field has value 0x0
FSLSPCS_1 = 1, // field has value 0x1
FSLSPCS_2 = 2, // field has value 0x2
FSLSPCS_3 = 3, // field has value 0x3

};
enum class FSLSS_t : uint32_t {
    FSLSS_0 = 0, // field has value 0x0
FSLSS_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCFG : public ReadableWritable<address> {
   public:
    HCFG() : ReadableWritable<address>() {}
    FSLSPCS_t FSLSPCS(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<FSLSPCS_t>(tmp);
}
void FSLSPCS(FSLSPCS_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
FSLSS_t FSLSS(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FSLSS_t>(tmp);
}
};
}
namespace HFIR{

template <uint32_t address>
class HFIR : public ReadableWritable<address> {
   public:
    HFIR() : ReadableWritable<address>() {}
    uint16_t FRIVL(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void FRIVL(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace HFNUM{

template <uint32_t address>
class HFNUM : public Readable<address> {
   public:
    HFNUM() : Readable<address>() {}
    uint16_t FRNUM(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void FRNUM(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t FTREM(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void FTREM(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace HPTXSTS{

template <uint32_t address>
class HPTXSTS : public ReadableWritable<address> {
   public:
    HPTXSTS() : ReadableWritable<address>() {}
    uint16_t PTXFSAVL(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void PTXFSAVL(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint8_t PTXQSAV(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
uint8_t PTXQTOP(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
};
}
namespace HAINT{

template <uint32_t address>
class HAINT : public Readable<address> {
   public:
    HAINT() : Readable<address>() {}
    uint16_t HAINT(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void HAINT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace HAINTMSK{

template <uint32_t address>
class HAINTMSK : public ReadableWritable<address> {
   public:
    HAINTMSK() : ReadableWritable<address>() {}
    uint16_t HAINTM(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void HAINTM(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace HPRT{
enum class PCSTS_t : uint32_t {
    PCSTS_0 = 0, // field has value 0x0
PCSTS_1 = 1, // field has value 0x1

};
enum class POCCHNG_t : uint32_t {
    POCCHNG_0 = 0, // field has value 0x0
POCCHNG_1 = 1, // field has value 0x1

};
enum class PENA_t : uint32_t {
    PENA_0 = 0, // field has value 0x0
PENA_1 = 1, // field has value 0x1

};
enum class PLSTS_t : uint32_t {
    PLSTS_0 = 0, // field has value 0x0
PLSTS_1 = 1, // field has value 0x1
PLSTS_2 = 2, // field has value 0x2
PLSTS_3 = 3, // field has value 0x3

};
enum class PENCHNG_t : uint32_t {
    PENCHNG_0 = 0, // field has value 0x0
PENCHNG_1 = 1, // field has value 0x1

};
enum class PPWR_t : uint32_t {
    PPWR_0 = 0, // field has value 0x0
PPWR_1 = 1, // field has value 0x1

};
enum class PTCTL_t : uint32_t {
    PTCTL_0 = 0, // field has value 0x0
PTCTL_1 = 1, // field has value 0x1
PTCTL_2 = 2, // field has value 0x2
PTCTL_3 = 3, // field has value 0x3
PTCTL_4 = 4, // field has value 0x4
PTCTL_5 = 5, // field has value 0x5
PTCTL_6 = 6, // field has value 0x6
PTCTL_7 = 7, // field has value 0x7
PTCTL_8 = 8, // field has value 0x8
PTCTL_9 = 9, // field has value 0x9
PTCTL_10 = 10, // field has value 0xa
PTCTL_11 = 11, // field has value 0xb
PTCTL_12 = 12, // field has value 0xc
PTCTL_13 = 13, // field has value 0xd
PTCTL_14 = 14, // field has value 0xe
PTCTL_15 = 15, // field has value 0xf

};
enum class POCA_t : uint32_t {
    POCA_0 = 0, // field has value 0x0
POCA_1 = 1, // field has value 0x1

};
enum class PRST_t : uint32_t {
    PRST_0 = 0, // field has value 0x0
PRST_1 = 1, // field has value 0x1

};
enum class PSUSP_t : uint32_t {
    PSUSP_0 = 0, // field has value 0x0
PSUSP_1 = 1, // field has value 0x1

};
enum class PRES_t : uint32_t {
    PRES_0 = 0, // field has value 0x0
PRES_1 = 1, // field has value 0x1

};
enum class PSPD_t : uint32_t {
    PSPD_0 = 0, // field has value 0x0
PSPD_1 = 1, // field has value 0x1
PSPD_2 = 2, // field has value 0x2
PSPD_3 = 3, // field has value 0x3

};
enum class PCDET_t : uint32_t {
    PCDET_0 = 0, // field has value 0x0
PCDET_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HPRT : public ReadableWritable<address> {
   public:
    HPRT() : ReadableWritable<address>() {}
    PCSTS_t PCSTS(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PCSTS_t>(tmp);
}
PCDET_t PCDET(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<PCDET_t>(tmp);
}
void PCDET(PCDET_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
PENA_t PENA(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<PENA_t>(tmp);
}
void PENA(PENA_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
PENCHNG_t PENCHNG(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<PENCHNG_t>(tmp);
}
void PENCHNG(PENCHNG_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
POCA_t POCA(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<POCA_t>(tmp);
}
POCCHNG_t POCCHNG(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<POCCHNG_t>(tmp);
}
void POCCHNG(POCCHNG_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
PRES_t PRES(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<PRES_t>(tmp);
}
void PRES(PRES_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
PSUSP_t PSUSP(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<PSUSP_t>(tmp);
}
void PSUSP(PSUSP_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
PRST_t PRST(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<PRST_t>(tmp);
}
void PRST(PRST_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
PLSTS_t PLSTS(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<PLSTS_t>(tmp);
}
PPWR_t PPWR(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<PPWR_t>(tmp);
}
void PPWR(PPWR_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
PTCTL_t PTCTL(){
    uint32_t tmp = this->bits_masked(0x1e000) >> 13;
    return reinterpret_cast<PTCTL_t>(tmp);
}
void PTCTL(PTCTL_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x1e000);
}
PSPD_t PSPD(){
    uint32_t tmp = this->bits_masked(0x60000) >> 17;
    return reinterpret_cast<PSPD_t>(tmp);
}
};
}
namespace HCCHAR0{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR0 : public ReadableWritable<address> {
   public:
    HCCHAR0() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR1{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR1 : public ReadableWritable<address> {
   public:
    HCCHAR1() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR2{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR2 : public ReadableWritable<address> {
   public:
    HCCHAR2() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR3{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR3 : public ReadableWritable<address> {
   public:
    HCCHAR3() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR4{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR4 : public ReadableWritable<address> {
   public:
    HCCHAR4() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR5{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR5 : public ReadableWritable<address> {
   public:
    HCCHAR5() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR6{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR6 : public ReadableWritable<address> {
   public:
    HCCHAR6() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCCHAR7{

enum class LSDEV_t : uint32_t {
    LSDEV_0 = 0, // field has value 0x0
LSDEV_1 = 1, // field has value 0x1

};
enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
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
enum class MCNT_t : uint32_t {
    MCNT_0 = 0, // field has value 0x0
MCNT_1 = 1, // field has value 0x1
MCNT_2 = 2, // field has value 0x2
MCNT_3 = 3, // field has value 0x3

};
enum class CHENA_t : uint32_t {
    CHENA_0 = 0, // field has value 0x0
CHENA_1 = 1, // field has value 0x1

};
enum class EPDIR_t : uint32_t {
    EPDIR_0 = 0, // field has value 0x0
EPDIR_1 = 1, // field has value 0x1

};
enum class ODDFRM_t : uint32_t {
    ODDFRM_0 = 0, // field has value 0x0
ODDFRM_1 = 1, // field has value 0x1

};
enum class CHDIS_t : uint32_t {
    CHDIS_0 = 0, // field has value 0x0
CHDIS_1 = 1, // field has value 0x1

};
enum class EPTYP_t : uint32_t {
    EPTYP_0 = 0, // field has value 0x0
EPTYP_1 = 1, // field has value 0x1
EPTYP_2 = 2, // field has value 0x2
EPTYP_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCCHAR7 : public ReadableWritable<address> {
   public:
    HCCHAR7() : ReadableWritable<address>() {}
    uint16_t MPSIZ(){
    uint32_t tmp = this->bits_masked(0x7ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void MPSIZ(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ff);
}
EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0x7800) >> 11;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x7800);
}
EPDIR_t EPDIR(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EPDIR_t>(tmp);
}
void EPDIR(EPDIR_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LSDEV_t LSDEV(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<LSDEV_t>(tmp);
}
void LSDEV(LSDEV_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
EPTYP_t EPTYP(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<EPTYP_t>(tmp);
}
void EPTYP(EPTYP_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MCNT_t MCNT(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MCNT_t>(tmp);
}
void MCNT(MCNT_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
DAD_t DAD(){
    uint32_t tmp = this->bits_masked(0x1fc00000) >> 22;
    return reinterpret_cast<DAD_t>(tmp);
}
void DAD(DAD_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x1fc00000);
}
ODDFRM_t ODDFRM(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<ODDFRM_t>(tmp);
}
void ODDFRM(ODDFRM_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
CHDIS_t CHDIS(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<CHDIS_t>(tmp);
}
void CHDIS(CHDIS_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CHENA_t CHENA(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CHENA_t>(tmp);
}
void CHENA(CHENA_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace HCINT0{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT0 : public ReadableWritable<address> {
   public:
    HCINT0() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT1{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT1 : public ReadableWritable<address> {
   public:
    HCINT1() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT2{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT2 : public ReadableWritable<address> {
   public:
    HCINT2() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT3{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT3 : public ReadableWritable<address> {
   public:
    HCINT3() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT4{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT4 : public ReadableWritable<address> {
   public:
    HCINT4() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT5{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT5 : public ReadableWritable<address> {
   public:
    HCINT5() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT6{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT6 : public ReadableWritable<address> {
   public:
    HCINT6() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINT7{
enum class STALL_t : uint32_t {
    STALL_0 = 0, // field has value 0x0
STALL_1 = 1, // field has value 0x1

};
enum class ACK_t : uint32_t {
    ACK_0 = 0, // field has value 0x0
ACK_1 = 1, // field has value 0x1

};
enum class CHH_t : uint32_t {
    CHH_0 = 0, // field has value 0x0
CHH_1 = 1, // field has value 0x1

};
enum class DTERR_t : uint32_t {
    DTERR_0 = 0, // field has value 0x0
DTERR_1 = 1, // field has value 0x1

};
enum class NAK_t : uint32_t {
    NAK_0 = 0, // field has value 0x0
NAK_1 = 1, // field has value 0x1

};
enum class XFRC_t : uint32_t {
    XFRC_0 = 0, // field has value 0x0
XFRC_1 = 1, // field has value 0x1

};
enum class BBERR_t : uint32_t {
    BBERR_0 = 0, // field has value 0x0
BBERR_1 = 1, // field has value 0x1

};
enum class FRMOR_t : uint32_t {
    FRMOR_0 = 0, // field has value 0x0
FRMOR_1 = 1, // field has value 0x1

};
enum class TXERR_t : uint32_t {
    TXERR_0 = 0, // field has value 0x0
TXERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINT7 : public ReadableWritable<address> {
   public:
    HCINT7() : ReadableWritable<address>() {}
    XFRC_t XFRC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRC_t>(tmp);
}
void XFRC(XFRC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHH_t CHH(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHH_t>(tmp);
}
void CHH(CHH_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALL_t STALL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALL_t>(tmp);
}
void STALL(STALL_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAK_t NAK(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAK_t>(tmp);
}
void NAK(NAK_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACK_t ACK(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACK_t>(tmp);
}
void ACK(ACK_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXERR_t TXERR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERR_t>(tmp);
}
void TXERR(TXERR_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERR_t BBERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERR_t>(tmp);
}
void BBERR(BBERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMOR_t FRMOR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMOR_t>(tmp);
}
void FRMOR(FRMOR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERR_t DTERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERR_t>(tmp);
}
void DTERR(DTERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK0{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK0 : public ReadableWritable<address> {
   public:
    HCINTMSK0() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK1{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK1 : public ReadableWritable<address> {
   public:
    HCINTMSK1() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK2{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK2 : public ReadableWritable<address> {
   public:
    HCINTMSK2() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK3{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK3 : public ReadableWritable<address> {
   public:
    HCINTMSK3() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK4{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK4 : public ReadableWritable<address> {
   public:
    HCINTMSK4() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK5{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK5 : public ReadableWritable<address> {
   public:
    HCINTMSK5() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK6{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK6 : public ReadableWritable<address> {
   public:
    HCINTMSK6() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCINTMSK7{
enum class DTERRM_t : uint32_t {
    DTERRM_0 = 0, // field has value 0x0
DTERRM_1 = 1, // field has value 0x1

};
enum class ACKM_t : uint32_t {
    ACKM_0 = 0, // field has value 0x0
ACKM_1 = 1, // field has value 0x1

};
enum class NAKM_t : uint32_t {
    NAKM_0 = 0, // field has value 0x0
NAKM_1 = 1, // field has value 0x1

};
enum class CHHM_t : uint32_t {
    CHHM_0 = 0, // field has value 0x0
CHHM_1 = 1, // field has value 0x1

};
enum class FRMORM_t : uint32_t {
    FRMORM_0 = 0, // field has value 0x0
FRMORM_1 = 1, // field has value 0x1

};
enum class NYET_t : uint32_t {
    NYET_0 = 0, // field has value 0x0
NYET_1 = 1, // field has value 0x1

};
enum class STALLM_t : uint32_t {
    STALLM_0 = 0, // field has value 0x0
STALLM_1 = 1, // field has value 0x1

};
enum class BBERRM_t : uint32_t {
    BBERRM_0 = 0, // field has value 0x0
BBERRM_1 = 1, // field has value 0x1

};
enum class TXERRM_t : uint32_t {
    TXERRM_0 = 0, // field has value 0x0
TXERRM_1 = 1, // field has value 0x1

};
enum class XFRCM_t : uint32_t {
    XFRCM_0 = 0, // field has value 0x0
XFRCM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HCINTMSK7 : public ReadableWritable<address> {
   public:
    HCINTMSK7() : ReadableWritable<address>() {}
    XFRCM_t XFRCM(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<XFRCM_t>(tmp);
}
void XFRCM(XFRCM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
CHHM_t CHHM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CHHM_t>(tmp);
}
void CHHM(CHHM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
STALLM_t STALLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<STALLM_t>(tmp);
}
void STALLM(STALLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NAKM_t NAKM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NAKM_t>(tmp);
}
void NAKM(NAKM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ACKM_t ACKM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ACKM_t>(tmp);
}
void ACKM(ACKM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NYET_t NYET(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<NYET_t>(tmp);
}
void NYET(NYET_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TXERRM_t TXERRM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXERRM_t>(tmp);
}
void TXERRM(TXERRM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
BBERRM_t BBERRM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BBERRM_t>(tmp);
}
void BBERRM(BBERRM_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FRMORM_t FRMORM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FRMORM_t>(tmp);
}
void FRMORM(FRMORM_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DTERRM_t DTERRM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<DTERRM_t>(tmp);
}
void DTERRM(DTERRM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
};
}
namespace HCTSIZ0{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ0 : public ReadableWritable<address> {
   public:
    HCTSIZ0() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ1{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ1 : public ReadableWritable<address> {
   public:
    HCTSIZ1() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ2{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ2 : public ReadableWritable<address> {
   public:
    HCTSIZ2() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ3{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ3 : public ReadableWritable<address> {
   public:
    HCTSIZ3() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ4{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ4 : public ReadableWritable<address> {
   public:
    HCTSIZ4() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ5{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ5 : public ReadableWritable<address> {
   public:
    HCTSIZ5() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ6{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ6 : public ReadableWritable<address> {
   public:
    HCTSIZ6() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
namespace HCTSIZ7{

enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
template <uint32_t address>
class HCTSIZ7 : public ReadableWritable<address> {
   public:
    HCTSIZ7() : ReadableWritable<address>() {}
    uint32_t XFRSIZ(){
    uint32_t tmp = this->bits_masked(0x7ffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void XFRSIZ(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7ffff);
}
uint16_t PKTCNT(){
    uint32_t tmp = this->bits_masked(0x1ff80000) >> 19;
    return reinterpret_cast<uint16_t>(tmp);
}
void PKTCNT(uint16_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x1ff80000);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x60000000) >> 29;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x60000000);
}
};
}
template<uint32_t base_address>
class USB_OTG_FS{
    public:
    // OTG_FS host configuration register(OTG_FS_HCFG)
HCFG<base_address + 0> HCFG; 
// OTG_FS Host frame intervalregister
HFIR<base_address + 4> HFIR; 
// OTG_FS host frame number/frame timeremaining register (OTG_FS_HFNUM)
HFNUM<base_address + 8> HFNUM; 
// OTG_FS_Host periodic transmit FIFO/queuestatus register (OTG_FS_HPTXSTS)
HPTXSTS<base_address + 16> HPTXSTS; 
// OTG_FS Host all channels interruptregister
HAINT<base_address + 20> HAINT; 
// OTG_FS host all channels interrupt maskregister
HAINTMSK<base_address + 24> HAINTMSK; 
// OTG_FS host port control and status register(OTG_FS_HPRT)
HPRT<base_address + 64> HPRT; 
// OTG_FS host channel-0 characteristicsregister (OTG_FS_HCCHAR0)
HCCHAR0<base_address + 256> HCCHAR0; 
// OTG_FS host channel-1 characteristicsregister (OTG_FS_HCCHAR1)
HCCHAR1<base_address + 288> HCCHAR1; 
// OTG_FS host channel-2 characteristicsregister (OTG_FS_HCCHAR2)
HCCHAR2<base_address + 320> HCCHAR2; 
// OTG_FS host channel-3 characteristicsregister (OTG_FS_HCCHAR3)
HCCHAR3<base_address + 352> HCCHAR3; 
// OTG_FS host channel-4 characteristicsregister (OTG_FS_HCCHAR4)
HCCHAR4<base_address + 384> HCCHAR4; 
// OTG_FS host channel-5 characteristicsregister (OTG_FS_HCCHAR5)
HCCHAR5<base_address + 416> HCCHAR5; 
// OTG_FS host channel-6 characteristicsregister (OTG_FS_HCCHAR6)
HCCHAR6<base_address + 448> HCCHAR6; 
// OTG_FS host channel-7 characteristicsregister (OTG_FS_HCCHAR7)
HCCHAR7<base_address + 480> HCCHAR7; 
// OTG_FS host channel-0 interrupt register(OTG_FS_HCINT0)
HCINT0<base_address + 264> HCINT0; 
// OTG_FS host channel-1 interrupt register(OTG_FS_HCINT1)
HCINT1<base_address + 296> HCINT1; 
// OTG_FS host channel-2 interrupt register(OTG_FS_HCINT2)
HCINT2<base_address + 328> HCINT2; 
// OTG_FS host channel-3 interrupt register(OTG_FS_HCINT3)
HCINT3<base_address + 360> HCINT3; 
// OTG_FS host channel-4 interrupt register(OTG_FS_HCINT4)
HCINT4<base_address + 392> HCINT4; 
// OTG_FS host channel-5 interrupt register(OTG_FS_HCINT5)
HCINT5<base_address + 424> HCINT5; 
// OTG_FS host channel-6 interrupt register(OTG_FS_HCINT6)
HCINT6<base_address + 456> HCINT6; 
// OTG_FS host channel-7 interrupt register(OTG_FS_HCINT7)
HCINT7<base_address + 488> HCINT7; 
// OTG_FS host channel-0 mask register(OTG_FS_HCINTMSK0)
HCINTMSK0<base_address + 268> HCINTMSK0; 
// OTG_FS host channel-1 mask register(OTG_FS_HCINTMSK1)
HCINTMSK1<base_address + 300> HCINTMSK1; 
// OTG_FS host channel-2 mask register(OTG_FS_HCINTMSK2)
HCINTMSK2<base_address + 332> HCINTMSK2; 
// OTG_FS host channel-3 mask register(OTG_FS_HCINTMSK3)
HCINTMSK3<base_address + 364> HCINTMSK3; 
// OTG_FS host channel-4 mask register(OTG_FS_HCINTMSK4)
HCINTMSK4<base_address + 396> HCINTMSK4; 
// OTG_FS host channel-5 mask register(OTG_FS_HCINTMSK5)
HCINTMSK5<base_address + 428> HCINTMSK5; 
// OTG_FS host channel-6 mask register(OTG_FS_HCINTMSK6)
HCINTMSK6<base_address + 460> HCINTMSK6; 
// OTG_FS host channel-7 mask register(OTG_FS_HCINTMSK7)
HCINTMSK7<base_address + 492> HCINTMSK7; 
// OTG_FS host channel-0 transfer sizeregister
HCTSIZ0<base_address + 272> HCTSIZ0; 
// OTG_FS host channel-1 transfer sizeregister
HCTSIZ1<base_address + 304> HCTSIZ1; 
// OTG_FS host channel-2 transfer sizeregister
HCTSIZ2<base_address + 336> HCTSIZ2; 
// OTG_FS host channel-3 transfer sizeregister
HCTSIZ3<base_address + 368> HCTSIZ3; 
// OTG_FS host channel-x transfer sizeregister
HCTSIZ4<base_address + 400> HCTSIZ4; 
// OTG_FS host channel-5 transfer sizeregister
HCTSIZ5<base_address + 432> HCTSIZ5; 
// OTG_FS host channel-6 transfer sizeregister
HCTSIZ6<base_address + 464> HCTSIZ6; 
// OTG_FS host channel-7 transfer sizeregister
HCTSIZ7<base_address + 496> HCTSIZ7; 
};
}

#pragma once

#include <cstdint>
#include <reg.h>

namespace QUADSPI{
namespace CR{

enum class TOIE_t : uint32_t {
    TOIE_0 = 0, // field has value 0x0
TOIE_1 = 1, // field has value 0x1

};
enum class APMS_t : uint32_t {
    APMS_0 = 0, // field has value 0x0
APMS_1 = 1, // field has value 0x1

};
enum class FSEL_t : uint32_t {
    FSEL_0 = 0, // field has value 0x0
FSEL_1 = 1, // field has value 0x1

};
enum class FTIE_t : uint32_t {
    FTIE_0 = 0, // field has value 0x0
FTIE_1 = 1, // field has value 0x1

};
enum class TCEN_t : uint32_t {
    TCEN_0 = 0, // field has value 0x0
TCEN_1 = 1, // field has value 0x1

};
enum class EN_t : uint32_t {
    EN_0 = 0, // field has value 0x0
EN_1 = 1, // field has value 0x1

};
enum class ABORT_t : uint32_t {
    ABORT_0 = 0, // field has value 0x0
ABORT_1 = 1, // field has value 0x1

};
enum class SSHIFT_t : uint32_t {
    SSHIFT_0 = 0, // field has value 0x0
SSHIFT_1 = 1, // field has value 0x1

};
enum class TEIE_t : uint32_t {
    TEIE_0 = 0, // field has value 0x0
TEIE_1 = 1, // field has value 0x1

};
enum class DFM_t : uint32_t {
    DFM_0 = 0, // field has value 0x0
DFM_1 = 1, // field has value 0x1

};
enum class SMIE_t : uint32_t {
    SMIE_0 = 0, // field has value 0x0
SMIE_1 = 1, // field has value 0x1

};
enum class TCIE_t : uint32_t {
    TCIE_0 = 0, // field has value 0x0
TCIE_1 = 1, // field has value 0x1

};
enum class FTHRES_t : uint32_t {
    FTHRES_0 = 0, // field has value 0x0
FTHRES_1 = 1, // field has value 0x1
FTHRES_2 = 2, // field has value 0x2
FTHRES_3 = 3, // field has value 0x3
FTHRES_4 = 4, // field has value 0x4
FTHRES_5 = 5, // field has value 0x5
FTHRES_6 = 6, // field has value 0x6
FTHRES_7 = 7, // field has value 0x7
FTHRES_8 = 8, // field has value 0x8
FTHRES_9 = 9, // field has value 0x9
FTHRES_10 = 10, // field has value 0xa
FTHRES_11 = 11, // field has value 0xb
FTHRES_12 = 12, // field has value 0xc
FTHRES_13 = 13, // field has value 0xd
FTHRES_14 = 14, // field has value 0xe
FTHRES_15 = 15, // field has value 0xf
FTHRES_16 = 16, // field has value 0x10
FTHRES_17 = 17, // field has value 0x11
FTHRES_18 = 18, // field has value 0x12
FTHRES_19 = 19, // field has value 0x13
FTHRES_20 = 20, // field has value 0x14
FTHRES_21 = 21, // field has value 0x15
FTHRES_22 = 22, // field has value 0x16
FTHRES_23 = 23, // field has value 0x17
FTHRES_24 = 24, // field has value 0x18
FTHRES_25 = 25, // field has value 0x19
FTHRES_26 = 26, // field has value 0x1a
FTHRES_27 = 27, // field has value 0x1b
FTHRES_28 = 28, // field has value 0x1c
FTHRES_29 = 29, // field has value 0x1d
FTHRES_30 = 30, // field has value 0x1e
FTHRES_31 = 31, // field has value 0x1f

};
enum class PMM_t : uint32_t {
    PMM_0 = 0, // field has value 0x0
PMM_1 = 1, // field has value 0x1

};
enum class DMAEN_t : uint32_t {
    DMAEN_0 = 0, // field has value 0x0
DMAEN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    uint8_t PRESCALER(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRESCALER(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
PMM_t PMM(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<PMM_t>(tmp);
}
void PMM(PMM_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
APMS_t APMS(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<APMS_t>(tmp);
}
void APMS(APMS_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
TOIE_t TOIE(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TOIE_t>(tmp);
}
void TOIE(TOIE_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
SMIE_t SMIE(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<SMIE_t>(tmp);
}
void SMIE(SMIE_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
FTIE_t FTIE(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<FTIE_t>(tmp);
}
void FTIE(FTIE_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TCIE_t TCIE(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TCIE_t>(tmp);
}
void TCIE(TCIE_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TEIE_t TEIE(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TEIE_t>(tmp);
}
void TEIE(TEIE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
FTHRES_t FTHRES(){
    uint32_t tmp = this->bits_masked(0x1f00) >> 8;
    return reinterpret_cast<FTHRES_t>(tmp);
}
void FTHRES(FTHRES_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x1f00);
}
FSEL_t FSEL(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<FSEL_t>(tmp);
}
void FSEL(FSEL_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
DFM_t DFM(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<DFM_t>(tmp);
}
void DFM(DFM_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SSHIFT_t SSHIFT(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<SSHIFT_t>(tmp);
}
void SSHIFT(SSHIFT_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TCEN_t TCEN(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TCEN_t>(tmp);
}
void TCEN(TCEN_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DMAEN_t DMAEN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DMAEN_t>(tmp);
}
void DMAEN(DMAEN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
ABORT_t ABORT(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<ABORT_t>(tmp);
}
void ABORT(ABORT_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
EN_t EN(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<EN_t>(tmp);
}
void EN(EN_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DCR{
enum class FSIZE_t : uint32_t {
    FSIZE_0 = 0, // field has value 0x0
FSIZE_1 = 1, // field has value 0x1
FSIZE_2 = 2, // field has value 0x2
FSIZE_3 = 3, // field has value 0x3
FSIZE_4 = 4, // field has value 0x4
FSIZE_5 = 5, // field has value 0x5
FSIZE_6 = 6, // field has value 0x6
FSIZE_7 = 7, // field has value 0x7
FSIZE_8 = 8, // field has value 0x8
FSIZE_9 = 9, // field has value 0x9
FSIZE_10 = 10, // field has value 0xa
FSIZE_11 = 11, // field has value 0xb
FSIZE_12 = 12, // field has value 0xc
FSIZE_13 = 13, // field has value 0xd
FSIZE_14 = 14, // field has value 0xe
FSIZE_15 = 15, // field has value 0xf
FSIZE_16 = 16, // field has value 0x10
FSIZE_17 = 17, // field has value 0x11
FSIZE_18 = 18, // field has value 0x12
FSIZE_19 = 19, // field has value 0x13
FSIZE_20 = 20, // field has value 0x14
FSIZE_21 = 21, // field has value 0x15
FSIZE_22 = 22, // field has value 0x16
FSIZE_23 = 23, // field has value 0x17
FSIZE_24 = 24, // field has value 0x18
FSIZE_25 = 25, // field has value 0x19
FSIZE_26 = 26, // field has value 0x1a
FSIZE_27 = 27, // field has value 0x1b
FSIZE_28 = 28, // field has value 0x1c
FSIZE_29 = 29, // field has value 0x1d
FSIZE_30 = 30, // field has value 0x1e
FSIZE_31 = 31, // field has value 0x1f

};
enum class CKMODE_t : uint32_t {
    CKMODE_0 = 0, // field has value 0x0
CKMODE_1 = 1, // field has value 0x1

};
enum class CSHT_t : uint32_t {
    CSHT_0 = 0, // field has value 0x0
CSHT_1 = 1, // field has value 0x1
CSHT_2 = 2, // field has value 0x2
CSHT_3 = 3, // field has value 0x3
CSHT_4 = 4, // field has value 0x4
CSHT_5 = 5, // field has value 0x5
CSHT_6 = 6, // field has value 0x6
CSHT_7 = 7, // field has value 0x7

};
template <uint32_t address>
class DCR : public ReadableWritable<address> {
   public:
    DCR() : ReadableWritable<address>() {}
    FSIZE_t FSIZE(){
    uint32_t tmp = this->bits_masked(0x1f0000) >> 16;
    return reinterpret_cast<FSIZE_t>(tmp);
}
void FSIZE(FSIZE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x1f0000);
}
CSHT_t CSHT(){
    uint32_t tmp = this->bits_masked(0x700) >> 8;
    return reinterpret_cast<CSHT_t>(tmp);
}
void CSHT(CSHT_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x700);
}
CKMODE_t CKMODE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CKMODE_t>(tmp);
}
void CKMODE(CKMODE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace SR{
enum class FLEVEL_t : uint32_t {
    FLEVEL_0 = 0, // field has value 0x0
FLEVEL_1 = 1, // field has value 0x1
FLEVEL_2 = 2, // field has value 0x2
FLEVEL_3 = 3, // field has value 0x3
FLEVEL_4 = 4, // field has value 0x4
FLEVEL_5 = 5, // field has value 0x5
FLEVEL_6 = 6, // field has value 0x6
FLEVEL_7 = 7, // field has value 0x7
FLEVEL_8 = 8, // field has value 0x8
FLEVEL_9 = 9, // field has value 0x9
FLEVEL_10 = 10, // field has value 0xa
FLEVEL_11 = 11, // field has value 0xb
FLEVEL_12 = 12, // field has value 0xc
FLEVEL_13 = 13, // field has value 0xd
FLEVEL_14 = 14, // field has value 0xe
FLEVEL_15 = 15, // field has value 0xf
FLEVEL_16 = 16, // field has value 0x10
FLEVEL_17 = 17, // field has value 0x11
FLEVEL_18 = 18, // field has value 0x12
FLEVEL_19 = 19, // field has value 0x13
FLEVEL_20 = 20, // field has value 0x14
FLEVEL_21 = 21, // field has value 0x15
FLEVEL_22 = 22, // field has value 0x16
FLEVEL_23 = 23, // field has value 0x17
FLEVEL_24 = 24, // field has value 0x18
FLEVEL_25 = 25, // field has value 0x19
FLEVEL_26 = 26, // field has value 0x1a
FLEVEL_27 = 27, // field has value 0x1b
FLEVEL_28 = 28, // field has value 0x1c
FLEVEL_29 = 29, // field has value 0x1d
FLEVEL_30 = 30, // field has value 0x1e
FLEVEL_31 = 31, // field has value 0x1f
FLEVEL_32 = 32, // field has value 0x20
FLEVEL_33 = 33, // field has value 0x21
FLEVEL_34 = 34, // field has value 0x22
FLEVEL_35 = 35, // field has value 0x23
FLEVEL_36 = 36, // field has value 0x24
FLEVEL_37 = 37, // field has value 0x25
FLEVEL_38 = 38, // field has value 0x26
FLEVEL_39 = 39, // field has value 0x27
FLEVEL_40 = 40, // field has value 0x28
FLEVEL_41 = 41, // field has value 0x29
FLEVEL_42 = 42, // field has value 0x2a
FLEVEL_43 = 43, // field has value 0x2b
FLEVEL_44 = 44, // field has value 0x2c
FLEVEL_45 = 45, // field has value 0x2d
FLEVEL_46 = 46, // field has value 0x2e
FLEVEL_47 = 47, // field has value 0x2f
FLEVEL_48 = 48, // field has value 0x30
FLEVEL_49 = 49, // field has value 0x31
FLEVEL_50 = 50, // field has value 0x32
FLEVEL_51 = 51, // field has value 0x33
FLEVEL_52 = 52, // field has value 0x34
FLEVEL_53 = 53, // field has value 0x35
FLEVEL_54 = 54, // field has value 0x36
FLEVEL_55 = 55, // field has value 0x37
FLEVEL_56 = 56, // field has value 0x38
FLEVEL_57 = 57, // field has value 0x39
FLEVEL_58 = 58, // field has value 0x3a
FLEVEL_59 = 59, // field has value 0x3b
FLEVEL_60 = 60, // field has value 0x3c
FLEVEL_61 = 61, // field has value 0x3d
FLEVEL_62 = 62, // field has value 0x3e
FLEVEL_63 = 63, // field has value 0x3f
FLEVEL_64 = 64, // field has value 0x40
FLEVEL_65 = 65, // field has value 0x41
FLEVEL_66 = 66, // field has value 0x42
FLEVEL_67 = 67, // field has value 0x43
FLEVEL_68 = 68, // field has value 0x44
FLEVEL_69 = 69, // field has value 0x45
FLEVEL_70 = 70, // field has value 0x46
FLEVEL_71 = 71, // field has value 0x47
FLEVEL_72 = 72, // field has value 0x48
FLEVEL_73 = 73, // field has value 0x49
FLEVEL_74 = 74, // field has value 0x4a
FLEVEL_75 = 75, // field has value 0x4b
FLEVEL_76 = 76, // field has value 0x4c
FLEVEL_77 = 77, // field has value 0x4d
FLEVEL_78 = 78, // field has value 0x4e
FLEVEL_79 = 79, // field has value 0x4f
FLEVEL_80 = 80, // field has value 0x50
FLEVEL_81 = 81, // field has value 0x51
FLEVEL_82 = 82, // field has value 0x52
FLEVEL_83 = 83, // field has value 0x53
FLEVEL_84 = 84, // field has value 0x54
FLEVEL_85 = 85, // field has value 0x55
FLEVEL_86 = 86, // field has value 0x56
FLEVEL_87 = 87, // field has value 0x57
FLEVEL_88 = 88, // field has value 0x58
FLEVEL_89 = 89, // field has value 0x59
FLEVEL_90 = 90, // field has value 0x5a
FLEVEL_91 = 91, // field has value 0x5b
FLEVEL_92 = 92, // field has value 0x5c
FLEVEL_93 = 93, // field has value 0x5d
FLEVEL_94 = 94, // field has value 0x5e
FLEVEL_95 = 95, // field has value 0x5f
FLEVEL_96 = 96, // field has value 0x60
FLEVEL_97 = 97, // field has value 0x61
FLEVEL_98 = 98, // field has value 0x62
FLEVEL_99 = 99, // field has value 0x63
FLEVEL_100 = 100, // field has value 0x64
FLEVEL_101 = 101, // field has value 0x65
FLEVEL_102 = 102, // field has value 0x66
FLEVEL_103 = 103, // field has value 0x67
FLEVEL_104 = 104, // field has value 0x68
FLEVEL_105 = 105, // field has value 0x69
FLEVEL_106 = 106, // field has value 0x6a
FLEVEL_107 = 107, // field has value 0x6b
FLEVEL_108 = 108, // field has value 0x6c
FLEVEL_109 = 109, // field has value 0x6d
FLEVEL_110 = 110, // field has value 0x6e
FLEVEL_111 = 111, // field has value 0x6f
FLEVEL_112 = 112, // field has value 0x70
FLEVEL_113 = 113, // field has value 0x71
FLEVEL_114 = 114, // field has value 0x72
FLEVEL_115 = 115, // field has value 0x73
FLEVEL_116 = 116, // field has value 0x74
FLEVEL_117 = 117, // field has value 0x75
FLEVEL_118 = 118, // field has value 0x76
FLEVEL_119 = 119, // field has value 0x77
FLEVEL_120 = 120, // field has value 0x78
FLEVEL_121 = 121, // field has value 0x79
FLEVEL_122 = 122, // field has value 0x7a
FLEVEL_123 = 123, // field has value 0x7b
FLEVEL_124 = 124, // field has value 0x7c
FLEVEL_125 = 125, // field has value 0x7d
FLEVEL_126 = 126, // field has value 0x7e
FLEVEL_127 = 127, // field has value 0x7f

};
enum class TCF_t : uint32_t {
    TCF_0 = 0, // field has value 0x0
TCF_1 = 1, // field has value 0x1

};
enum class FTF_t : uint32_t {
    FTF_0 = 0, // field has value 0x0
FTF_1 = 1, // field has value 0x1

};
enum class TEF_t : uint32_t {
    TEF_0 = 0, // field has value 0x0
TEF_1 = 1, // field has value 0x1

};
enum class SMF_t : uint32_t {
    SMF_0 = 0, // field has value 0x0
SMF_1 = 1, // field has value 0x1

};
enum class BUSY_t : uint32_t {
    BUSY_0 = 0, // field has value 0x0
BUSY_1 = 1, // field has value 0x1

};
enum class TOF_t : uint32_t {
    TOF_0 = 0, // field has value 0x0
TOF_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR : public Readable<address> {
   public:
    SR() : Readable<address>() {}
    FLEVEL_t FLEVEL(){
    uint32_t tmp = this->bits_masked(0x7f00) >> 8;
    return reinterpret_cast<FLEVEL_t>(tmp);
}
void FLEVEL(FLEVEL_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x7f00);
}
BUSY_t BUSY(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<BUSY_t>(tmp);
}
void BUSY(BUSY_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TOF_t TOF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TOF_t>(tmp);
}
void TOF(TOF_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
SMF_t SMF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<SMF_t>(tmp);
}
void SMF(SMF_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FTF_t FTF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FTF_t>(tmp);
}
void FTF(FTF_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TCF_t TCF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TCF_t>(tmp);
}
void TCF(TCF_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TEF_t TEF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TEF_t>(tmp);
}
void TEF(TEF_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace FCR{
enum class CTEF_t : uint32_t {
    CTEF_0 = 0, // field has value 0x0
CTEF_1 = 1, // field has value 0x1

};
enum class CSMF_t : uint32_t {
    CSMF_0 = 0, // field has value 0x0
CSMF_1 = 1, // field has value 0x1

};
enum class CTOF_t : uint32_t {
    CTOF_0 = 0, // field has value 0x0
CTOF_1 = 1, // field has value 0x1

};
enum class CTCF_t : uint32_t {
    CTCF_0 = 0, // field has value 0x0
CTCF_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FCR : public ReadableWritable<address> {
   public:
    FCR() : ReadableWritable<address>() {}
    CTOF_t CTOF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CTOF_t>(tmp);
}
void CTOF(CTOF_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
CSMF_t CSMF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CSMF_t>(tmp);
}
void CSMF(CSMF_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CTCF_t CTCF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CTCF_t>(tmp);
}
void CTCF(CTCF_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CTEF_t CTEF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CTEF_t>(tmp);
}
void CTEF(CTEF_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DLR{

template <uint32_t address>
class DLR : public ReadableWritable<address> {
   public:
    DLR() : ReadableWritable<address>() {}
    uint32_t DL(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void DL(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace CCR{

enum class IMODE_t : uint32_t {
    IMODE_0 = 0, // field has value 0x0
IMODE_1 = 1, // field has value 0x1
IMODE_2 = 2, // field has value 0x2
IMODE_3 = 3, // field has value 0x3

};
enum class DMODE_t : uint32_t {
    DMODE_0 = 0, // field has value 0x0
DMODE_1 = 1, // field has value 0x1
DMODE_2 = 2, // field has value 0x2
DMODE_3 = 3, // field has value 0x3

};
enum class ADSIZE_t : uint32_t {
    ADSIZE_0 = 0, // field has value 0x0
ADSIZE_1 = 1, // field has value 0x1
ADSIZE_2 = 2, // field has value 0x2
ADSIZE_3 = 3, // field has value 0x3

};
enum class SIOO_t : uint32_t {
    SIOO_0 = 0, // field has value 0x0
SIOO_1 = 1, // field has value 0x1

};
enum class ABMODE_t : uint32_t {
    ABMODE_0 = 0, // field has value 0x0
ABMODE_1 = 1, // field has value 0x1
ABMODE_2 = 2, // field has value 0x2
ABMODE_3 = 3, // field has value 0x3

};
enum class DDRM_t : uint32_t {
    DDRM_0 = 0, // field has value 0x0
DDRM_1 = 1, // field has value 0x1

};
enum class DHHC_t : uint32_t {
    DHHC_0 = 0, // field has value 0x0
DHHC_1 = 1, // field has value 0x1

};
enum class DCYC_t : uint32_t {
    DCYC_0 = 0, // field has value 0x0
DCYC_1 = 1, // field has value 0x1
DCYC_2 = 2, // field has value 0x2
DCYC_3 = 3, // field has value 0x3
DCYC_4 = 4, // field has value 0x4
DCYC_5 = 5, // field has value 0x5
DCYC_6 = 6, // field has value 0x6
DCYC_7 = 7, // field has value 0x7
DCYC_8 = 8, // field has value 0x8
DCYC_9 = 9, // field has value 0x9
DCYC_10 = 10, // field has value 0xa
DCYC_11 = 11, // field has value 0xb
DCYC_12 = 12, // field has value 0xc
DCYC_13 = 13, // field has value 0xd
DCYC_14 = 14, // field has value 0xe
DCYC_15 = 15, // field has value 0xf
DCYC_16 = 16, // field has value 0x10
DCYC_17 = 17, // field has value 0x11
DCYC_18 = 18, // field has value 0x12
DCYC_19 = 19, // field has value 0x13
DCYC_20 = 20, // field has value 0x14
DCYC_21 = 21, // field has value 0x15
DCYC_22 = 22, // field has value 0x16
DCYC_23 = 23, // field has value 0x17
DCYC_24 = 24, // field has value 0x18
DCYC_25 = 25, // field has value 0x19
DCYC_26 = 26, // field has value 0x1a
DCYC_27 = 27, // field has value 0x1b
DCYC_28 = 28, // field has value 0x1c
DCYC_29 = 29, // field has value 0x1d
DCYC_30 = 30, // field has value 0x1e
DCYC_31 = 31, // field has value 0x1f

};
enum class FMODE_t : uint32_t {
    FMODE_0 = 0, // field has value 0x0
FMODE_1 = 1, // field has value 0x1
FMODE_2 = 2, // field has value 0x2
FMODE_3 = 3, // field has value 0x3

};
enum class ADMODE_t : uint32_t {
    ADMODE_0 = 0, // field has value 0x0
ADMODE_1 = 1, // field has value 0x1
ADMODE_2 = 2, // field has value 0x2
ADMODE_3 = 3, // field has value 0x3

};
enum class ABSIZE_t : uint32_t {
    ABSIZE_0 = 0, // field has value 0x0
ABSIZE_1 = 1, // field has value 0x1
ABSIZE_2 = 2, // field has value 0x2
ABSIZE_3 = 3, // field has value 0x3

};
template <uint32_t address>
class CCR : public ReadableWritable<address> {
   public:
    CCR() : ReadableWritable<address>() {}
    DDRM_t DDRM(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<DDRM_t>(tmp);
}
void DDRM(DDRM_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
DHHC_t DHHC(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<DHHC_t>(tmp);
}
void DHHC(DHHC_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
SIOO_t SIOO(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<SIOO_t>(tmp);
}
void SIOO(SIOO_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
FMODE_t FMODE(){
    uint32_t tmp = this->bits_masked(0xc000000) >> 26;
    return reinterpret_cast<FMODE_t>(tmp);
}
void FMODE(FMODE_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0xc000000);
}
DMODE_t DMODE(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<DMODE_t>(tmp);
}
void DMODE(DMODE_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x3000000);
}
DCYC_t DCYC(){
    uint32_t tmp = this->bits_masked(0x7c0000) >> 18;
    return reinterpret_cast<DCYC_t>(tmp);
}
void DCYC(DCYC_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x7c0000);
}
ABSIZE_t ABSIZE(){
    uint32_t tmp = this->bits_masked(0x30000) >> 16;
    return reinterpret_cast<ABSIZE_t>(tmp);
}
void ABSIZE(ABSIZE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x30000);
}
ABMODE_t ABMODE(){
    uint32_t tmp = this->bits_masked(0xc000) >> 14;
    return reinterpret_cast<ABMODE_t>(tmp);
}
void ABMODE(ABMODE_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0xc000);
}
ADSIZE_t ADSIZE(){
    uint32_t tmp = this->bits_masked(0x3000) >> 12;
    return reinterpret_cast<ADSIZE_t>(tmp);
}
void ADSIZE(ADSIZE_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x3000);
}
ADMODE_t ADMODE(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<ADMODE_t>(tmp);
}
void ADMODE(ADMODE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0xc00);
}
IMODE_t IMODE(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<IMODE_t>(tmp);
}
void IMODE(IMODE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
uint8_t INSTRUCTION(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void INSTRUCTION(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace AR{

template <uint32_t address>
class AR : public ReadableWritable<address> {
   public:
    AR() : ReadableWritable<address>() {}
    uint32_t ADDRESS(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void ADDRESS(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ABR{

template <uint32_t address>
class ABR : public ReadableWritable<address> {
   public:
    ABR() : ReadableWritable<address>() {}
    uint32_t ALTERNATE(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void ALTERNATE(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public ReadableWritable<address> {
   public:
    DR() : ReadableWritable<address>() {}
    uint32_t DATA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void DATA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace PSMKR{

template <uint32_t address>
class PSMKR : public ReadableWritable<address> {
   public:
    PSMKR() : ReadableWritable<address>() {}
    uint32_t MASK(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void MASK(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace PSMAR{

template <uint32_t address>
class PSMAR : public ReadableWritable<address> {
   public:
    PSMAR() : ReadableWritable<address>() {}
    uint32_t MATCH(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void MATCH(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace PIR{

template <uint32_t address>
class PIR : public ReadableWritable<address> {
   public:
    PIR() : ReadableWritable<address>() {}
    uint16_t INTERVAL(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INTERVAL(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace LPTR{

template <uint32_t address>
class LPTR : public ReadableWritable<address> {
   public:
    LPTR() : ReadableWritable<address>() {}
    uint16_t TIMEOUT(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void TIMEOUT(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
template<uint32_t base_address>
class QUADSPI{
    public:
    // control register
CR<base_address + 0> CR; 
// device configuration register
DCR<base_address + 4> DCR; 
// status register
SR<base_address + 8> SR; 
// flag clear register
FCR<base_address + 12> FCR; 
// data length register
DLR<base_address + 16> DLR; 
// communication configurationregister
CCR<base_address + 20> CCR; 
// address register
AR<base_address + 24> AR; 
// ABR
ABR<base_address + 28> ABR; 
// data register
DR<base_address + 32> DR; 
// polling status mask register
PSMKR<base_address + 36> PSMKR; 
// polling status match register
PSMAR<base_address + 40> PSMAR; 
// polling interval register
PIR<base_address + 44> PIR; 
// low-power timeout register
LPTR<base_address + 48> LPTR; 
};
}

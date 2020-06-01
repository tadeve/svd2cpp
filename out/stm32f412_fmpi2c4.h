#pragma once

#include <cstdint>
#include <reg.h>

namespace FMPI2C4{
namespace CR1{
enum class SMBHEN_t : uint32_t {
    SMBHEN_0 = 0, // field has value 0x0
SMBHEN_1 = 1, // field has value 0x1

};
enum class RXIE_t : uint32_t {
    RXIE_0 = 0, // field has value 0x0
RXIE_1 = 1, // field has value 0x1

};
enum class WUPEN_t : uint32_t {
    WUPEN_0 = 0, // field has value 0x0
WUPEN_1 = 1, // field has value 0x1

};
enum class NOSTRETCH_t : uint32_t {
    NOSTRETCH_0 = 0, // field has value 0x0
NOSTRETCH_1 = 1, // field has value 0x1

};
enum class SMBDEN_t : uint32_t {
    SMBDEN_0 = 0, // field has value 0x0
SMBDEN_1 = 1, // field has value 0x1

};
enum class RXDMAEN_t : uint32_t {
    RXDMAEN_0 = 0, // field has value 0x0
RXDMAEN_1 = 1, // field has value 0x1

};
enum class PECEN_t : uint32_t {
    PECEN_0 = 0, // field has value 0x0
PECEN_1 = 1, // field has value 0x1

};
enum class STOPIE_t : uint32_t {
    STOPIE_0 = 0, // field has value 0x0
STOPIE_1 = 1, // field has value 0x1

};
enum class TXIE_t : uint32_t {
    TXIE_0 = 0, // field has value 0x0
TXIE_1 = 1, // field has value 0x1

};
enum class TCIE_t : uint32_t {
    TCIE_0 = 0, // field has value 0x0
TCIE_1 = 1, // field has value 0x1

};
enum class DNF_t : uint32_t {
    DNF_0 = 0, // field has value 0x0
DNF_1 = 1, // field has value 0x1
DNF_2 = 2, // field has value 0x2
DNF_3 = 3, // field has value 0x3
DNF_4 = 4, // field has value 0x4
DNF_5 = 5, // field has value 0x5
DNF_6 = 6, // field has value 0x6
DNF_7 = 7, // field has value 0x7
DNF_8 = 8, // field has value 0x8
DNF_9 = 9, // field has value 0x9
DNF_10 = 10, // field has value 0xa
DNF_11 = 11, // field has value 0xb
DNF_12 = 12, // field has value 0xc
DNF_13 = 13, // field has value 0xd
DNF_14 = 14, // field has value 0xe
DNF_15 = 15, // field has value 0xf

};
enum class TCDMAEN_t : uint32_t {
    TCDMAEN_0 = 0, // field has value 0x0
TCDMAEN_1 = 1, // field has value 0x1

};
enum class NACKIE_t : uint32_t {
    NACKIE_0 = 0, // field has value 0x0
NACKIE_1 = 1, // field has value 0x1

};
enum class ANFOFF_t : uint32_t {
    ANFOFF_0 = 0, // field has value 0x0
ANFOFF_1 = 1, // field has value 0x1

};
enum class ERRIE_t : uint32_t {
    ERRIE_0 = 0, // field has value 0x0
ERRIE_1 = 1, // field has value 0x1

};
enum class ADDRE_t : uint32_t {
    ADDRE_0 = 0, // field has value 0x0
ADDRE_1 = 1, // field has value 0x1

};
enum class ALERTEN_t : uint32_t {
    ALERTEN_0 = 0, // field has value 0x0
ALERTEN_1 = 1, // field has value 0x1

};
enum class PE_t : uint32_t {
    PE_0 = 0, // field has value 0x0
PE_1 = 1, // field has value 0x1

};
enum class GCEN_t : uint32_t {
    GCEN_0 = 0, // field has value 0x0
GCEN_1 = 1, // field has value 0x1

};
enum class SBC_t : uint32_t {
    SBC_0 = 0, // field has value 0x0
SBC_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CR1 : public ReadableWritable<address> {
   public:
    CR1() : ReadableWritable<address>() {}
    PE_t PE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PE_t>(tmp);
}
void PE(PE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TXIE_t TXIE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TXIE_t>(tmp);
}
void TXIE(TXIE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
RXIE_t RXIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<RXIE_t>(tmp);
}
void RXIE(RXIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
ADDRE_t ADDRE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ADDRE_t>(tmp);
}
void ADDRE(ADDRE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NACKIE_t NACKIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NACKIE_t>(tmp);
}
void NACKIE(NACKIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
STOPIE_t STOPIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<STOPIE_t>(tmp);
}
void STOPIE(STOPIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TCIE_t TCIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TCIE_t>(tmp);
}
void TCIE(TCIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ERRIE_t ERRIE(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<ERRIE_t>(tmp);
}
void ERRIE(ERRIE_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
DNF_t DNF(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<DNF_t>(tmp);
}
void DNF(DNF_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
ANFOFF_t ANFOFF(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<ANFOFF_t>(tmp);
}
void ANFOFF(ANFOFF_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TCDMAEN_t TCDMAEN(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TCDMAEN_t>(tmp);
}
void TCDMAEN(TCDMAEN_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
RXDMAEN_t RXDMAEN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<RXDMAEN_t>(tmp);
}
void RXDMAEN(RXDMAEN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
SBC_t SBC(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<SBC_t>(tmp);
}
void SBC(SBC_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
NOSTRETCH_t NOSTRETCH(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<NOSTRETCH_t>(tmp);
}
void NOSTRETCH(NOSTRETCH_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
WUPEN_t WUPEN(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<WUPEN_t>(tmp);
}
void WUPEN(WUPEN_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
GCEN_t GCEN(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<GCEN_t>(tmp);
}
void GCEN(GCEN_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
SMBHEN_t SMBHEN(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<SMBHEN_t>(tmp);
}
void SMBHEN(SMBHEN_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
SMBDEN_t SMBDEN(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<SMBDEN_t>(tmp);
}
void SMBDEN(SMBDEN_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
ALERTEN_t ALERTEN(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<ALERTEN_t>(tmp);
}
void ALERTEN(ALERTEN_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
PECEN_t PECEN(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<PECEN_t>(tmp);
}
void PECEN(PECEN_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
};
}
namespace CR2{
enum class SADD1_7_t : uint32_t {
    SADD1_7_0 = 0, // field has value 0x0
SADD1_7_1 = 1, // field has value 0x1
SADD1_7_2 = 2, // field has value 0x2
SADD1_7_3 = 3, // field has value 0x3
SADD1_7_4 = 4, // field has value 0x4
SADD1_7_5 = 5, // field has value 0x5
SADD1_7_6 = 6, // field has value 0x6
SADD1_7_7 = 7, // field has value 0x7
SADD1_7_8 = 8, // field has value 0x8
SADD1_7_9 = 9, // field has value 0x9
SADD1_7_10 = 10, // field has value 0xa
SADD1_7_11 = 11, // field has value 0xb
SADD1_7_12 = 12, // field has value 0xc
SADD1_7_13 = 13, // field has value 0xd
SADD1_7_14 = 14, // field has value 0xe
SADD1_7_15 = 15, // field has value 0xf
SADD1_7_16 = 16, // field has value 0x10
SADD1_7_17 = 17, // field has value 0x11
SADD1_7_18 = 18, // field has value 0x12
SADD1_7_19 = 19, // field has value 0x13
SADD1_7_20 = 20, // field has value 0x14
SADD1_7_21 = 21, // field has value 0x15
SADD1_7_22 = 22, // field has value 0x16
SADD1_7_23 = 23, // field has value 0x17
SADD1_7_24 = 24, // field has value 0x18
SADD1_7_25 = 25, // field has value 0x19
SADD1_7_26 = 26, // field has value 0x1a
SADD1_7_27 = 27, // field has value 0x1b
SADD1_7_28 = 28, // field has value 0x1c
SADD1_7_29 = 29, // field has value 0x1d
SADD1_7_30 = 30, // field has value 0x1e
SADD1_7_31 = 31, // field has value 0x1f
SADD1_7_32 = 32, // field has value 0x20
SADD1_7_33 = 33, // field has value 0x21
SADD1_7_34 = 34, // field has value 0x22
SADD1_7_35 = 35, // field has value 0x23
SADD1_7_36 = 36, // field has value 0x24
SADD1_7_37 = 37, // field has value 0x25
SADD1_7_38 = 38, // field has value 0x26
SADD1_7_39 = 39, // field has value 0x27
SADD1_7_40 = 40, // field has value 0x28
SADD1_7_41 = 41, // field has value 0x29
SADD1_7_42 = 42, // field has value 0x2a
SADD1_7_43 = 43, // field has value 0x2b
SADD1_7_44 = 44, // field has value 0x2c
SADD1_7_45 = 45, // field has value 0x2d
SADD1_7_46 = 46, // field has value 0x2e
SADD1_7_47 = 47, // field has value 0x2f
SADD1_7_48 = 48, // field has value 0x30
SADD1_7_49 = 49, // field has value 0x31
SADD1_7_50 = 50, // field has value 0x32
SADD1_7_51 = 51, // field has value 0x33
SADD1_7_52 = 52, // field has value 0x34
SADD1_7_53 = 53, // field has value 0x35
SADD1_7_54 = 54, // field has value 0x36
SADD1_7_55 = 55, // field has value 0x37
SADD1_7_56 = 56, // field has value 0x38
SADD1_7_57 = 57, // field has value 0x39
SADD1_7_58 = 58, // field has value 0x3a
SADD1_7_59 = 59, // field has value 0x3b
SADD1_7_60 = 60, // field has value 0x3c
SADD1_7_61 = 61, // field has value 0x3d
SADD1_7_62 = 62, // field has value 0x3e
SADD1_7_63 = 63, // field has value 0x3f
SADD1_7_64 = 64, // field has value 0x40
SADD1_7_65 = 65, // field has value 0x41
SADD1_7_66 = 66, // field has value 0x42
SADD1_7_67 = 67, // field has value 0x43
SADD1_7_68 = 68, // field has value 0x44
SADD1_7_69 = 69, // field has value 0x45
SADD1_7_70 = 70, // field has value 0x46
SADD1_7_71 = 71, // field has value 0x47
SADD1_7_72 = 72, // field has value 0x48
SADD1_7_73 = 73, // field has value 0x49
SADD1_7_74 = 74, // field has value 0x4a
SADD1_7_75 = 75, // field has value 0x4b
SADD1_7_76 = 76, // field has value 0x4c
SADD1_7_77 = 77, // field has value 0x4d
SADD1_7_78 = 78, // field has value 0x4e
SADD1_7_79 = 79, // field has value 0x4f
SADD1_7_80 = 80, // field has value 0x50
SADD1_7_81 = 81, // field has value 0x51
SADD1_7_82 = 82, // field has value 0x52
SADD1_7_83 = 83, // field has value 0x53
SADD1_7_84 = 84, // field has value 0x54
SADD1_7_85 = 85, // field has value 0x55
SADD1_7_86 = 86, // field has value 0x56
SADD1_7_87 = 87, // field has value 0x57
SADD1_7_88 = 88, // field has value 0x58
SADD1_7_89 = 89, // field has value 0x59
SADD1_7_90 = 90, // field has value 0x5a
SADD1_7_91 = 91, // field has value 0x5b
SADD1_7_92 = 92, // field has value 0x5c
SADD1_7_93 = 93, // field has value 0x5d
SADD1_7_94 = 94, // field has value 0x5e
SADD1_7_95 = 95, // field has value 0x5f
SADD1_7_96 = 96, // field has value 0x60
SADD1_7_97 = 97, // field has value 0x61
SADD1_7_98 = 98, // field has value 0x62
SADD1_7_99 = 99, // field has value 0x63
SADD1_7_100 = 100, // field has value 0x64
SADD1_7_101 = 101, // field has value 0x65
SADD1_7_102 = 102, // field has value 0x66
SADD1_7_103 = 103, // field has value 0x67
SADD1_7_104 = 104, // field has value 0x68
SADD1_7_105 = 105, // field has value 0x69
SADD1_7_106 = 106, // field has value 0x6a
SADD1_7_107 = 107, // field has value 0x6b
SADD1_7_108 = 108, // field has value 0x6c
SADD1_7_109 = 109, // field has value 0x6d
SADD1_7_110 = 110, // field has value 0x6e
SADD1_7_111 = 111, // field has value 0x6f
SADD1_7_112 = 112, // field has value 0x70
SADD1_7_113 = 113, // field has value 0x71
SADD1_7_114 = 114, // field has value 0x72
SADD1_7_115 = 115, // field has value 0x73
SADD1_7_116 = 116, // field has value 0x74
SADD1_7_117 = 117, // field has value 0x75
SADD1_7_118 = 118, // field has value 0x76
SADD1_7_119 = 119, // field has value 0x77
SADD1_7_120 = 120, // field has value 0x78
SADD1_7_121 = 121, // field has value 0x79
SADD1_7_122 = 122, // field has value 0x7a
SADD1_7_123 = 123, // field has value 0x7b
SADD1_7_124 = 124, // field has value 0x7c
SADD1_7_125 = 125, // field has value 0x7d
SADD1_7_126 = 126, // field has value 0x7e
SADD1_7_127 = 127, // field has value 0x7f

};

enum class ADD10_t : uint32_t {
    ADD10_0 = 0, // field has value 0x0
ADD10_1 = 1, // field has value 0x1

};
enum class START_t : uint32_t {
    START_0 = 0, // field has value 0x0
START_1 = 1, // field has value 0x1

};
enum class AUTOEND_t : uint32_t {
    AUTOEND_0 = 0, // field has value 0x0
AUTOEND_1 = 1, // field has value 0x1

};
enum class RELOAD_t : uint32_t {
    RELOAD_0 = 0, // field has value 0x0
RELOAD_1 = 1, // field has value 0x1

};
enum class SADD8_9_t : uint32_t {
    SADD8_9_0 = 0, // field has value 0x0
SADD8_9_1 = 1, // field has value 0x1
SADD8_9_2 = 2, // field has value 0x2
SADD8_9_3 = 3, // field has value 0x3

};
enum class RD_WRN_t : uint32_t {
    RD_WRN_0 = 0, // field has value 0x0
RD_WRN_1 = 1, // field has value 0x1

};
enum class PECBYTE_t : uint32_t {
    PECBYTE_0 = 0, // field has value 0x0
PECBYTE_1 = 1, // field has value 0x1

};
enum class STOP_t : uint32_t {
    STOP_0 = 0, // field has value 0x0
STOP_1 = 1, // field has value 0x1

};
enum class SADD0_t : uint32_t {
    SADD0_0 = 0, // field has value 0x0
SADD0_1 = 1, // field has value 0x1

};
enum class NACK_t : uint32_t {
    NACK_0 = 0, // field has value 0x0
NACK_1 = 1, // field has value 0x1

};
enum class HEAD10R_t : uint32_t {
    HEAD10R_0 = 0, // field has value 0x0
HEAD10R_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CR2 : public ReadableWritable<address> {
   public:
    CR2() : ReadableWritable<address>() {}
    SADD0_t SADD0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<SADD0_t>(tmp);
}
void SADD0(SADD0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
SADD1_7_t SADD1_7(){
    uint32_t tmp = this->bits_masked(0xfe) >> 1;
    return reinterpret_cast<SADD1_7_t>(tmp);
}
void SADD1_7(SADD1_7_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0xfe);
}
SADD8_9_t SADD8_9(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<SADD8_9_t>(tmp);
}
void SADD8_9(SADD8_9_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
RD_WRN_t RD_WRN(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<RD_WRN_t>(tmp);
}
void RD_WRN(RD_WRN_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
ADD10_t ADD10(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<ADD10_t>(tmp);
}
void ADD10(ADD10_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
HEAD10R_t HEAD10R(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<HEAD10R_t>(tmp);
}
void HEAD10R(HEAD10R_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
START_t START(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<START_t>(tmp);
}
void START(START_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
STOP_t STOP(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<STOP_t>(tmp);
}
void STOP(STOP_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
NACK_t NACK(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<NACK_t>(tmp);
}
void NACK(NACK_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint8_t NBYTES(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void NBYTES(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
RELOAD_t RELOAD(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<RELOAD_t>(tmp);
}
void RELOAD(RELOAD_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
AUTOEND_t AUTOEND(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<AUTOEND_t>(tmp);
}
void AUTOEND(AUTOEND_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
PECBYTE_t PECBYTE(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<PECBYTE_t>(tmp);
}
void PECBYTE(PECBYTE_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
};
}
namespace OAR1{
enum class OA1MODE_t : uint32_t {
    OA1MODE_0 = 0, // field has value 0x0
OA1MODE_1 = 1, // field has value 0x1

};
enum class OA18_9_t : uint32_t {
    OA18_9_0 = 0, // field has value 0x0
OA18_9_1 = 1, // field has value 0x1
OA18_9_2 = 2, // field has value 0x2
OA18_9_3 = 3, // field has value 0x3

};
enum class OA11_7_t : uint32_t {
    OA11_7_0 = 0, // field has value 0x0
OA11_7_1 = 1, // field has value 0x1
OA11_7_2 = 2, // field has value 0x2
OA11_7_3 = 3, // field has value 0x3
OA11_7_4 = 4, // field has value 0x4
OA11_7_5 = 5, // field has value 0x5
OA11_7_6 = 6, // field has value 0x6
OA11_7_7 = 7, // field has value 0x7
OA11_7_8 = 8, // field has value 0x8
OA11_7_9 = 9, // field has value 0x9
OA11_7_10 = 10, // field has value 0xa
OA11_7_11 = 11, // field has value 0xb
OA11_7_12 = 12, // field has value 0xc
OA11_7_13 = 13, // field has value 0xd
OA11_7_14 = 14, // field has value 0xe
OA11_7_15 = 15, // field has value 0xf
OA11_7_16 = 16, // field has value 0x10
OA11_7_17 = 17, // field has value 0x11
OA11_7_18 = 18, // field has value 0x12
OA11_7_19 = 19, // field has value 0x13
OA11_7_20 = 20, // field has value 0x14
OA11_7_21 = 21, // field has value 0x15
OA11_7_22 = 22, // field has value 0x16
OA11_7_23 = 23, // field has value 0x17
OA11_7_24 = 24, // field has value 0x18
OA11_7_25 = 25, // field has value 0x19
OA11_7_26 = 26, // field has value 0x1a
OA11_7_27 = 27, // field has value 0x1b
OA11_7_28 = 28, // field has value 0x1c
OA11_7_29 = 29, // field has value 0x1d
OA11_7_30 = 30, // field has value 0x1e
OA11_7_31 = 31, // field has value 0x1f
OA11_7_32 = 32, // field has value 0x20
OA11_7_33 = 33, // field has value 0x21
OA11_7_34 = 34, // field has value 0x22
OA11_7_35 = 35, // field has value 0x23
OA11_7_36 = 36, // field has value 0x24
OA11_7_37 = 37, // field has value 0x25
OA11_7_38 = 38, // field has value 0x26
OA11_7_39 = 39, // field has value 0x27
OA11_7_40 = 40, // field has value 0x28
OA11_7_41 = 41, // field has value 0x29
OA11_7_42 = 42, // field has value 0x2a
OA11_7_43 = 43, // field has value 0x2b
OA11_7_44 = 44, // field has value 0x2c
OA11_7_45 = 45, // field has value 0x2d
OA11_7_46 = 46, // field has value 0x2e
OA11_7_47 = 47, // field has value 0x2f
OA11_7_48 = 48, // field has value 0x30
OA11_7_49 = 49, // field has value 0x31
OA11_7_50 = 50, // field has value 0x32
OA11_7_51 = 51, // field has value 0x33
OA11_7_52 = 52, // field has value 0x34
OA11_7_53 = 53, // field has value 0x35
OA11_7_54 = 54, // field has value 0x36
OA11_7_55 = 55, // field has value 0x37
OA11_7_56 = 56, // field has value 0x38
OA11_7_57 = 57, // field has value 0x39
OA11_7_58 = 58, // field has value 0x3a
OA11_7_59 = 59, // field has value 0x3b
OA11_7_60 = 60, // field has value 0x3c
OA11_7_61 = 61, // field has value 0x3d
OA11_7_62 = 62, // field has value 0x3e
OA11_7_63 = 63, // field has value 0x3f
OA11_7_64 = 64, // field has value 0x40
OA11_7_65 = 65, // field has value 0x41
OA11_7_66 = 66, // field has value 0x42
OA11_7_67 = 67, // field has value 0x43
OA11_7_68 = 68, // field has value 0x44
OA11_7_69 = 69, // field has value 0x45
OA11_7_70 = 70, // field has value 0x46
OA11_7_71 = 71, // field has value 0x47
OA11_7_72 = 72, // field has value 0x48
OA11_7_73 = 73, // field has value 0x49
OA11_7_74 = 74, // field has value 0x4a
OA11_7_75 = 75, // field has value 0x4b
OA11_7_76 = 76, // field has value 0x4c
OA11_7_77 = 77, // field has value 0x4d
OA11_7_78 = 78, // field has value 0x4e
OA11_7_79 = 79, // field has value 0x4f
OA11_7_80 = 80, // field has value 0x50
OA11_7_81 = 81, // field has value 0x51
OA11_7_82 = 82, // field has value 0x52
OA11_7_83 = 83, // field has value 0x53
OA11_7_84 = 84, // field has value 0x54
OA11_7_85 = 85, // field has value 0x55
OA11_7_86 = 86, // field has value 0x56
OA11_7_87 = 87, // field has value 0x57
OA11_7_88 = 88, // field has value 0x58
OA11_7_89 = 89, // field has value 0x59
OA11_7_90 = 90, // field has value 0x5a
OA11_7_91 = 91, // field has value 0x5b
OA11_7_92 = 92, // field has value 0x5c
OA11_7_93 = 93, // field has value 0x5d
OA11_7_94 = 94, // field has value 0x5e
OA11_7_95 = 95, // field has value 0x5f
OA11_7_96 = 96, // field has value 0x60
OA11_7_97 = 97, // field has value 0x61
OA11_7_98 = 98, // field has value 0x62
OA11_7_99 = 99, // field has value 0x63
OA11_7_100 = 100, // field has value 0x64
OA11_7_101 = 101, // field has value 0x65
OA11_7_102 = 102, // field has value 0x66
OA11_7_103 = 103, // field has value 0x67
OA11_7_104 = 104, // field has value 0x68
OA11_7_105 = 105, // field has value 0x69
OA11_7_106 = 106, // field has value 0x6a
OA11_7_107 = 107, // field has value 0x6b
OA11_7_108 = 108, // field has value 0x6c
OA11_7_109 = 109, // field has value 0x6d
OA11_7_110 = 110, // field has value 0x6e
OA11_7_111 = 111, // field has value 0x6f
OA11_7_112 = 112, // field has value 0x70
OA11_7_113 = 113, // field has value 0x71
OA11_7_114 = 114, // field has value 0x72
OA11_7_115 = 115, // field has value 0x73
OA11_7_116 = 116, // field has value 0x74
OA11_7_117 = 117, // field has value 0x75
OA11_7_118 = 118, // field has value 0x76
OA11_7_119 = 119, // field has value 0x77
OA11_7_120 = 120, // field has value 0x78
OA11_7_121 = 121, // field has value 0x79
OA11_7_122 = 122, // field has value 0x7a
OA11_7_123 = 123, // field has value 0x7b
OA11_7_124 = 124, // field has value 0x7c
OA11_7_125 = 125, // field has value 0x7d
OA11_7_126 = 126, // field has value 0x7e
OA11_7_127 = 127, // field has value 0x7f

};
enum class OA1_t : uint32_t {
    OA1_0 = 0, // field has value 0x0
OA1_1 = 1, // field has value 0x1

};
enum class OA1EN_t : uint32_t {
    OA1EN_0 = 0, // field has value 0x0
OA1EN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class OAR1 : public ReadableWritable<address> {
   public:
    OAR1() : ReadableWritable<address>() {}
    OA1_t OA1(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<OA1_t>(tmp);
}
void OA1(OA1_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
OA11_7_t OA11_7(){
    uint32_t tmp = this->bits_masked(0xfe) >> 1;
    return reinterpret_cast<OA11_7_t>(tmp);
}
void OA11_7(OA11_7_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0xfe);
}
OA18_9_t OA18_9(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<OA18_9_t>(tmp);
}
void OA18_9(OA18_9_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
OA1MODE_t OA1MODE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<OA1MODE_t>(tmp);
}
void OA1MODE(OA1MODE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
OA1EN_t OA1EN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<OA1EN_t>(tmp);
}
void OA1EN(OA1EN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
};
}
namespace OAR2{
enum class OA2MSK_t : uint32_t {
    OA2MSK_0 = 0, // field has value 0x0
OA2MSK_1 = 1, // field has value 0x1
OA2MSK_2 = 2, // field has value 0x2
OA2MSK_3 = 3, // field has value 0x3
OA2MSK_4 = 4, // field has value 0x4
OA2MSK_5 = 5, // field has value 0x5
OA2MSK_6 = 6, // field has value 0x6
OA2MSK_7 = 7, // field has value 0x7

};
enum class OA2EN_t : uint32_t {
    OA2EN_0 = 0, // field has value 0x0
OA2EN_1 = 1, // field has value 0x1

};
enum class OA21_7_t : uint32_t {
    OA21_7_0 = 0, // field has value 0x0
OA21_7_1 = 1, // field has value 0x1
OA21_7_2 = 2, // field has value 0x2
OA21_7_3 = 3, // field has value 0x3
OA21_7_4 = 4, // field has value 0x4
OA21_7_5 = 5, // field has value 0x5
OA21_7_6 = 6, // field has value 0x6
OA21_7_7 = 7, // field has value 0x7
OA21_7_8 = 8, // field has value 0x8
OA21_7_9 = 9, // field has value 0x9
OA21_7_10 = 10, // field has value 0xa
OA21_7_11 = 11, // field has value 0xb
OA21_7_12 = 12, // field has value 0xc
OA21_7_13 = 13, // field has value 0xd
OA21_7_14 = 14, // field has value 0xe
OA21_7_15 = 15, // field has value 0xf
OA21_7_16 = 16, // field has value 0x10
OA21_7_17 = 17, // field has value 0x11
OA21_7_18 = 18, // field has value 0x12
OA21_7_19 = 19, // field has value 0x13
OA21_7_20 = 20, // field has value 0x14
OA21_7_21 = 21, // field has value 0x15
OA21_7_22 = 22, // field has value 0x16
OA21_7_23 = 23, // field has value 0x17
OA21_7_24 = 24, // field has value 0x18
OA21_7_25 = 25, // field has value 0x19
OA21_7_26 = 26, // field has value 0x1a
OA21_7_27 = 27, // field has value 0x1b
OA21_7_28 = 28, // field has value 0x1c
OA21_7_29 = 29, // field has value 0x1d
OA21_7_30 = 30, // field has value 0x1e
OA21_7_31 = 31, // field has value 0x1f
OA21_7_32 = 32, // field has value 0x20
OA21_7_33 = 33, // field has value 0x21
OA21_7_34 = 34, // field has value 0x22
OA21_7_35 = 35, // field has value 0x23
OA21_7_36 = 36, // field has value 0x24
OA21_7_37 = 37, // field has value 0x25
OA21_7_38 = 38, // field has value 0x26
OA21_7_39 = 39, // field has value 0x27
OA21_7_40 = 40, // field has value 0x28
OA21_7_41 = 41, // field has value 0x29
OA21_7_42 = 42, // field has value 0x2a
OA21_7_43 = 43, // field has value 0x2b
OA21_7_44 = 44, // field has value 0x2c
OA21_7_45 = 45, // field has value 0x2d
OA21_7_46 = 46, // field has value 0x2e
OA21_7_47 = 47, // field has value 0x2f
OA21_7_48 = 48, // field has value 0x30
OA21_7_49 = 49, // field has value 0x31
OA21_7_50 = 50, // field has value 0x32
OA21_7_51 = 51, // field has value 0x33
OA21_7_52 = 52, // field has value 0x34
OA21_7_53 = 53, // field has value 0x35
OA21_7_54 = 54, // field has value 0x36
OA21_7_55 = 55, // field has value 0x37
OA21_7_56 = 56, // field has value 0x38
OA21_7_57 = 57, // field has value 0x39
OA21_7_58 = 58, // field has value 0x3a
OA21_7_59 = 59, // field has value 0x3b
OA21_7_60 = 60, // field has value 0x3c
OA21_7_61 = 61, // field has value 0x3d
OA21_7_62 = 62, // field has value 0x3e
OA21_7_63 = 63, // field has value 0x3f
OA21_7_64 = 64, // field has value 0x40
OA21_7_65 = 65, // field has value 0x41
OA21_7_66 = 66, // field has value 0x42
OA21_7_67 = 67, // field has value 0x43
OA21_7_68 = 68, // field has value 0x44
OA21_7_69 = 69, // field has value 0x45
OA21_7_70 = 70, // field has value 0x46
OA21_7_71 = 71, // field has value 0x47
OA21_7_72 = 72, // field has value 0x48
OA21_7_73 = 73, // field has value 0x49
OA21_7_74 = 74, // field has value 0x4a
OA21_7_75 = 75, // field has value 0x4b
OA21_7_76 = 76, // field has value 0x4c
OA21_7_77 = 77, // field has value 0x4d
OA21_7_78 = 78, // field has value 0x4e
OA21_7_79 = 79, // field has value 0x4f
OA21_7_80 = 80, // field has value 0x50
OA21_7_81 = 81, // field has value 0x51
OA21_7_82 = 82, // field has value 0x52
OA21_7_83 = 83, // field has value 0x53
OA21_7_84 = 84, // field has value 0x54
OA21_7_85 = 85, // field has value 0x55
OA21_7_86 = 86, // field has value 0x56
OA21_7_87 = 87, // field has value 0x57
OA21_7_88 = 88, // field has value 0x58
OA21_7_89 = 89, // field has value 0x59
OA21_7_90 = 90, // field has value 0x5a
OA21_7_91 = 91, // field has value 0x5b
OA21_7_92 = 92, // field has value 0x5c
OA21_7_93 = 93, // field has value 0x5d
OA21_7_94 = 94, // field has value 0x5e
OA21_7_95 = 95, // field has value 0x5f
OA21_7_96 = 96, // field has value 0x60
OA21_7_97 = 97, // field has value 0x61
OA21_7_98 = 98, // field has value 0x62
OA21_7_99 = 99, // field has value 0x63
OA21_7_100 = 100, // field has value 0x64
OA21_7_101 = 101, // field has value 0x65
OA21_7_102 = 102, // field has value 0x66
OA21_7_103 = 103, // field has value 0x67
OA21_7_104 = 104, // field has value 0x68
OA21_7_105 = 105, // field has value 0x69
OA21_7_106 = 106, // field has value 0x6a
OA21_7_107 = 107, // field has value 0x6b
OA21_7_108 = 108, // field has value 0x6c
OA21_7_109 = 109, // field has value 0x6d
OA21_7_110 = 110, // field has value 0x6e
OA21_7_111 = 111, // field has value 0x6f
OA21_7_112 = 112, // field has value 0x70
OA21_7_113 = 113, // field has value 0x71
OA21_7_114 = 114, // field has value 0x72
OA21_7_115 = 115, // field has value 0x73
OA21_7_116 = 116, // field has value 0x74
OA21_7_117 = 117, // field has value 0x75
OA21_7_118 = 118, // field has value 0x76
OA21_7_119 = 119, // field has value 0x77
OA21_7_120 = 120, // field has value 0x78
OA21_7_121 = 121, // field has value 0x79
OA21_7_122 = 122, // field has value 0x7a
OA21_7_123 = 123, // field has value 0x7b
OA21_7_124 = 124, // field has value 0x7c
OA21_7_125 = 125, // field has value 0x7d
OA21_7_126 = 126, // field has value 0x7e
OA21_7_127 = 127, // field has value 0x7f

};
template <uint32_t address>
class OAR2 : public ReadableWritable<address> {
   public:
    OAR2() : ReadableWritable<address>() {}
    OA21_7_t OA21_7(){
    uint32_t tmp = this->bits_masked(0xfe) >> 1;
    return reinterpret_cast<OA21_7_t>(tmp);
}
void OA21_7(OA21_7_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0xfe);
}
OA2MSK_t OA2MSK(){
    uint32_t tmp = this->bits_masked(0x700) >> 8;
    return reinterpret_cast<OA2MSK_t>(tmp);
}
void OA2MSK(OA2MSK_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x700);
}
OA2EN_t OA2EN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<OA2EN_t>(tmp);
}
void OA2EN(OA2EN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
};
}
namespace TIMINGR{

enum class SDADEL_t : uint32_t {
    SDADEL_0 = 0, // field has value 0x0
SDADEL_1 = 1, // field has value 0x1
SDADEL_2 = 2, // field has value 0x2
SDADEL_3 = 3, // field has value 0x3
SDADEL_4 = 4, // field has value 0x4
SDADEL_5 = 5, // field has value 0x5
SDADEL_6 = 6, // field has value 0x6
SDADEL_7 = 7, // field has value 0x7
SDADEL_8 = 8, // field has value 0x8
SDADEL_9 = 9, // field has value 0x9
SDADEL_10 = 10, // field has value 0xa
SDADEL_11 = 11, // field has value 0xb
SDADEL_12 = 12, // field has value 0xc
SDADEL_13 = 13, // field has value 0xd
SDADEL_14 = 14, // field has value 0xe
SDADEL_15 = 15, // field has value 0xf

};
enum class SCLDEL_t : uint32_t {
    SCLDEL_0 = 0, // field has value 0x0
SCLDEL_1 = 1, // field has value 0x1
SCLDEL_2 = 2, // field has value 0x2
SCLDEL_3 = 3, // field has value 0x3
SCLDEL_4 = 4, // field has value 0x4
SCLDEL_5 = 5, // field has value 0x5
SCLDEL_6 = 6, // field has value 0x6
SCLDEL_7 = 7, // field has value 0x7
SCLDEL_8 = 8, // field has value 0x8
SCLDEL_9 = 9, // field has value 0x9
SCLDEL_10 = 10, // field has value 0xa
SCLDEL_11 = 11, // field has value 0xb
SCLDEL_12 = 12, // field has value 0xc
SCLDEL_13 = 13, // field has value 0xd
SCLDEL_14 = 14, // field has value 0xe
SCLDEL_15 = 15, // field has value 0xf

};
enum class PRESC_t : uint32_t {
    PRESC_0 = 0, // field has value 0x0
PRESC_1 = 1, // field has value 0x1
PRESC_2 = 2, // field has value 0x2
PRESC_3 = 3, // field has value 0x3
PRESC_4 = 4, // field has value 0x4
PRESC_5 = 5, // field has value 0x5
PRESC_6 = 6, // field has value 0x6
PRESC_7 = 7, // field has value 0x7
PRESC_8 = 8, // field has value 0x8
PRESC_9 = 9, // field has value 0x9
PRESC_10 = 10, // field has value 0xa
PRESC_11 = 11, // field has value 0xb
PRESC_12 = 12, // field has value 0xc
PRESC_13 = 13, // field has value 0xd
PRESC_14 = 14, // field has value 0xe
PRESC_15 = 15, // field has value 0xf

};
template <uint32_t address>
class TIMINGR : public ReadableWritable<address> {
   public:
    TIMINGR() : ReadableWritable<address>() {}
    uint8_t SCLL(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void SCLL(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t SCLH(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void SCLH(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
SDADEL_t SDADEL(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<SDADEL_t>(tmp);
}
void SDADEL(SDADEL_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
SCLDEL_t SCLDEL(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<SCLDEL_t>(tmp);
}
void SCLDEL(SCLDEL_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
PRESC_t PRESC(){
    uint32_t tmp = this->bits_masked(0xf0000000) >> 28;
    return reinterpret_cast<PRESC_t>(tmp);
}
void PRESC(PRESC_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0xf0000000);
}
};
}
namespace TIMEOUTR{

enum class TIDLE_t : uint32_t {
    TIDLE_0 = 0, // field has value 0x0
TIDLE_1 = 1, // field has value 0x1

};
enum class TIMOUTEN_t : uint32_t {
    TIMOUTEN_0 = 0, // field has value 0x0
TIMOUTEN_1 = 1, // field has value 0x1

};
enum class TEXTEN_t : uint32_t {
    TEXTEN_0 = 0, // field has value 0x0
TEXTEN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class TIMEOUTR : public ReadableWritable<address> {
   public:
    TIMEOUTR() : ReadableWritable<address>() {}
    uint16_t TIMEOUTA(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void TIMEOUTA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
TIDLE_t TIDLE(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TIDLE_t>(tmp);
}
void TIDLE(TIDLE_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TIMOUTEN_t TIMOUTEN(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TIMOUTEN_t>(tmp);
}
void TIMOUTEN(TIMOUTEN_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t TIMEOUTB(){
    uint32_t tmp = this->bits_masked(0xfff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void TIMEOUTB(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xfff0000);
}
TEXTEN_t TEXTEN(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<TEXTEN_t>(tmp);
}
void TEXTEN(TEXTEN_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace ISR{
enum class NACKF_t : uint32_t {
    NACKF_0 = 0, // field has value 0x0
NACKF_1 = 1, // field has value 0x1

};
enum class TCR_t : uint32_t {
    TCR_0 = 0, // field has value 0x0
TCR_1 = 1, // field has value 0x1

};
enum class RXNE_t : uint32_t {
    RXNE_0 = 0, // field has value 0x0
RXNE_1 = 1, // field has value 0x1

};
enum class ADDCODE_t : uint32_t {
    ADDCODE_0 = 0, // field has value 0x0
ADDCODE_1 = 1, // field has value 0x1
ADDCODE_2 = 2, // field has value 0x2
ADDCODE_3 = 3, // field has value 0x3
ADDCODE_4 = 4, // field has value 0x4
ADDCODE_5 = 5, // field has value 0x5
ADDCODE_6 = 6, // field has value 0x6
ADDCODE_7 = 7, // field has value 0x7
ADDCODE_8 = 8, // field has value 0x8
ADDCODE_9 = 9, // field has value 0x9
ADDCODE_10 = 10, // field has value 0xa
ADDCODE_11 = 11, // field has value 0xb
ADDCODE_12 = 12, // field has value 0xc
ADDCODE_13 = 13, // field has value 0xd
ADDCODE_14 = 14, // field has value 0xe
ADDCODE_15 = 15, // field has value 0xf
ADDCODE_16 = 16, // field has value 0x10
ADDCODE_17 = 17, // field has value 0x11
ADDCODE_18 = 18, // field has value 0x12
ADDCODE_19 = 19, // field has value 0x13
ADDCODE_20 = 20, // field has value 0x14
ADDCODE_21 = 21, // field has value 0x15
ADDCODE_22 = 22, // field has value 0x16
ADDCODE_23 = 23, // field has value 0x17
ADDCODE_24 = 24, // field has value 0x18
ADDCODE_25 = 25, // field has value 0x19
ADDCODE_26 = 26, // field has value 0x1a
ADDCODE_27 = 27, // field has value 0x1b
ADDCODE_28 = 28, // field has value 0x1c
ADDCODE_29 = 29, // field has value 0x1d
ADDCODE_30 = 30, // field has value 0x1e
ADDCODE_31 = 31, // field has value 0x1f
ADDCODE_32 = 32, // field has value 0x20
ADDCODE_33 = 33, // field has value 0x21
ADDCODE_34 = 34, // field has value 0x22
ADDCODE_35 = 35, // field has value 0x23
ADDCODE_36 = 36, // field has value 0x24
ADDCODE_37 = 37, // field has value 0x25
ADDCODE_38 = 38, // field has value 0x26
ADDCODE_39 = 39, // field has value 0x27
ADDCODE_40 = 40, // field has value 0x28
ADDCODE_41 = 41, // field has value 0x29
ADDCODE_42 = 42, // field has value 0x2a
ADDCODE_43 = 43, // field has value 0x2b
ADDCODE_44 = 44, // field has value 0x2c
ADDCODE_45 = 45, // field has value 0x2d
ADDCODE_46 = 46, // field has value 0x2e
ADDCODE_47 = 47, // field has value 0x2f
ADDCODE_48 = 48, // field has value 0x30
ADDCODE_49 = 49, // field has value 0x31
ADDCODE_50 = 50, // field has value 0x32
ADDCODE_51 = 51, // field has value 0x33
ADDCODE_52 = 52, // field has value 0x34
ADDCODE_53 = 53, // field has value 0x35
ADDCODE_54 = 54, // field has value 0x36
ADDCODE_55 = 55, // field has value 0x37
ADDCODE_56 = 56, // field has value 0x38
ADDCODE_57 = 57, // field has value 0x39
ADDCODE_58 = 58, // field has value 0x3a
ADDCODE_59 = 59, // field has value 0x3b
ADDCODE_60 = 60, // field has value 0x3c
ADDCODE_61 = 61, // field has value 0x3d
ADDCODE_62 = 62, // field has value 0x3e
ADDCODE_63 = 63, // field has value 0x3f
ADDCODE_64 = 64, // field has value 0x40
ADDCODE_65 = 65, // field has value 0x41
ADDCODE_66 = 66, // field has value 0x42
ADDCODE_67 = 67, // field has value 0x43
ADDCODE_68 = 68, // field has value 0x44
ADDCODE_69 = 69, // field has value 0x45
ADDCODE_70 = 70, // field has value 0x46
ADDCODE_71 = 71, // field has value 0x47
ADDCODE_72 = 72, // field has value 0x48
ADDCODE_73 = 73, // field has value 0x49
ADDCODE_74 = 74, // field has value 0x4a
ADDCODE_75 = 75, // field has value 0x4b
ADDCODE_76 = 76, // field has value 0x4c
ADDCODE_77 = 77, // field has value 0x4d
ADDCODE_78 = 78, // field has value 0x4e
ADDCODE_79 = 79, // field has value 0x4f
ADDCODE_80 = 80, // field has value 0x50
ADDCODE_81 = 81, // field has value 0x51
ADDCODE_82 = 82, // field has value 0x52
ADDCODE_83 = 83, // field has value 0x53
ADDCODE_84 = 84, // field has value 0x54
ADDCODE_85 = 85, // field has value 0x55
ADDCODE_86 = 86, // field has value 0x56
ADDCODE_87 = 87, // field has value 0x57
ADDCODE_88 = 88, // field has value 0x58
ADDCODE_89 = 89, // field has value 0x59
ADDCODE_90 = 90, // field has value 0x5a
ADDCODE_91 = 91, // field has value 0x5b
ADDCODE_92 = 92, // field has value 0x5c
ADDCODE_93 = 93, // field has value 0x5d
ADDCODE_94 = 94, // field has value 0x5e
ADDCODE_95 = 95, // field has value 0x5f
ADDCODE_96 = 96, // field has value 0x60
ADDCODE_97 = 97, // field has value 0x61
ADDCODE_98 = 98, // field has value 0x62
ADDCODE_99 = 99, // field has value 0x63
ADDCODE_100 = 100, // field has value 0x64
ADDCODE_101 = 101, // field has value 0x65
ADDCODE_102 = 102, // field has value 0x66
ADDCODE_103 = 103, // field has value 0x67
ADDCODE_104 = 104, // field has value 0x68
ADDCODE_105 = 105, // field has value 0x69
ADDCODE_106 = 106, // field has value 0x6a
ADDCODE_107 = 107, // field has value 0x6b
ADDCODE_108 = 108, // field has value 0x6c
ADDCODE_109 = 109, // field has value 0x6d
ADDCODE_110 = 110, // field has value 0x6e
ADDCODE_111 = 111, // field has value 0x6f
ADDCODE_112 = 112, // field has value 0x70
ADDCODE_113 = 113, // field has value 0x71
ADDCODE_114 = 114, // field has value 0x72
ADDCODE_115 = 115, // field has value 0x73
ADDCODE_116 = 116, // field has value 0x74
ADDCODE_117 = 117, // field has value 0x75
ADDCODE_118 = 118, // field has value 0x76
ADDCODE_119 = 119, // field has value 0x77
ADDCODE_120 = 120, // field has value 0x78
ADDCODE_121 = 121, // field has value 0x79
ADDCODE_122 = 122, // field has value 0x7a
ADDCODE_123 = 123, // field has value 0x7b
ADDCODE_124 = 124, // field has value 0x7c
ADDCODE_125 = 125, // field has value 0x7d
ADDCODE_126 = 126, // field has value 0x7e
ADDCODE_127 = 127, // field has value 0x7f

};
enum class ALERT_t : uint32_t {
    ALERT_0 = 0, // field has value 0x0
ALERT_1 = 1, // field has value 0x1

};
enum class TIMEOUT_t : uint32_t {
    TIMEOUT_0 = 0, // field has value 0x0
TIMEOUT_1 = 1, // field has value 0x1

};
enum class DIR_t : uint32_t {
    DIR_0 = 0, // field has value 0x0
DIR_1 = 1, // field has value 0x1

};
enum class BERR_t : uint32_t {
    BERR_0 = 0, // field has value 0x0
BERR_1 = 1, // field has value 0x1

};
enum class ADDR_t : uint32_t {
    ADDR_0 = 0, // field has value 0x0
ADDR_1 = 1, // field has value 0x1

};
enum class STOPF_t : uint32_t {
    STOPF_0 = 0, // field has value 0x0
STOPF_1 = 1, // field has value 0x1

};
enum class TXIS_t : uint32_t {
    TXIS_0 = 0, // field has value 0x0
TXIS_1 = 1, // field has value 0x1

};
enum class ARLO_t : uint32_t {
    ARLO_0 = 0, // field has value 0x0
ARLO_1 = 1, // field has value 0x1

};
enum class OVR_t : uint32_t {
    OVR_0 = 0, // field has value 0x0
OVR_1 = 1, // field has value 0x1

};
enum class BUSY_t : uint32_t {
    BUSY_0 = 0, // field has value 0x0
BUSY_1 = 1, // field has value 0x1

};
enum class PECERR_t : uint32_t {
    PECERR_0 = 0, // field has value 0x0
PECERR_1 = 1, // field has value 0x1

};
enum class TXE_t : uint32_t {
    TXE_0 = 0, // field has value 0x0
TXE_1 = 1, // field has value 0x1

};
enum class TC_t : uint32_t {
    TC_0 = 0, // field has value 0x0
TC_1 = 1, // field has value 0x1

};
template <uint32_t address>
class ISR : public ReadableWritable<address> {
   public:
    ISR() : ReadableWritable<address>() {}
    TXE_t TXE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TXE_t>(tmp);
}
void TXE(TXE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TXIS_t TXIS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TXIS_t>(tmp);
}
void TXIS(TXIS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
RXNE_t RXNE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<RXNE_t>(tmp);
}
ADDR_t ADDR(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ADDR_t>(tmp);
}
NACKF_t NACKF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NACKF_t>(tmp);
}
STOPF_t STOPF(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<STOPF_t>(tmp);
}
TC_t TC(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TC_t>(tmp);
}
TCR_t TCR(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TCR_t>(tmp);
}
BERR_t BERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BERR_t>(tmp);
}
ARLO_t ARLO(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ARLO_t>(tmp);
}
OVR_t OVR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<OVR_t>(tmp);
}
PECERR_t PECERR(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<PECERR_t>(tmp);
}
TIMEOUT_t TIMEOUT(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TIMEOUT_t>(tmp);
}
ALERT_t ALERT(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ALERT_t>(tmp);
}
BUSY_t BUSY(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<BUSY_t>(tmp);
}
DIR_t DIR(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<DIR_t>(tmp);
}
ADDCODE_t ADDCODE(){
    uint32_t tmp = this->bits_masked(0xfe0000) >> 17;
    return reinterpret_cast<ADDCODE_t>(tmp);
}
};
}
namespace ICR{
enum class TIMOUTCF_t : uint32_t {
    TIMOUTCF_0 = 0, // field has value 0x0
TIMOUTCF_1 = 1, // field has value 0x1

};
enum class ADDRCF_t : uint32_t {
    ADDRCF_0 = 0, // field has value 0x0
ADDRCF_1 = 1, // field has value 0x1

};
enum class BERRCF_t : uint32_t {
    BERRCF_0 = 0, // field has value 0x0
BERRCF_1 = 1, // field has value 0x1

};
enum class PECCF_t : uint32_t {
    PECCF_0 = 0, // field has value 0x0
PECCF_1 = 1, // field has value 0x1

};
enum class OVRCF_t : uint32_t {
    OVRCF_0 = 0, // field has value 0x0
OVRCF_1 = 1, // field has value 0x1

};
enum class ALERTC_t : uint32_t {
    ALERTC_0 = 0, // field has value 0x0
ALERTC_1 = 1, // field has value 0x1

};
enum class NACKCF_t : uint32_t {
    NACKCF_0 = 0, // field has value 0x0
NACKCF_1 = 1, // field has value 0x1

};
enum class STOPCF_t : uint32_t {
    STOPCF_0 = 0, // field has value 0x0
STOPCF_1 = 1, // field has value 0x1

};
enum class ARLOCF_t : uint32_t {
    ARLOCF_0 = 0, // field has value 0x0
ARLOCF_1 = 1, // field has value 0x1

};
template <uint32_t address>
class ICR : public Writable<address> {
   public:
    ICR() : Writable<address>() {}
    ADDRCF_t ADDRCF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ADDRCF_t>(tmp);
}
void ADDRCF(ADDRCF_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
NACKCF_t NACKCF(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NACKCF_t>(tmp);
}
void NACKCF(NACKCF_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
STOPCF_t STOPCF(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<STOPCF_t>(tmp);
}
void STOPCF(STOPCF_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
BERRCF_t BERRCF(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BERRCF_t>(tmp);
}
void BERRCF(BERRCF_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
ARLOCF_t ARLOCF(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ARLOCF_t>(tmp);
}
void ARLOCF(ARLOCF_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
OVRCF_t OVRCF(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<OVRCF_t>(tmp);
}
void OVRCF(OVRCF_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
PECCF_t PECCF(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<PECCF_t>(tmp);
}
void PECCF(PECCF_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TIMOUTCF_t TIMOUTCF(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TIMOUTCF_t>(tmp);
}
void TIMOUTCF(TIMOUTCF_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
ALERTC_t ALERTC(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ALERTC_t>(tmp);
}
void ALERTC(ALERTC_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
};
}
namespace PECR{

template <uint32_t address>
class PECR : public Readable<address> {
   public:
    PECR() : Readable<address>() {}
    uint8_t PEC(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void PEC(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace RXDR{

template <uint32_t address>
class RXDR : public Readable<address> {
   public:
    RXDR() : Readable<address>() {}
    uint8_t RXDATA(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void RXDATA(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace TXDR{

template <uint32_t address>
class TXDR : public ReadableWritable<address> {
   public:
    TXDR() : ReadableWritable<address>() {}
    uint8_t TXDATA(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void TXDATA(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
template<uint32_t base_address>
class I2C{
    public:
    // Control register 1
CR1<base_address + 0> CR1; 
// Control register 2
CR2<base_address + 4> CR2; 
// Own address register 1
OAR1<base_address + 8> OAR1; 
// Own address register 2
OAR2<base_address + 12> OAR2; 
// Timing register
TIMINGR<base_address + 16> TIMINGR; 
// Timeout register
TIMEOUTR<base_address + 20> TIMEOUTR; 
// Interrupt and Status register
ISR<base_address + 24> ISR; 
// Interrupt clear register
ICR<base_address + 28> ICR; 
// PEC register
PECR<base_address + 32> PECR; 
// Receive data register
RXDR<base_address + 36> RXDR; 
// Transmit data register
TXDR<base_address + 40> TXDR; 
};
}

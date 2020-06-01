#pragma once

#include <cstdint>
#include <reg.h>

namespace SCB{
namespace CPUID{

enum class Constant_t : uint32_t {
    Constant_0 = 0, // field has value 0x0
Constant_1 = 1, // field has value 0x1
Constant_2 = 2, // field has value 0x2
Constant_3 = 3, // field has value 0x3
Constant_4 = 4, // field has value 0x4
Constant_5 = 5, // field has value 0x5
Constant_6 = 6, // field has value 0x6
Constant_7 = 7, // field has value 0x7
Constant_8 = 8, // field has value 0x8
Constant_9 = 9, // field has value 0x9
Constant_10 = 10, // field has value 0xa
Constant_11 = 11, // field has value 0xb
Constant_12 = 12, // field has value 0xc
Constant_13 = 13, // field has value 0xd
Constant_14 = 14, // field has value 0xe
Constant_15 = 15, // field has value 0xf

};
enum class Variant_t : uint32_t {
    Variant_0 = 0, // field has value 0x0
Variant_1 = 1, // field has value 0x1
Variant_2 = 2, // field has value 0x2
Variant_3 = 3, // field has value 0x3
Variant_4 = 4, // field has value 0x4
Variant_5 = 5, // field has value 0x5
Variant_6 = 6, // field has value 0x6
Variant_7 = 7, // field has value 0x7
Variant_8 = 8, // field has value 0x8
Variant_9 = 9, // field has value 0x9
Variant_10 = 10, // field has value 0xa
Variant_11 = 11, // field has value 0xb
Variant_12 = 12, // field has value 0xc
Variant_13 = 13, // field has value 0xd
Variant_14 = 14, // field has value 0xe
Variant_15 = 15, // field has value 0xf

};
enum class Revision_t : uint32_t {
    Revision_0 = 0, // field has value 0x0
Revision_1 = 1, // field has value 0x1
Revision_2 = 2, // field has value 0x2
Revision_3 = 3, // field has value 0x3
Revision_4 = 4, // field has value 0x4
Revision_5 = 5, // field has value 0x5
Revision_6 = 6, // field has value 0x6
Revision_7 = 7, // field has value 0x7
Revision_8 = 8, // field has value 0x8
Revision_9 = 9, // field has value 0x9
Revision_10 = 10, // field has value 0xa
Revision_11 = 11, // field has value 0xb
Revision_12 = 12, // field has value 0xc
Revision_13 = 13, // field has value 0xd
Revision_14 = 14, // field has value 0xe
Revision_15 = 15, // field has value 0xf

};
template <uint32_t address>
class CPUID : public Readable<address> {
   public:
    CPUID() : Readable<address>() {}
    Revision_t Revision(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<Revision_t>(tmp);
}
void Revision(Revision_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
uint16_t PartNo(){
    uint32_t tmp = this->bits_masked(0xfff0) >> 4;
    return reinterpret_cast<uint16_t>(tmp);
}
void PartNo(uint16_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xfff0);
}
Constant_t Constant(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<Constant_t>(tmp);
}
void Constant(Constant_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
Variant_t Variant(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<Variant_t>(tmp);
}
void Variant(Variant_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
uint8_t Implementer(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void Implementer(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace ICSR{

enum class VECTPENDING_t : uint32_t {
    VECTPENDING_0 = 0, // field has value 0x0
VECTPENDING_1 = 1, // field has value 0x1
VECTPENDING_2 = 2, // field has value 0x2
VECTPENDING_3 = 3, // field has value 0x3
VECTPENDING_4 = 4, // field has value 0x4
VECTPENDING_5 = 5, // field has value 0x5
VECTPENDING_6 = 6, // field has value 0x6
VECTPENDING_7 = 7, // field has value 0x7
VECTPENDING_8 = 8, // field has value 0x8
VECTPENDING_9 = 9, // field has value 0x9
VECTPENDING_10 = 10, // field has value 0xa
VECTPENDING_11 = 11, // field has value 0xb
VECTPENDING_12 = 12, // field has value 0xc
VECTPENDING_13 = 13, // field has value 0xd
VECTPENDING_14 = 14, // field has value 0xe
VECTPENDING_15 = 15, // field has value 0xf
VECTPENDING_16 = 16, // field has value 0x10
VECTPENDING_17 = 17, // field has value 0x11
VECTPENDING_18 = 18, // field has value 0x12
VECTPENDING_19 = 19, // field has value 0x13
VECTPENDING_20 = 20, // field has value 0x14
VECTPENDING_21 = 21, // field has value 0x15
VECTPENDING_22 = 22, // field has value 0x16
VECTPENDING_23 = 23, // field has value 0x17
VECTPENDING_24 = 24, // field has value 0x18
VECTPENDING_25 = 25, // field has value 0x19
VECTPENDING_26 = 26, // field has value 0x1a
VECTPENDING_27 = 27, // field has value 0x1b
VECTPENDING_28 = 28, // field has value 0x1c
VECTPENDING_29 = 29, // field has value 0x1d
VECTPENDING_30 = 30, // field has value 0x1e
VECTPENDING_31 = 31, // field has value 0x1f
VECTPENDING_32 = 32, // field has value 0x20
VECTPENDING_33 = 33, // field has value 0x21
VECTPENDING_34 = 34, // field has value 0x22
VECTPENDING_35 = 35, // field has value 0x23
VECTPENDING_36 = 36, // field has value 0x24
VECTPENDING_37 = 37, // field has value 0x25
VECTPENDING_38 = 38, // field has value 0x26
VECTPENDING_39 = 39, // field has value 0x27
VECTPENDING_40 = 40, // field has value 0x28
VECTPENDING_41 = 41, // field has value 0x29
VECTPENDING_42 = 42, // field has value 0x2a
VECTPENDING_43 = 43, // field has value 0x2b
VECTPENDING_44 = 44, // field has value 0x2c
VECTPENDING_45 = 45, // field has value 0x2d
VECTPENDING_46 = 46, // field has value 0x2e
VECTPENDING_47 = 47, // field has value 0x2f
VECTPENDING_48 = 48, // field has value 0x30
VECTPENDING_49 = 49, // field has value 0x31
VECTPENDING_50 = 50, // field has value 0x32
VECTPENDING_51 = 51, // field has value 0x33
VECTPENDING_52 = 52, // field has value 0x34
VECTPENDING_53 = 53, // field has value 0x35
VECTPENDING_54 = 54, // field has value 0x36
VECTPENDING_55 = 55, // field has value 0x37
VECTPENDING_56 = 56, // field has value 0x38
VECTPENDING_57 = 57, // field has value 0x39
VECTPENDING_58 = 58, // field has value 0x3a
VECTPENDING_59 = 59, // field has value 0x3b
VECTPENDING_60 = 60, // field has value 0x3c
VECTPENDING_61 = 61, // field has value 0x3d
VECTPENDING_62 = 62, // field has value 0x3e
VECTPENDING_63 = 63, // field has value 0x3f
VECTPENDING_64 = 64, // field has value 0x40
VECTPENDING_65 = 65, // field has value 0x41
VECTPENDING_66 = 66, // field has value 0x42
VECTPENDING_67 = 67, // field has value 0x43
VECTPENDING_68 = 68, // field has value 0x44
VECTPENDING_69 = 69, // field has value 0x45
VECTPENDING_70 = 70, // field has value 0x46
VECTPENDING_71 = 71, // field has value 0x47
VECTPENDING_72 = 72, // field has value 0x48
VECTPENDING_73 = 73, // field has value 0x49
VECTPENDING_74 = 74, // field has value 0x4a
VECTPENDING_75 = 75, // field has value 0x4b
VECTPENDING_76 = 76, // field has value 0x4c
VECTPENDING_77 = 77, // field has value 0x4d
VECTPENDING_78 = 78, // field has value 0x4e
VECTPENDING_79 = 79, // field has value 0x4f
VECTPENDING_80 = 80, // field has value 0x50
VECTPENDING_81 = 81, // field has value 0x51
VECTPENDING_82 = 82, // field has value 0x52
VECTPENDING_83 = 83, // field has value 0x53
VECTPENDING_84 = 84, // field has value 0x54
VECTPENDING_85 = 85, // field has value 0x55
VECTPENDING_86 = 86, // field has value 0x56
VECTPENDING_87 = 87, // field has value 0x57
VECTPENDING_88 = 88, // field has value 0x58
VECTPENDING_89 = 89, // field has value 0x59
VECTPENDING_90 = 90, // field has value 0x5a
VECTPENDING_91 = 91, // field has value 0x5b
VECTPENDING_92 = 92, // field has value 0x5c
VECTPENDING_93 = 93, // field has value 0x5d
VECTPENDING_94 = 94, // field has value 0x5e
VECTPENDING_95 = 95, // field has value 0x5f
VECTPENDING_96 = 96, // field has value 0x60
VECTPENDING_97 = 97, // field has value 0x61
VECTPENDING_98 = 98, // field has value 0x62
VECTPENDING_99 = 99, // field has value 0x63
VECTPENDING_100 = 100, // field has value 0x64
VECTPENDING_101 = 101, // field has value 0x65
VECTPENDING_102 = 102, // field has value 0x66
VECTPENDING_103 = 103, // field has value 0x67
VECTPENDING_104 = 104, // field has value 0x68
VECTPENDING_105 = 105, // field has value 0x69
VECTPENDING_106 = 106, // field has value 0x6a
VECTPENDING_107 = 107, // field has value 0x6b
VECTPENDING_108 = 108, // field has value 0x6c
VECTPENDING_109 = 109, // field has value 0x6d
VECTPENDING_110 = 110, // field has value 0x6e
VECTPENDING_111 = 111, // field has value 0x6f
VECTPENDING_112 = 112, // field has value 0x70
VECTPENDING_113 = 113, // field has value 0x71
VECTPENDING_114 = 114, // field has value 0x72
VECTPENDING_115 = 115, // field has value 0x73
VECTPENDING_116 = 116, // field has value 0x74
VECTPENDING_117 = 117, // field has value 0x75
VECTPENDING_118 = 118, // field has value 0x76
VECTPENDING_119 = 119, // field has value 0x77
VECTPENDING_120 = 120, // field has value 0x78
VECTPENDING_121 = 121, // field has value 0x79
VECTPENDING_122 = 122, // field has value 0x7a
VECTPENDING_123 = 123, // field has value 0x7b
VECTPENDING_124 = 124, // field has value 0x7c
VECTPENDING_125 = 125, // field has value 0x7d
VECTPENDING_126 = 126, // field has value 0x7e
VECTPENDING_127 = 127, // field has value 0x7f

};
enum class PENDSVSET_t : uint32_t {
    PENDSVSET_0 = 0, // field has value 0x0
PENDSVSET_1 = 1, // field has value 0x1

};
enum class RETTOBASE_t : uint32_t {
    RETTOBASE_0 = 0, // field has value 0x0
RETTOBASE_1 = 1, // field has value 0x1

};
enum class PENDSVCLR_t : uint32_t {
    PENDSVCLR_0 = 0, // field has value 0x0
PENDSVCLR_1 = 1, // field has value 0x1

};
enum class ISRPENDING_t : uint32_t {
    ISRPENDING_0 = 0, // field has value 0x0
ISRPENDING_1 = 1, // field has value 0x1

};
enum class PENDSTSET_t : uint32_t {
    PENDSTSET_0 = 0, // field has value 0x0
PENDSTSET_1 = 1, // field has value 0x1

};
enum class PENDSTCLR_t : uint32_t {
    PENDSTCLR_0 = 0, // field has value 0x0
PENDSTCLR_1 = 1, // field has value 0x1

};
enum class NMIPENDSET_t : uint32_t {
    NMIPENDSET_0 = 0, // field has value 0x0
NMIPENDSET_1 = 1, // field has value 0x1

};
template <uint32_t address>
class ICSR : public ReadableWritable<address> {
   public:
    ICSR() : ReadableWritable<address>() {}
    uint16_t VECTACTIVE(){
    uint32_t tmp = this->bits_masked(0x1ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void VECTACTIVE(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1ff);
}
RETTOBASE_t RETTOBASE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<RETTOBASE_t>(tmp);
}
void RETTOBASE(RETTOBASE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
VECTPENDING_t VECTPENDING(){
    uint32_t tmp = this->bits_masked(0x7f000) >> 12;
    return reinterpret_cast<VECTPENDING_t>(tmp);
}
void VECTPENDING(VECTPENDING_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x7f000);
}
ISRPENDING_t ISRPENDING(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<ISRPENDING_t>(tmp);
}
void ISRPENDING(ISRPENDING_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
PENDSTCLR_t PENDSTCLR(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<PENDSTCLR_t>(tmp);
}
void PENDSTCLR(PENDSTCLR_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
PENDSTSET_t PENDSTSET(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<PENDSTSET_t>(tmp);
}
void PENDSTSET(PENDSTSET_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
PENDSVCLR_t PENDSVCLR(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<PENDSVCLR_t>(tmp);
}
void PENDSVCLR(PENDSVCLR_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
PENDSVSET_t PENDSVSET(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<PENDSVSET_t>(tmp);
}
void PENDSVSET(PENDSVSET_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
NMIPENDSET_t NMIPENDSET(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<NMIPENDSET_t>(tmp);
}
void NMIPENDSET(NMIPENDSET_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace VTOR{

template <uint32_t address>
class VTOR : public ReadableWritable<address> {
   public:
    VTOR() : ReadableWritable<address>() {}
    uint32_t TBLOFF(){
    uint32_t tmp = this->bits_masked(0x3ffffe00) >> 9;
    return reinterpret_cast<uint32_t>(tmp);
}
void TBLOFF(uint32_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x3ffffe00);
}
};
}
namespace AIRCR{
enum class PRIGROUP_t : uint32_t {
    PRIGROUP_0 = 0, // field has value 0x0
PRIGROUP_1 = 1, // field has value 0x1
PRIGROUP_2 = 2, // field has value 0x2
PRIGROUP_3 = 3, // field has value 0x3
PRIGROUP_4 = 4, // field has value 0x4
PRIGROUP_5 = 5, // field has value 0x5
PRIGROUP_6 = 6, // field has value 0x6
PRIGROUP_7 = 7, // field has value 0x7

};

enum class SYSRESETREQ_t : uint32_t {
    SYSRESETREQ_0 = 0, // field has value 0x0
SYSRESETREQ_1 = 1, // field has value 0x1

};
enum class VECTRESET_t : uint32_t {
    VECTRESET_0 = 0, // field has value 0x0
VECTRESET_1 = 1, // field has value 0x1

};
enum class VECTCLRACTIVE_t : uint32_t {
    VECTCLRACTIVE_0 = 0, // field has value 0x0
VECTCLRACTIVE_1 = 1, // field has value 0x1

};
enum class ENDIANESS_t : uint32_t {
    ENDIANESS_0 = 0, // field has value 0x0
ENDIANESS_1 = 1, // field has value 0x1

};
template <uint32_t address>
class AIRCR : public ReadableWritable<address> {
   public:
    AIRCR() : ReadableWritable<address>() {}
    VECTRESET_t VECTRESET(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<VECTRESET_t>(tmp);
}
void VECTRESET(VECTRESET_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
VECTCLRACTIVE_t VECTCLRACTIVE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<VECTCLRACTIVE_t>(tmp);
}
void VECTCLRACTIVE(VECTCLRACTIVE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
SYSRESETREQ_t SYSRESETREQ(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<SYSRESETREQ_t>(tmp);
}
void SYSRESETREQ(SYSRESETREQ_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
PRIGROUP_t PRIGROUP(){
    uint32_t tmp = this->bits_masked(0x700) >> 8;
    return reinterpret_cast<PRIGROUP_t>(tmp);
}
void PRIGROUP(PRIGROUP_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x700);
}
ENDIANESS_t ENDIANESS(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ENDIANESS_t>(tmp);
}
void ENDIANESS(ENDIANESS_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
uint16_t VECTKEYSTAT(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void VECTKEYSTAT(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace SCR{
enum class SLEEPDEEP_t : uint32_t {
    SLEEPDEEP_0 = 0, // field has value 0x0
SLEEPDEEP_1 = 1, // field has value 0x1

};
enum class SLEEPONEXIT_t : uint32_t {
    SLEEPONEXIT_0 = 0, // field has value 0x0
SLEEPONEXIT_1 = 1, // field has value 0x1

};
enum class SEVEONPEND_t : uint32_t {
    SEVEONPEND_0 = 0, // field has value 0x0
SEVEONPEND_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SCR : public ReadableWritable<address> {
   public:
    SCR() : ReadableWritable<address>() {}
    SLEEPONEXIT_t SLEEPONEXIT(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SLEEPONEXIT_t>(tmp);
}
void SLEEPONEXIT(SLEEPONEXIT_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
SLEEPDEEP_t SLEEPDEEP(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<SLEEPDEEP_t>(tmp);
}
void SLEEPDEEP(SLEEPDEEP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
SEVEONPEND_t SEVEONPEND(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<SEVEONPEND_t>(tmp);
}
void SEVEONPEND(SEVEONPEND_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
};
}
namespace CCR{
enum class UNALIGN__TRP_t : uint32_t {
    UNALIGN__TRP_0 = 0, // field has value 0x0
UNALIGN__TRP_1 = 1, // field has value 0x1

};
enum class STKALIGN_t : uint32_t {
    STKALIGN_0 = 0, // field has value 0x0
STKALIGN_1 = 1, // field has value 0x1

};
enum class NONBASETHRDENA_t : uint32_t {
    NONBASETHRDENA_0 = 0, // field has value 0x0
NONBASETHRDENA_1 = 1, // field has value 0x1

};
enum class DIV_0_TRP_t : uint32_t {
    DIV_0_TRP_0 = 0, // field has value 0x0
DIV_0_TRP_1 = 1, // field has value 0x1

};
enum class USERSETMPEND_t : uint32_t {
    USERSETMPEND_0 = 0, // field has value 0x0
USERSETMPEND_1 = 1, // field has value 0x1

};
enum class BFHFNMIGN_t : uint32_t {
    BFHFNMIGN_0 = 0, // field has value 0x0
BFHFNMIGN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CCR : public ReadableWritable<address> {
   public:
    CCR() : ReadableWritable<address>() {}
    NONBASETHRDENA_t NONBASETHRDENA(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<NONBASETHRDENA_t>(tmp);
}
void NONBASETHRDENA(NONBASETHRDENA_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
USERSETMPEND_t USERSETMPEND(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<USERSETMPEND_t>(tmp);
}
void USERSETMPEND(USERSETMPEND_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
UNALIGN__TRP_t UNALIGN__TRP(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<UNALIGN__TRP_t>(tmp);
}
void UNALIGN__TRP(UNALIGN__TRP_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DIV_0_TRP_t DIV_0_TRP(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<DIV_0_TRP_t>(tmp);
}
void DIV_0_TRP(DIV_0_TRP_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
BFHFNMIGN_t BFHFNMIGN(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<BFHFNMIGN_t>(tmp);
}
void BFHFNMIGN(BFHFNMIGN_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
STKALIGN_t STKALIGN(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<STKALIGN_t>(tmp);
}
void STKALIGN(STKALIGN_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
};
}
namespace SHPR1{

template <uint32_t address>
class SHPR1 : public ReadableWritable<address> {
   public:
    SHPR1() : ReadableWritable<address>() {}
    uint8_t PRI_4(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRI_4(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t PRI_5(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRI_5(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t PRI_6(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRI_6(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
};
}
namespace SHPR2{

template <uint32_t address>
class SHPR2 : public ReadableWritable<address> {
   public:
    SHPR2() : ReadableWritable<address>() {}
    uint8_t PRI_11(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRI_11(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace SHPR3{

template <uint32_t address>
class SHPR3 : public ReadableWritable<address> {
   public:
    SHPR3() : ReadableWritable<address>() {}
    uint8_t PRI_14(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRI_14(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t PRI_15(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void PRI_15(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace SHCRS{
enum class USGFAULTPENDED_t : uint32_t {
    USGFAULTPENDED_0 = 0, // field has value 0x0
USGFAULTPENDED_1 = 1, // field has value 0x1

};
enum class MEMFAULTENA_t : uint32_t {
    MEMFAULTENA_0 = 0, // field has value 0x0
MEMFAULTENA_1 = 1, // field has value 0x1

};
enum class SVCALLACT_t : uint32_t {
    SVCALLACT_0 = 0, // field has value 0x0
SVCALLACT_1 = 1, // field has value 0x1

};
enum class MONITORACT_t : uint32_t {
    MONITORACT_0 = 0, // field has value 0x0
MONITORACT_1 = 1, // field has value 0x1

};
enum class BUSFAULTENA_t : uint32_t {
    BUSFAULTENA_0 = 0, // field has value 0x0
BUSFAULTENA_1 = 1, // field has value 0x1

};
enum class MEMFAULTACT_t : uint32_t {
    MEMFAULTACT_0 = 0, // field has value 0x0
MEMFAULTACT_1 = 1, // field has value 0x1

};
enum class SVCALLPENDED_t : uint32_t {
    SVCALLPENDED_0 = 0, // field has value 0x0
SVCALLPENDED_1 = 1, // field has value 0x1

};
enum class PENDSVACT_t : uint32_t {
    PENDSVACT_0 = 0, // field has value 0x0
PENDSVACT_1 = 1, // field has value 0x1

};
enum class MEMFAULTPENDED_t : uint32_t {
    MEMFAULTPENDED_0 = 0, // field has value 0x0
MEMFAULTPENDED_1 = 1, // field has value 0x1

};
enum class BUSFAULTPENDED_t : uint32_t {
    BUSFAULTPENDED_0 = 0, // field has value 0x0
BUSFAULTPENDED_1 = 1, // field has value 0x1

};
enum class SYSTICKACT_t : uint32_t {
    SYSTICKACT_0 = 0, // field has value 0x0
SYSTICKACT_1 = 1, // field has value 0x1

};
enum class USGFAULTENA_t : uint32_t {
    USGFAULTENA_0 = 0, // field has value 0x0
USGFAULTENA_1 = 1, // field has value 0x1

};
enum class USGFAULTACT_t : uint32_t {
    USGFAULTACT_0 = 0, // field has value 0x0
USGFAULTACT_1 = 1, // field has value 0x1

};
enum class BUSFAULTACT_t : uint32_t {
    BUSFAULTACT_0 = 0, // field has value 0x0
BUSFAULTACT_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SHCRS : public ReadableWritable<address> {
   public:
    SHCRS() : ReadableWritable<address>() {}
    MEMFAULTACT_t MEMFAULTACT(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<MEMFAULTACT_t>(tmp);
}
void MEMFAULTACT(MEMFAULTACT_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
BUSFAULTACT_t BUSFAULTACT(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<BUSFAULTACT_t>(tmp);
}
void BUSFAULTACT(BUSFAULTACT_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
USGFAULTACT_t USGFAULTACT(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<USGFAULTACT_t>(tmp);
}
void USGFAULTACT(USGFAULTACT_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
SVCALLACT_t SVCALLACT(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<SVCALLACT_t>(tmp);
}
void SVCALLACT(SVCALLACT_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
MONITORACT_t MONITORACT(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<MONITORACT_t>(tmp);
}
void MONITORACT(MONITORACT_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
PENDSVACT_t PENDSVACT(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<PENDSVACT_t>(tmp);
}
void PENDSVACT(PENDSVACT_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
SYSTICKACT_t SYSTICKACT(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<SYSTICKACT_t>(tmp);
}
void SYSTICKACT(SYSTICKACT_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
USGFAULTPENDED_t USGFAULTPENDED(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<USGFAULTPENDED_t>(tmp);
}
void USGFAULTPENDED(USGFAULTPENDED_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
MEMFAULTPENDED_t MEMFAULTPENDED(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<MEMFAULTPENDED_t>(tmp);
}
void MEMFAULTPENDED(MEMFAULTPENDED_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
BUSFAULTPENDED_t BUSFAULTPENDED(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<BUSFAULTPENDED_t>(tmp);
}
void BUSFAULTPENDED(BUSFAULTPENDED_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
SVCALLPENDED_t SVCALLPENDED(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<SVCALLPENDED_t>(tmp);
}
void SVCALLPENDED(SVCALLPENDED_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
MEMFAULTENA_t MEMFAULTENA(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<MEMFAULTENA_t>(tmp);
}
void MEMFAULTENA(MEMFAULTENA_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
BUSFAULTENA_t BUSFAULTENA(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<BUSFAULTENA_t>(tmp);
}
void BUSFAULTENA(BUSFAULTENA_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
USGFAULTENA_t USGFAULTENA(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<USGFAULTENA_t>(tmp);
}
void USGFAULTENA(USGFAULTENA_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
};
}
namespace CFSR_UFSR_BFSR_MMFSR{
enum class MMARVALID_t : uint32_t {
    MMARVALID_0 = 0, // field has value 0x0
MMARVALID_1 = 1, // field has value 0x1

};
enum class INVPC_t : uint32_t {
    INVPC_0 = 0, // field has value 0x0
INVPC_1 = 1, // field has value 0x1

};
enum class PRECISERR_t : uint32_t {
    PRECISERR_0 = 0, // field has value 0x0
PRECISERR_1 = 1, // field has value 0x1

};
enum class UNDEFINSTR_t : uint32_t {
    UNDEFINSTR_0 = 0, // field has value 0x0
UNDEFINSTR_1 = 1, // field has value 0x1

};
enum class INVSTATE_t : uint32_t {
    INVSTATE_0 = 0, // field has value 0x0
INVSTATE_1 = 1, // field has value 0x1

};
enum class UNSTKERR_t : uint32_t {
    UNSTKERR_0 = 0, // field has value 0x0
UNSTKERR_1 = 1, // field has value 0x1

};
enum class BFARVALID_t : uint32_t {
    BFARVALID_0 = 0, // field has value 0x0
BFARVALID_1 = 1, // field has value 0x1

};
enum class LSPERR_t : uint32_t {
    LSPERR_0 = 0, // field has value 0x0
LSPERR_1 = 1, // field has value 0x1

};
enum class IACCVIOL_t : uint32_t {
    IACCVIOL_0 = 0, // field has value 0x0
IACCVIOL_1 = 1, // field has value 0x1

};
enum class NOCP_t : uint32_t {
    NOCP_0 = 0, // field has value 0x0
NOCP_1 = 1, // field has value 0x1

};
enum class STKERR_t : uint32_t {
    STKERR_0 = 0, // field has value 0x0
STKERR_1 = 1, // field has value 0x1

};
enum class UNALIGNED_t : uint32_t {
    UNALIGNED_0 = 0, // field has value 0x0
UNALIGNED_1 = 1, // field has value 0x1

};
enum class MUNSTKERR_t : uint32_t {
    MUNSTKERR_0 = 0, // field has value 0x0
MUNSTKERR_1 = 1, // field has value 0x1

};
enum class MSTKERR_t : uint32_t {
    MSTKERR_0 = 0, // field has value 0x0
MSTKERR_1 = 1, // field has value 0x1

};
enum class IMPRECISERR_t : uint32_t {
    IMPRECISERR_0 = 0, // field has value 0x0
IMPRECISERR_1 = 1, // field has value 0x1

};
enum class DIVBYZERO_t : uint32_t {
    DIVBYZERO_0 = 0, // field has value 0x0
DIVBYZERO_1 = 1, // field has value 0x1

};
enum class IBUSERR_t : uint32_t {
    IBUSERR_0 = 0, // field has value 0x0
IBUSERR_1 = 1, // field has value 0x1

};
enum class MLSPERR_t : uint32_t {
    MLSPERR_0 = 0, // field has value 0x0
MLSPERR_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CFSR_UFSR_BFSR_MMFSR : public ReadableWritable<address> {
   public:
    CFSR_UFSR_BFSR_MMFSR() : ReadableWritable<address>() {}
    IACCVIOL_t IACCVIOL(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<IACCVIOL_t>(tmp);
}
void IACCVIOL(IACCVIOL_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MUNSTKERR_t MUNSTKERR(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<MUNSTKERR_t>(tmp);
}
void MUNSTKERR(MUNSTKERR_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
MSTKERR_t MSTKERR(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<MSTKERR_t>(tmp);
}
void MSTKERR(MSTKERR_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
MLSPERR_t MLSPERR(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<MLSPERR_t>(tmp);
}
void MLSPERR(MLSPERR_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
MMARVALID_t MMARVALID(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<MMARVALID_t>(tmp);
}
void MMARVALID(MMARVALID_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
IBUSERR_t IBUSERR(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<IBUSERR_t>(tmp);
}
void IBUSERR(IBUSERR_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
PRECISERR_t PRECISERR(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<PRECISERR_t>(tmp);
}
void PRECISERR(PRECISERR_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
IMPRECISERR_t IMPRECISERR(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<IMPRECISERR_t>(tmp);
}
void IMPRECISERR(IMPRECISERR_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
UNSTKERR_t UNSTKERR(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<UNSTKERR_t>(tmp);
}
void UNSTKERR(UNSTKERR_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
STKERR_t STKERR(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<STKERR_t>(tmp);
}
void STKERR(STKERR_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
LSPERR_t LSPERR(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<LSPERR_t>(tmp);
}
void LSPERR(LSPERR_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
BFARVALID_t BFARVALID(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<BFARVALID_t>(tmp);
}
void BFARVALID(BFARVALID_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
UNDEFINSTR_t UNDEFINSTR(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<UNDEFINSTR_t>(tmp);
}
void UNDEFINSTR(UNDEFINSTR_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
INVSTATE_t INVSTATE(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<INVSTATE_t>(tmp);
}
void INVSTATE(INVSTATE_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
INVPC_t INVPC(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<INVPC_t>(tmp);
}
void INVPC(INVPC_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
NOCP_t NOCP(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<NOCP_t>(tmp);
}
void NOCP(NOCP_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
UNALIGNED_t UNALIGNED(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<UNALIGNED_t>(tmp);
}
void UNALIGNED(UNALIGNED_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
DIVBYZERO_t DIVBYZERO(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<DIVBYZERO_t>(tmp);
}
void DIVBYZERO(DIVBYZERO_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
};
}
namespace HFSR{
enum class FORCED_t : uint32_t {
    FORCED_0 = 0, // field has value 0x0
FORCED_1 = 1, // field has value 0x1

};
enum class DEBUG_VT_t : uint32_t {
    DEBUG_VT_0 = 0, // field has value 0x0
DEBUG_VT_1 = 1, // field has value 0x1

};
enum class VECTTBL_t : uint32_t {
    VECTTBL_0 = 0, // field has value 0x0
VECTTBL_1 = 1, // field has value 0x1

};
template <uint32_t address>
class HFSR : public ReadableWritable<address> {
   public:
    HFSR() : ReadableWritable<address>() {}
    VECTTBL_t VECTTBL(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<VECTTBL_t>(tmp);
}
void VECTTBL(VECTTBL_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
FORCED_t FORCED(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<FORCED_t>(tmp);
}
void FORCED(FORCED_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
DEBUG_VT_t DEBUG_VT(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<DEBUG_VT_t>(tmp);
}
void DEBUG_VT(DEBUG_VT_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace MMFAR{

template <uint32_t address>
class MMFAR : public ReadableWritable<address> {
   public:
    MMFAR() : ReadableWritable<address>() {}
    uint32_t MMFAR(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void MMFAR(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace BFAR{

template <uint32_t address>
class BFAR : public ReadableWritable<address> {
   public:
    BFAR() : ReadableWritable<address>() {}
    uint32_t BFAR(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void BFAR(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace AFSR{

template <uint32_t address>
class AFSR : public ReadableWritable<address> {
   public:
    AFSR() : ReadableWritable<address>() {}
    uint32_t IMPDEF(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void IMPDEF(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
template<uint32_t base_address>
class SCB{
    public:
    // CPUID base register
CPUID<base_address + 0> CPUID; 
// Interrupt control and stateregister
ICSR<base_address + 4> ICSR; 
// Vector table offset register
VTOR<base_address + 8> VTOR; 
// Application interrupt and reset controlregister
AIRCR<base_address + 12> AIRCR; 
// System control register
SCR<base_address + 16> SCR; 
// Configuration and controlregister
CCR<base_address + 20> CCR; 
// System handler priorityregisters
SHPR1<base_address + 24> SHPR1; 
// System handler priorityregisters
SHPR2<base_address + 28> SHPR2; 
// System handler priorityregisters
SHPR3<base_address + 32> SHPR3; 
// System handler control and stateregister
SHCRS<base_address + 36> SHCRS; 
// Configurable fault statusregister
CFSR_UFSR_BFSR_MMFSR<base_address + 40> CFSR_UFSR_BFSR_MMFSR; 
// Hard fault status register
HFSR<base_address + 44> HFSR; 
// Memory management fault addressregister
MMFAR<base_address + 52> MMFAR; 
// Bus fault address register
BFAR<base_address + 56> BFAR; 
// Auxiliary fault statusregister
AFSR<base_address + 60> AFSR; 
};
}

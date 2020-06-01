#pragma once

#include <cstdint>
#include <reg.h>

namespace SYSCFG{
namespace MEMRM{
enum class MEM_MODE_t : uint32_t {
    MEM_MODE_0 = 0, // field has value 0x0
MEM_MODE_1 = 1, // field has value 0x1
MEM_MODE_2 = 2, // field has value 0x2
MEM_MODE_3 = 3, // field has value 0x3

};
template <uint32_t address>
class MEMRM : public ReadableWritable<address> {
   public:
    MEMRM() : ReadableWritable<address>() {}
    MEM_MODE_t MEM_MODE(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<MEM_MODE_t>(tmp);
}
void MEM_MODE(MEM_MODE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace PMC{
enum class ADC1DC2_t : uint32_t {
    ADC1DC2_0 = 0, // field has value 0x0
ADC1DC2_1 = 1, // field has value 0x1

};
template <uint32_t address>
class PMC : public ReadableWritable<address> {
   public:
    PMC() : ReadableWritable<address>() {}
    ADC1DC2_t ADC1DC2(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<ADC1DC2_t>(tmp);
}
void ADC1DC2(ADC1DC2_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
};
}
namespace EXTICR1{
enum class EXTI1_t : uint32_t {
    EXTI1_0 = 0, // field has value 0x0
EXTI1_1 = 1, // field has value 0x1
EXTI1_2 = 2, // field has value 0x2
EXTI1_3 = 3, // field has value 0x3
EXTI1_4 = 4, // field has value 0x4
EXTI1_5 = 5, // field has value 0x5
EXTI1_6 = 6, // field has value 0x6
EXTI1_7 = 7, // field has value 0x7
EXTI1_8 = 8, // field has value 0x8
EXTI1_9 = 9, // field has value 0x9
EXTI1_10 = 10, // field has value 0xa
EXTI1_11 = 11, // field has value 0xb
EXTI1_12 = 12, // field has value 0xc
EXTI1_13 = 13, // field has value 0xd
EXTI1_14 = 14, // field has value 0xe
EXTI1_15 = 15, // field has value 0xf

};
enum class EXTI0_t : uint32_t {
    EXTI0_0 = 0, // field has value 0x0
EXTI0_1 = 1, // field has value 0x1
EXTI0_2 = 2, // field has value 0x2
EXTI0_3 = 3, // field has value 0x3
EXTI0_4 = 4, // field has value 0x4
EXTI0_5 = 5, // field has value 0x5
EXTI0_6 = 6, // field has value 0x6
EXTI0_7 = 7, // field has value 0x7
EXTI0_8 = 8, // field has value 0x8
EXTI0_9 = 9, // field has value 0x9
EXTI0_10 = 10, // field has value 0xa
EXTI0_11 = 11, // field has value 0xb
EXTI0_12 = 12, // field has value 0xc
EXTI0_13 = 13, // field has value 0xd
EXTI0_14 = 14, // field has value 0xe
EXTI0_15 = 15, // field has value 0xf

};
enum class EXTI2_t : uint32_t {
    EXTI2_0 = 0, // field has value 0x0
EXTI2_1 = 1, // field has value 0x1
EXTI2_2 = 2, // field has value 0x2
EXTI2_3 = 3, // field has value 0x3
EXTI2_4 = 4, // field has value 0x4
EXTI2_5 = 5, // field has value 0x5
EXTI2_6 = 6, // field has value 0x6
EXTI2_7 = 7, // field has value 0x7
EXTI2_8 = 8, // field has value 0x8
EXTI2_9 = 9, // field has value 0x9
EXTI2_10 = 10, // field has value 0xa
EXTI2_11 = 11, // field has value 0xb
EXTI2_12 = 12, // field has value 0xc
EXTI2_13 = 13, // field has value 0xd
EXTI2_14 = 14, // field has value 0xe
EXTI2_15 = 15, // field has value 0xf

};
enum class EXTI3_t : uint32_t {
    EXTI3_0 = 0, // field has value 0x0
EXTI3_1 = 1, // field has value 0x1
EXTI3_2 = 2, // field has value 0x2
EXTI3_3 = 3, // field has value 0x3
EXTI3_4 = 4, // field has value 0x4
EXTI3_5 = 5, // field has value 0x5
EXTI3_6 = 6, // field has value 0x6
EXTI3_7 = 7, // field has value 0x7
EXTI3_8 = 8, // field has value 0x8
EXTI3_9 = 9, // field has value 0x9
EXTI3_10 = 10, // field has value 0xa
EXTI3_11 = 11, // field has value 0xb
EXTI3_12 = 12, // field has value 0xc
EXTI3_13 = 13, // field has value 0xd
EXTI3_14 = 14, // field has value 0xe
EXTI3_15 = 15, // field has value 0xf

};
template <uint32_t address>
class EXTICR1 : public ReadableWritable<address> {
   public:
    EXTICR1() : ReadableWritable<address>() {}
    EXTI3_t EXTI3(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<EXTI3_t>(tmp);
}
void EXTI3(EXTI3_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
EXTI2_t EXTI2(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<EXTI2_t>(tmp);
}
void EXTI2(EXTI2_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
EXTI1_t EXTI1(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<EXTI1_t>(tmp);
}
void EXTI1(EXTI1_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
EXTI0_t EXTI0(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<EXTI0_t>(tmp);
}
void EXTI0(EXTI0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace EXTICR2{
enum class EXTI5_t : uint32_t {
    EXTI5_0 = 0, // field has value 0x0
EXTI5_1 = 1, // field has value 0x1
EXTI5_2 = 2, // field has value 0x2
EXTI5_3 = 3, // field has value 0x3
EXTI5_4 = 4, // field has value 0x4
EXTI5_5 = 5, // field has value 0x5
EXTI5_6 = 6, // field has value 0x6
EXTI5_7 = 7, // field has value 0x7
EXTI5_8 = 8, // field has value 0x8
EXTI5_9 = 9, // field has value 0x9
EXTI5_10 = 10, // field has value 0xa
EXTI5_11 = 11, // field has value 0xb
EXTI5_12 = 12, // field has value 0xc
EXTI5_13 = 13, // field has value 0xd
EXTI5_14 = 14, // field has value 0xe
EXTI5_15 = 15, // field has value 0xf

};
enum class EXTI6_t : uint32_t {
    EXTI6_0 = 0, // field has value 0x0
EXTI6_1 = 1, // field has value 0x1
EXTI6_2 = 2, // field has value 0x2
EXTI6_3 = 3, // field has value 0x3
EXTI6_4 = 4, // field has value 0x4
EXTI6_5 = 5, // field has value 0x5
EXTI6_6 = 6, // field has value 0x6
EXTI6_7 = 7, // field has value 0x7
EXTI6_8 = 8, // field has value 0x8
EXTI6_9 = 9, // field has value 0x9
EXTI6_10 = 10, // field has value 0xa
EXTI6_11 = 11, // field has value 0xb
EXTI6_12 = 12, // field has value 0xc
EXTI6_13 = 13, // field has value 0xd
EXTI6_14 = 14, // field has value 0xe
EXTI6_15 = 15, // field has value 0xf

};
enum class EXTI4_t : uint32_t {
    EXTI4_0 = 0, // field has value 0x0
EXTI4_1 = 1, // field has value 0x1
EXTI4_2 = 2, // field has value 0x2
EXTI4_3 = 3, // field has value 0x3
EXTI4_4 = 4, // field has value 0x4
EXTI4_5 = 5, // field has value 0x5
EXTI4_6 = 6, // field has value 0x6
EXTI4_7 = 7, // field has value 0x7
EXTI4_8 = 8, // field has value 0x8
EXTI4_9 = 9, // field has value 0x9
EXTI4_10 = 10, // field has value 0xa
EXTI4_11 = 11, // field has value 0xb
EXTI4_12 = 12, // field has value 0xc
EXTI4_13 = 13, // field has value 0xd
EXTI4_14 = 14, // field has value 0xe
EXTI4_15 = 15, // field has value 0xf

};
enum class EXTI7_t : uint32_t {
    EXTI7_0 = 0, // field has value 0x0
EXTI7_1 = 1, // field has value 0x1
EXTI7_2 = 2, // field has value 0x2
EXTI7_3 = 3, // field has value 0x3
EXTI7_4 = 4, // field has value 0x4
EXTI7_5 = 5, // field has value 0x5
EXTI7_6 = 6, // field has value 0x6
EXTI7_7 = 7, // field has value 0x7
EXTI7_8 = 8, // field has value 0x8
EXTI7_9 = 9, // field has value 0x9
EXTI7_10 = 10, // field has value 0xa
EXTI7_11 = 11, // field has value 0xb
EXTI7_12 = 12, // field has value 0xc
EXTI7_13 = 13, // field has value 0xd
EXTI7_14 = 14, // field has value 0xe
EXTI7_15 = 15, // field has value 0xf

};
template <uint32_t address>
class EXTICR2 : public ReadableWritable<address> {
   public:
    EXTICR2() : ReadableWritable<address>() {}
    EXTI7_t EXTI7(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<EXTI7_t>(tmp);
}
void EXTI7(EXTI7_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
EXTI6_t EXTI6(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<EXTI6_t>(tmp);
}
void EXTI6(EXTI6_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
EXTI5_t EXTI5(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<EXTI5_t>(tmp);
}
void EXTI5(EXTI5_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
EXTI4_t EXTI4(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<EXTI4_t>(tmp);
}
void EXTI4(EXTI4_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace EXTICR3{
enum class EXTI11_t : uint32_t {
    EXTI11_0 = 0, // field has value 0x0
EXTI11_1 = 1, // field has value 0x1
EXTI11_2 = 2, // field has value 0x2
EXTI11_3 = 3, // field has value 0x3
EXTI11_4 = 4, // field has value 0x4
EXTI11_5 = 5, // field has value 0x5
EXTI11_6 = 6, // field has value 0x6
EXTI11_7 = 7, // field has value 0x7
EXTI11_8 = 8, // field has value 0x8
EXTI11_9 = 9, // field has value 0x9
EXTI11_10 = 10, // field has value 0xa
EXTI11_11 = 11, // field has value 0xb
EXTI11_12 = 12, // field has value 0xc
EXTI11_13 = 13, // field has value 0xd
EXTI11_14 = 14, // field has value 0xe
EXTI11_15 = 15, // field has value 0xf

};
enum class EXTI9_t : uint32_t {
    EXTI9_0 = 0, // field has value 0x0
EXTI9_1 = 1, // field has value 0x1
EXTI9_2 = 2, // field has value 0x2
EXTI9_3 = 3, // field has value 0x3
EXTI9_4 = 4, // field has value 0x4
EXTI9_5 = 5, // field has value 0x5
EXTI9_6 = 6, // field has value 0x6
EXTI9_7 = 7, // field has value 0x7
EXTI9_8 = 8, // field has value 0x8
EXTI9_9 = 9, // field has value 0x9
EXTI9_10 = 10, // field has value 0xa
EXTI9_11 = 11, // field has value 0xb
EXTI9_12 = 12, // field has value 0xc
EXTI9_13 = 13, // field has value 0xd
EXTI9_14 = 14, // field has value 0xe
EXTI9_15 = 15, // field has value 0xf

};
enum class EXTI8_t : uint32_t {
    EXTI8_0 = 0, // field has value 0x0
EXTI8_1 = 1, // field has value 0x1
EXTI8_2 = 2, // field has value 0x2
EXTI8_3 = 3, // field has value 0x3
EXTI8_4 = 4, // field has value 0x4
EXTI8_5 = 5, // field has value 0x5
EXTI8_6 = 6, // field has value 0x6
EXTI8_7 = 7, // field has value 0x7
EXTI8_8 = 8, // field has value 0x8
EXTI8_9 = 9, // field has value 0x9
EXTI8_10 = 10, // field has value 0xa
EXTI8_11 = 11, // field has value 0xb
EXTI8_12 = 12, // field has value 0xc
EXTI8_13 = 13, // field has value 0xd
EXTI8_14 = 14, // field has value 0xe
EXTI8_15 = 15, // field has value 0xf

};
enum class EXTI10_t : uint32_t {
    EXTI10_0 = 0, // field has value 0x0
EXTI10_1 = 1, // field has value 0x1
EXTI10_2 = 2, // field has value 0x2
EXTI10_3 = 3, // field has value 0x3
EXTI10_4 = 4, // field has value 0x4
EXTI10_5 = 5, // field has value 0x5
EXTI10_6 = 6, // field has value 0x6
EXTI10_7 = 7, // field has value 0x7
EXTI10_8 = 8, // field has value 0x8
EXTI10_9 = 9, // field has value 0x9
EXTI10_10 = 10, // field has value 0xa
EXTI10_11 = 11, // field has value 0xb
EXTI10_12 = 12, // field has value 0xc
EXTI10_13 = 13, // field has value 0xd
EXTI10_14 = 14, // field has value 0xe
EXTI10_15 = 15, // field has value 0xf

};
template <uint32_t address>
class EXTICR3 : public ReadableWritable<address> {
   public:
    EXTICR3() : ReadableWritable<address>() {}
    EXTI11_t EXTI11(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<EXTI11_t>(tmp);
}
void EXTI11(EXTI11_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
EXTI10_t EXTI10(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<EXTI10_t>(tmp);
}
void EXTI10(EXTI10_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
EXTI9_t EXTI9(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<EXTI9_t>(tmp);
}
void EXTI9(EXTI9_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
EXTI8_t EXTI8(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<EXTI8_t>(tmp);
}
void EXTI8(EXTI8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace EXTICR4{
enum class EXTI12_t : uint32_t {
    EXTI12_0 = 0, // field has value 0x0
EXTI12_1 = 1, // field has value 0x1
EXTI12_2 = 2, // field has value 0x2
EXTI12_3 = 3, // field has value 0x3
EXTI12_4 = 4, // field has value 0x4
EXTI12_5 = 5, // field has value 0x5
EXTI12_6 = 6, // field has value 0x6
EXTI12_7 = 7, // field has value 0x7
EXTI12_8 = 8, // field has value 0x8
EXTI12_9 = 9, // field has value 0x9
EXTI12_10 = 10, // field has value 0xa
EXTI12_11 = 11, // field has value 0xb
EXTI12_12 = 12, // field has value 0xc
EXTI12_13 = 13, // field has value 0xd
EXTI12_14 = 14, // field has value 0xe
EXTI12_15 = 15, // field has value 0xf

};
enum class EXTI13_t : uint32_t {
    EXTI13_0 = 0, // field has value 0x0
EXTI13_1 = 1, // field has value 0x1
EXTI13_2 = 2, // field has value 0x2
EXTI13_3 = 3, // field has value 0x3
EXTI13_4 = 4, // field has value 0x4
EXTI13_5 = 5, // field has value 0x5
EXTI13_6 = 6, // field has value 0x6
EXTI13_7 = 7, // field has value 0x7
EXTI13_8 = 8, // field has value 0x8
EXTI13_9 = 9, // field has value 0x9
EXTI13_10 = 10, // field has value 0xa
EXTI13_11 = 11, // field has value 0xb
EXTI13_12 = 12, // field has value 0xc
EXTI13_13 = 13, // field has value 0xd
EXTI13_14 = 14, // field has value 0xe
EXTI13_15 = 15, // field has value 0xf

};
enum class EXTI15_t : uint32_t {
    EXTI15_0 = 0, // field has value 0x0
EXTI15_1 = 1, // field has value 0x1
EXTI15_2 = 2, // field has value 0x2
EXTI15_3 = 3, // field has value 0x3
EXTI15_4 = 4, // field has value 0x4
EXTI15_5 = 5, // field has value 0x5
EXTI15_6 = 6, // field has value 0x6
EXTI15_7 = 7, // field has value 0x7
EXTI15_8 = 8, // field has value 0x8
EXTI15_9 = 9, // field has value 0x9
EXTI15_10 = 10, // field has value 0xa
EXTI15_11 = 11, // field has value 0xb
EXTI15_12 = 12, // field has value 0xc
EXTI15_13 = 13, // field has value 0xd
EXTI15_14 = 14, // field has value 0xe
EXTI15_15 = 15, // field has value 0xf

};
enum class EXTI14_t : uint32_t {
    EXTI14_0 = 0, // field has value 0x0
EXTI14_1 = 1, // field has value 0x1
EXTI14_2 = 2, // field has value 0x2
EXTI14_3 = 3, // field has value 0x3
EXTI14_4 = 4, // field has value 0x4
EXTI14_5 = 5, // field has value 0x5
EXTI14_6 = 6, // field has value 0x6
EXTI14_7 = 7, // field has value 0x7
EXTI14_8 = 8, // field has value 0x8
EXTI14_9 = 9, // field has value 0x9
EXTI14_10 = 10, // field has value 0xa
EXTI14_11 = 11, // field has value 0xb
EXTI14_12 = 12, // field has value 0xc
EXTI14_13 = 13, // field has value 0xd
EXTI14_14 = 14, // field has value 0xe
EXTI14_15 = 15, // field has value 0xf

};
template <uint32_t address>
class EXTICR4 : public ReadableWritable<address> {
   public:
    EXTICR4() : ReadableWritable<address>() {}
    EXTI15_t EXTI15(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<EXTI15_t>(tmp);
}
void EXTI15(EXTI15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
EXTI14_t EXTI14(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<EXTI14_t>(tmp);
}
void EXTI14(EXTI14_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
EXTI13_t EXTI13(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<EXTI13_t>(tmp);
}
void EXTI13(EXTI13_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
EXTI12_t EXTI12(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<EXTI12_t>(tmp);
}
void EXTI12(EXTI12_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace CMPCR{
enum class CMP_PD_t : uint32_t {
    CMP_PD_0 = 0, // field has value 0x0
CMP_PD_1 = 1, // field has value 0x1

};
enum class READY_t : uint32_t {
    READY_0 = 0, // field has value 0x0
READY_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CMPCR : public Readable<address> {
   public:
    CMPCR() : Readable<address>() {}
    READY_t READY(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<READY_t>(tmp);
}
void READY(READY_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CMP_PD_t CMP_PD(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CMP_PD_t>(tmp);
}
void CMP_PD(CMP_PD_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace I2C_BUFOUT{
enum class I2C4SDA_t : uint32_t {
    I2C4SDA_0 = 0, // field has value 0x0
I2C4SDA_1 = 1, // field has value 0x1

};
enum class I2C4SCL_t : uint32_t {
    I2C4SCL_0 = 0, // field has value 0x0
I2C4SCL_1 = 1, // field has value 0x1

};
template <uint32_t address>
class I2C_BUFOUT : public ReadableWritable<address> {
   public:
    I2C_BUFOUT() : ReadableWritable<address>() {}
    I2C4SCL_t I2C4SCL(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<I2C4SCL_t>(tmp);
}
void I2C4SCL(I2C4SCL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
I2C4SDA_t I2C4SDA(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<I2C4SDA_t>(tmp);
}
void I2C4SDA(I2C4SDA_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
};
}
template<uint32_t base_address>
class SYSCFG{
    public:
    // memory remap register
MEMRM<base_address + 0> MEMRM; 
// peripheral mode configurationregister
PMC<base_address + 4> PMC; 
// external interrupt configuration register1
EXTICR1<base_address + 8> EXTICR1; 
// external interrupt configuration register2
EXTICR2<base_address + 12> EXTICR2; 
// external interrupt configuration register3
EXTICR3<base_address + 16> EXTICR3; 
// external interrupt configuration register4
EXTICR4<base_address + 20> EXTICR4; 
// Compensation cell controlregister
CMPCR<base_address + 32> CMPCR; 
// I2C_BUFOUT
I2C_BUFOUT<base_address + 44> I2C_BUFOUT; 
};
}

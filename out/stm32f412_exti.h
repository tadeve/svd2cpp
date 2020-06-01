#pragma once

#include <cstdint>
#include <reg.h>

namespace EXTI{
namespace IMR{
enum class MR0_t : uint32_t {
    Masked = 0, // Interrupt request line is masked
Unmasked = 1, // Interrupt request line is unmasked

};
template <uint32_t address>
class IMR : public ReadableWritable<address> {
   public:
    IMR() : ReadableWritable<address>() {}
    MR0_t MR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR0(MR0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
MR0_t MR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR1(MR0_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MR0_t MR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR2(MR0_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
MR0_t MR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR3(MR0_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
MR0_t MR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR4(MR0_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
MR0_t MR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR5(MR0_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
MR0_t MR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR6(MR0_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
MR0_t MR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR7(MR0_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
MR0_t MR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR8(MR0_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
MR0_t MR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR9(MR0_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
MR0_t MR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR10(MR0_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
MR0_t MR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR11(MR0_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
MR0_t MR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR12(MR0_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
MR0_t MR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR13(MR0_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
MR0_t MR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR14(MR0_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
MR0_t MR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR15(MR0_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
MR0_t MR16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR16(MR0_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
MR0_t MR17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR17(MR0_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
MR0_t MR18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR18(MR0_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
MR0_t MR19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR19(MR0_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
MR0_t MR20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR20(MR0_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
MR0_t MR21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR21(MR0_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
MR0_t MR22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR22(MR0_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace EMR{
enum class MR0_t : uint32_t {
    Masked = 0, // Interrupt request line is masked
Unmasked = 1, // Interrupt request line is unmasked

};
template <uint32_t address>
class EMR : public ReadableWritable<address> {
   public:
    EMR() : ReadableWritable<address>() {}
    MR0_t MR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR0(MR0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
MR0_t MR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR1(MR0_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
MR0_t MR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR2(MR0_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
MR0_t MR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR3(MR0_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
MR0_t MR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR4(MR0_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
MR0_t MR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR5(MR0_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
MR0_t MR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR6(MR0_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
MR0_t MR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR7(MR0_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
MR0_t MR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR8(MR0_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
MR0_t MR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR9(MR0_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
MR0_t MR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR10(MR0_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
MR0_t MR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR11(MR0_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
MR0_t MR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR12(MR0_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
MR0_t MR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR13(MR0_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
MR0_t MR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR14(MR0_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
MR0_t MR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR15(MR0_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
MR0_t MR16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR16(MR0_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
MR0_t MR17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR17(MR0_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
MR0_t MR18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR18(MR0_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
MR0_t MR19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR19(MR0_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
MR0_t MR20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR20(MR0_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
MR0_t MR21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR21(MR0_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
MR0_t MR22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<MR0_t>(tmp);
}
void MR22(MR0_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace RTSR{
enum class TR0_t : uint32_t {
    Disabled = 0, // Rising edge trigger is disabled
Enabled = 1, // Rising edge trigger is enabled

};
template <uint32_t address>
class RTSR : public ReadableWritable<address> {
   public:
    RTSR() : ReadableWritable<address>() {}
    TR0_t TR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR0(TR0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TR0_t TR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR1(TR0_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TR0_t TR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR2(TR0_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TR0_t TR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR3(TR0_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TR0_t TR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR4(TR0_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TR0_t TR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR5(TR0_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TR0_t TR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR6(TR0_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TR0_t TR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR7(TR0_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TR0_t TR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR8(TR0_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TR0_t TR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR9(TR0_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
TR0_t TR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR10(TR0_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
TR0_t TR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR11(TR0_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TR0_t TR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR12(TR0_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TR0_t TR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR13(TR0_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TR0_t TR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR14(TR0_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TR0_t TR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR15(TR0_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TR0_t TR16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR16(TR0_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TR0_t TR17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR17(TR0_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TR0_t TR18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR18(TR0_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TR0_t TR19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR19(TR0_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
TR0_t TR20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR20(TR0_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
TR0_t TR21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR21(TR0_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TR0_t TR22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR22(TR0_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace FTSR{
enum class TR0_t : uint32_t {
    Disabled = 0, // Falling edge trigger is disabled
Enabled = 1, // Falling edge trigger is enabled

};
template <uint32_t address>
class FTSR : public ReadableWritable<address> {
   public:
    FTSR() : ReadableWritable<address>() {}
    TR0_t TR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR0(TR0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TR0_t TR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR1(TR0_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TR0_t TR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR2(TR0_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TR0_t TR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR3(TR0_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TR0_t TR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR4(TR0_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TR0_t TR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR5(TR0_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TR0_t TR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR6(TR0_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TR0_t TR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR7(TR0_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TR0_t TR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR8(TR0_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
TR0_t TR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR9(TR0_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
TR0_t TR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR10(TR0_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
TR0_t TR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR11(TR0_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
TR0_t TR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR12(TR0_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
TR0_t TR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR13(TR0_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
TR0_t TR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR14(TR0_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
TR0_t TR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR15(TR0_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TR0_t TR16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR16(TR0_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TR0_t TR17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR17(TR0_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
TR0_t TR18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR18(TR0_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TR0_t TR19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR19(TR0_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
TR0_t TR20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR20(TR0_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
TR0_t TR21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR21(TR0_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
TR0_t TR22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<TR0_t>(tmp);
}
void TR22(TR0_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace SWIER{
enum class SWIER0W_t : uint32_t {
    Pend = 1, // Generates an interrupt request

};
template <uint32_t address>
class SWIER : public ReadableWritable<address> {
   public:
    SWIER() : ReadableWritable<address>() {}
    
void SWIER0(SWIER0W_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}

void SWIER1(SWIER0W_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}

void SWIER2(SWIER0W_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}

void SWIER3(SWIER0W_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}

void SWIER4(SWIER0W_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}

void SWIER5(SWIER0W_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}

void SWIER6(SWIER0W_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}

void SWIER7(SWIER0W_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}

void SWIER8(SWIER0W_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}

void SWIER9(SWIER0W_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}

void SWIER10(SWIER0W_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}

void SWIER11(SWIER0W_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}

void SWIER12(SWIER0W_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}

void SWIER13(SWIER0W_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}

void SWIER14(SWIER0W_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}

void SWIER15(SWIER0W_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}

void SWIER16(SWIER0W_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}

void SWIER17(SWIER0W_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}

void SWIER18(SWIER0W_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}

void SWIER19(SWIER0W_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}

void SWIER20(SWIER0W_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}

void SWIER21(SWIER0W_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}

void SWIER22(SWIER0W_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
namespace PR{
enum class PR0R_t : uint32_t {
    NotPending = 0, // No trigger request occurred
Pending = 1, // Selected trigger request occurred

};
enum class PR0W_t : uint32_t {
    Clear = 1, // Clears pending bit

};
template <uint32_t address>
class PR : public ReadableWritable<address> {
   public:
    PR() : ReadableWritable<address>() {}
    PR0R_t PR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR0(PR0W_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
PR0R_t PR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR1(PR0W_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
PR0R_t PR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR2(PR0W_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
PR0R_t PR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR3(PR0W_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
PR0R_t PR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR4(PR0W_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
PR0R_t PR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR5(PR0W_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
PR0R_t PR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR6(PR0W_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
PR0R_t PR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR7(PR0W_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
PR0R_t PR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR8(PR0W_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
PR0R_t PR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR9(PR0W_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
PR0R_t PR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR10(PR0W_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
PR0R_t PR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR11(PR0W_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
PR0R_t PR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR12(PR0W_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
PR0R_t PR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR13(PR0W_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
PR0R_t PR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR14(PR0W_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
PR0R_t PR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR15(PR0W_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
PR0R_t PR16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR16(PR0W_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
PR0R_t PR17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR17(PR0W_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
PR0R_t PR18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR18(PR0W_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
PR0R_t PR19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR19(PR0W_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
PR0R_t PR20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR20(PR0W_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
PR0R_t PR21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR21(PR0W_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
PR0R_t PR22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<PR0R_t>(tmp);
}
void PR22(PR0W_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
};
}
template<uint32_t base_address>
class EXTI{
    public:
    // Interrupt mask register(EXTI_IMR)
IMR<base_address + 0> IMR; 
// Event mask register (EXTI_EMR)
EMR<base_address + 4> EMR; 
// Rising Trigger selection register(EXTI_RTSR)
RTSR<base_address + 8> RTSR; 
// Falling Trigger selection register(EXTI_FTSR)
FTSR<base_address + 12> FTSR; 
// Software interrupt event register(EXTI_SWIER)
SWIER<base_address + 16> SWIER; 
// Pending register (EXTI_PR)
PR<base_address + 20> PR; 
};
}

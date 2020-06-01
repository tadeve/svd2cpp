#pragma once

#include <cstdint>
#include <reg.h>

namespace GPIOF{
namespace MODER{
enum class MODER15_t : uint32_t {
    Input = 0, // Input mode (reset state)
Output = 1, // General purpose output mode
Alternate = 2, // Alternate function mode
Analog = 3, // Analog mode

};
template <uint32_t address>
class MODER : public ReadableWritable<address> {
   public:
    MODER() : ReadableWritable<address>() {}
    MODER15_t MODER15(){
    uint32_t tmp = this->bits_masked(0xc0000000) >> 30;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER15(MODER15_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0xc0000000);
}
MODER15_t MODER14(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER14(MODER15_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
MODER15_t MODER13(){
    uint32_t tmp = this->bits_masked(0xc000000) >> 26;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER13(MODER15_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0xc000000);
}
MODER15_t MODER12(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER12(MODER15_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x3000000);
}
MODER15_t MODER11(){
    uint32_t tmp = this->bits_masked(0xc00000) >> 22;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER11(MODER15_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0xc00000);
}
MODER15_t MODER10(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER10(MODER15_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
MODER15_t MODER9(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER9(MODER15_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
MODER15_t MODER8(){
    uint32_t tmp = this->bits_masked(0x30000) >> 16;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER8(MODER15_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x30000);
}
MODER15_t MODER7(){
    uint32_t tmp = this->bits_masked(0xc000) >> 14;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER7(MODER15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0xc000);
}
MODER15_t MODER6(){
    uint32_t tmp = this->bits_masked(0x3000) >> 12;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER6(MODER15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x3000);
}
MODER15_t MODER5(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER5(MODER15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0xc00);
}
MODER15_t MODER4(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER4(MODER15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
MODER15_t MODER3(){
    uint32_t tmp = this->bits_masked(0xc0) >> 6;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER3(MODER15_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0xc0);
}
MODER15_t MODER2(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER2(MODER15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
MODER15_t MODER1(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER1(MODER15_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
MODER15_t MODER0(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<MODER15_t>(tmp);
}
void MODER0(MODER15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace OTYPER{
enum class OT15_t : uint32_t {
    PushPull = 0, // Output push-pull (reset state)
OpenDrain = 1, // Output open-drain

};
template <uint32_t address>
class OTYPER : public ReadableWritable<address> {
   public:
    OTYPER() : ReadableWritable<address>() {}
    OT15_t OT15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT15(OT15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
OT15_t OT14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT14(OT15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
OT15_t OT13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT13(OT15_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
OT15_t OT12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT12(OT15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
OT15_t OT11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT11(OT15_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
OT15_t OT10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT10(OT15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
OT15_t OT9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT9(OT15_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
OT15_t OT8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT8(OT15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
OT15_t OT7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT7(OT15_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
OT15_t OT6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT6(OT15_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
OT15_t OT5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT5(OT15_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
OT15_t OT4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT4(OT15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
OT15_t OT3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT3(OT15_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
OT15_t OT2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT2(OT15_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
OT15_t OT1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT1(OT15_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
OT15_t OT0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<OT15_t>(tmp);
}
void OT0(OT15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace OSPEEDR{
enum class OSPEEDR15_t : uint32_t {
    LowSpeed = 0, // Low speed
MediumSpeed = 1, // Medium speed
HighSpeed = 2, // High speed
VeryHighSpeed = 3, // Very high speed

};
template <uint32_t address>
class OSPEEDR : public ReadableWritable<address> {
   public:
    OSPEEDR() : ReadableWritable<address>() {}
    OSPEEDR15_t OSPEEDR15(){
    uint32_t tmp = this->bits_masked(0xc0000000) >> 30;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR15(OSPEEDR15_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0xc0000000);
}
OSPEEDR15_t OSPEEDR14(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR14(OSPEEDR15_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
OSPEEDR15_t OSPEEDR13(){
    uint32_t tmp = this->bits_masked(0xc000000) >> 26;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR13(OSPEEDR15_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0xc000000);
}
OSPEEDR15_t OSPEEDR12(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR12(OSPEEDR15_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x3000000);
}
OSPEEDR15_t OSPEEDR11(){
    uint32_t tmp = this->bits_masked(0xc00000) >> 22;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR11(OSPEEDR15_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0xc00000);
}
OSPEEDR15_t OSPEEDR10(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR10(OSPEEDR15_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
OSPEEDR15_t OSPEEDR9(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR9(OSPEEDR15_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
OSPEEDR15_t OSPEEDR8(){
    uint32_t tmp = this->bits_masked(0x30000) >> 16;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR8(OSPEEDR15_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x30000);
}
OSPEEDR15_t OSPEEDR7(){
    uint32_t tmp = this->bits_masked(0xc000) >> 14;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR7(OSPEEDR15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0xc000);
}
OSPEEDR15_t OSPEEDR6(){
    uint32_t tmp = this->bits_masked(0x3000) >> 12;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR6(OSPEEDR15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x3000);
}
OSPEEDR15_t OSPEEDR5(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR5(OSPEEDR15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0xc00);
}
OSPEEDR15_t OSPEEDR4(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR4(OSPEEDR15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
OSPEEDR15_t OSPEEDR3(){
    uint32_t tmp = this->bits_masked(0xc0) >> 6;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR3(OSPEEDR15_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0xc0);
}
OSPEEDR15_t OSPEEDR2(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR2(OSPEEDR15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
OSPEEDR15_t OSPEEDR1(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR1(OSPEEDR15_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
OSPEEDR15_t OSPEEDR0(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<OSPEEDR15_t>(tmp);
}
void OSPEEDR0(OSPEEDR15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace PUPDR{
enum class PUPDR15_t : uint32_t {
    Floating = 0, // No pull-up, pull-down
PullUp = 1, // Pull-up
PullDown = 2, // Pull-down

};
template <uint32_t address>
class PUPDR : public ReadableWritable<address> {
   public:
    PUPDR() : ReadableWritable<address>() {}
    PUPDR15_t PUPDR15(){
    uint32_t tmp = this->bits_masked(0xc0000000) >> 30;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR15(PUPDR15_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0xc0000000);
}
PUPDR15_t PUPDR14(){
    uint32_t tmp = this->bits_masked(0x30000000) >> 28;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR14(PUPDR15_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x30000000);
}
PUPDR15_t PUPDR13(){
    uint32_t tmp = this->bits_masked(0xc000000) >> 26;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR13(PUPDR15_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0xc000000);
}
PUPDR15_t PUPDR12(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR12(PUPDR15_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x3000000);
}
PUPDR15_t PUPDR11(){
    uint32_t tmp = this->bits_masked(0xc00000) >> 22;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR11(PUPDR15_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0xc00000);
}
PUPDR15_t PUPDR10(){
    uint32_t tmp = this->bits_masked(0x300000) >> 20;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR10(PUPDR15_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x300000);
}
PUPDR15_t PUPDR9(){
    uint32_t tmp = this->bits_masked(0xc0000) >> 18;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR9(PUPDR15_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0xc0000);
}
PUPDR15_t PUPDR8(){
    uint32_t tmp = this->bits_masked(0x30000) >> 16;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR8(PUPDR15_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x30000);
}
PUPDR15_t PUPDR7(){
    uint32_t tmp = this->bits_masked(0xc000) >> 14;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR7(PUPDR15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0xc000);
}
PUPDR15_t PUPDR6(){
    uint32_t tmp = this->bits_masked(0x3000) >> 12;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR6(PUPDR15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x3000);
}
PUPDR15_t PUPDR5(){
    uint32_t tmp = this->bits_masked(0xc00) >> 10;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR5(PUPDR15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0xc00);
}
PUPDR15_t PUPDR4(){
    uint32_t tmp = this->bits_masked(0x300) >> 8;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR4(PUPDR15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x300);
}
PUPDR15_t PUPDR3(){
    uint32_t tmp = this->bits_masked(0xc0) >> 6;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR3(PUPDR15_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0xc0);
}
PUPDR15_t PUPDR2(){
    uint32_t tmp = this->bits_masked(0x30) >> 4;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR2(PUPDR15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x30);
}
PUPDR15_t PUPDR1(){
    uint32_t tmp = this->bits_masked(0xc) >> 2;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR1(PUPDR15_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0xc);
}
PUPDR15_t PUPDR0(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<PUPDR15_t>(tmp);
}
void PUPDR0(PUPDR15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3);
}
};
}
namespace IDR{
enum class IDR15_t : uint32_t {
    High = 1, // Input is logic high
Low = 0, // Input is logic low

};
template <uint32_t address>
class IDR : public Readable<address> {
   public:
    IDR() : Readable<address>() {}
    IDR15_t IDR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR15(IDR15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
IDR15_t IDR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR14(IDR15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
IDR15_t IDR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR13(IDR15_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
IDR15_t IDR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR12(IDR15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
IDR15_t IDR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR11(IDR15_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
IDR15_t IDR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR10(IDR15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
IDR15_t IDR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR9(IDR15_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
IDR15_t IDR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR8(IDR15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
IDR15_t IDR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR7(IDR15_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
IDR15_t IDR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR6(IDR15_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
IDR15_t IDR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR5(IDR15_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
IDR15_t IDR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR4(IDR15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
IDR15_t IDR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR3(IDR15_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
IDR15_t IDR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR2(IDR15_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
IDR15_t IDR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR1(IDR15_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
IDR15_t IDR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<IDR15_t>(tmp);
}
void IDR0(IDR15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace ODR{
enum class ODR15_t : uint32_t {
    High = 1, // Set output to logic high
Low = 0, // Set output to logic low

};
template <uint32_t address>
class ODR : public ReadableWritable<address> {
   public:
    ODR() : ReadableWritable<address>() {}
    ODR15_t ODR15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR15(ODR15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
ODR15_t ODR14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR14(ODR15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
ODR15_t ODR13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR13(ODR15_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
ODR15_t ODR12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR12(ODR15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
ODR15_t ODR11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR11(ODR15_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
ODR15_t ODR10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR10(ODR15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
ODR15_t ODR9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR9(ODR15_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
ODR15_t ODR8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR8(ODR15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
ODR15_t ODR7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR7(ODR15_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
ODR15_t ODR6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR6(ODR15_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
ODR15_t ODR5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR5(ODR15_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
ODR15_t ODR4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR4(ODR15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ODR15_t ODR3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR3(ODR15_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
ODR15_t ODR2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR2(ODR15_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
ODR15_t ODR1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR1(ODR15_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
ODR15_t ODR0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ODR15_t>(tmp);
}
void ODR0(ODR15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace BSRR{
enum class BR15W_t : uint32_t {
    Reset = 1, // Resets the corresponding ODRx bit

};
enum class BS15W_t : uint32_t {
    Set = 1, // Sets the corresponding ODRx bit

};
template <uint32_t address>
class BSRR : public Writable<address> {
   public:
    BSRR() : Writable<address>() {}
    
void BR15(BR15W_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}

void BR14(BR15W_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}

void BR13(BR15W_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}

void BR12(BR15W_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}

void BR11(BR15W_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}

void BR10(BR15W_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}

void BR9(BR15W_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}

void BR8(BR15W_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}

void BR7(BR15W_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}

void BR6(BR15W_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}

void BR5(BR15W_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}

void BR4(BR15W_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}

void BR3(BR15W_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}

void BR2(BR15W_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}

void BR1(BR15W_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}

void BR0(BR15W_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}

void BS15(BS15W_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}

void BS14(BS15W_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}

void BS13(BS15W_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}

void BS12(BS15W_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}

void BS11(BS15W_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}

void BS10(BS15W_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}

void BS9(BS15W_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}

void BS8(BS15W_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}

void BS7(BS15W_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}

void BS6(BS15W_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}

void BS5(BS15W_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}

void BS4(BS15W_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}

void BS3(BS15W_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}

void BS2(BS15W_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}

void BS1(BS15W_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}

void BS0(BS15W_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace LCKR{
enum class LCK9_t : uint32_t {
    Unlocked = 0, // Port configuration not locked
Locked = 1, // Port configuration locked

};
enum class LCKK_t : uint32_t {
    NotActive = 0, // Port configuration lock key not active
Active = 1, // Port configuration lock key active

};
enum class LCK15_t : uint32_t {
    Unlocked = 0, // Port configuration not locked
Locked = 1, // Port configuration locked

};
template <uint32_t address>
class LCKR : public ReadableWritable<address> {
   public:
    LCKR() : ReadableWritable<address>() {}
    LCKK_t LCKK(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<LCKK_t>(tmp);
}
void LCKK(LCKK_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
LCK15_t LCK15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<LCK15_t>(tmp);
}
void LCK15(LCK15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LCK15_t LCK14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<LCK15_t>(tmp);
}
void LCK14(LCK15_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
LCK15_t LCK13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<LCK15_t>(tmp);
}
void LCK13(LCK15_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
LCK15_t LCK12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<LCK15_t>(tmp);
}
void LCK12(LCK15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
LCK15_t LCK11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<LCK15_t>(tmp);
}
void LCK11(LCK15_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
LCK15_t LCK10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<LCK15_t>(tmp);
}
void LCK10(LCK15_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
LCK9_t LCK9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK9(LCK9_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
LCK9_t LCK8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK8(LCK9_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
LCK9_t LCK7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK7(LCK9_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
LCK9_t LCK6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK6(LCK9_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
LCK9_t LCK5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK5(LCK9_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
LCK9_t LCK4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK4(LCK9_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
LCK9_t LCK3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK3(LCK9_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
LCK9_t LCK2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK2(LCK9_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
LCK9_t LCK1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK1(LCK9_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
LCK9_t LCK0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<LCK9_t>(tmp);
}
void LCK0(LCK9_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace AFRL{
enum class AFRL7_t : uint32_t {
    AF0 = 0, // AF0
AF1 = 1, // AF1
AF2 = 2, // AF2
AF3 = 3, // AF3
AF4 = 4, // AF4
AF5 = 5, // AF5
AF6 = 6, // AF6
AF7 = 7, // AF7
AF8 = 8, // AF8
AF9 = 9, // AF9
AF10 = 10, // AF10
AF11 = 11, // AF11
AF12 = 12, // AF12
AF13 = 13, // AF13
AF14 = 14, // AF14
AF15 = 15, // AF15

};
template <uint32_t address>
class AFRL : public ReadableWritable<address> {
   public:
    AFRL() : ReadableWritable<address>() {}
    AFRL7_t AFRL7(){
    uint32_t tmp = this->bits_masked(0xf0000000) >> 28;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL7(AFRL7_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0xf0000000);
}
AFRL7_t AFRL6(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL6(AFRL7_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
AFRL7_t AFRL5(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL5(AFRL7_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
AFRL7_t AFRL4(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL4(AFRL7_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
AFRL7_t AFRL3(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL3(AFRL7_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
AFRL7_t AFRL2(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL2(AFRL7_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
AFRL7_t AFRL1(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL1(AFRL7_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
AFRL7_t AFRL0(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<AFRL7_t>(tmp);
}
void AFRL0(AFRL7_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
namespace AFRH{
enum class AFRH15_t : uint32_t {
    AF0 = 0, // AF0
AF1 = 1, // AF1
AF2 = 2, // AF2
AF3 = 3, // AF3
AF4 = 4, // AF4
AF5 = 5, // AF5
AF6 = 6, // AF6
AF7 = 7, // AF7
AF8 = 8, // AF8
AF9 = 9, // AF9
AF10 = 10, // AF10
AF11 = 11, // AF11
AF12 = 12, // AF12
AF13 = 13, // AF13
AF14 = 14, // AF14
AF15 = 15, // AF15

};
template <uint32_t address>
class AFRH : public ReadableWritable<address> {
   public:
    AFRH() : ReadableWritable<address>() {}
    AFRH15_t AFRH15(){
    uint32_t tmp = this->bits_masked(0xf0000000) >> 28;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH15(AFRH15_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0xf0000000);
}
AFRH15_t AFRH14(){
    uint32_t tmp = this->bits_masked(0xf000000) >> 24;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH14(AFRH15_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xf000000);
}
AFRH15_t AFRH13(){
    uint32_t tmp = this->bits_masked(0xf00000) >> 20;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH13(AFRH15_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0xf00000);
}
AFRH15_t AFRH12(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH12(AFRH15_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
AFRH15_t AFRH11(){
    uint32_t tmp = this->bits_masked(0xf000) >> 12;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH11(AFRH15_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0xf000);
}
AFRH15_t AFRH10(){
    uint32_t tmp = this->bits_masked(0xf00) >> 8;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH10(AFRH15_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xf00);
}
AFRH15_t AFRH9(){
    uint32_t tmp = this->bits_masked(0xf0) >> 4;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH9(AFRH15_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0xf0);
}
AFRH15_t AFRH8(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<AFRH15_t>(tmp);
}
void AFRH8(AFRH15_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
};
}
template<uint32_t base_address>
class GPIO{
    public:
    // GPIO port mode register
MODER<base_address + 0> MODER; 
// GPIO port output type register
OTYPER<base_address + 4> OTYPER; 
// GPIO port output speedregister
OSPEEDR<base_address + 8> OSPEEDR; 
// GPIO port pull-up/pull-downregister
PUPDR<base_address + 12> PUPDR; 
// GPIO port input data register
IDR<base_address + 16> IDR; 
// GPIO port output data register
ODR<base_address + 20> ODR; 
// GPIO port bit set/resetregister
BSRR<base_address + 24> BSRR; 
// GPIO port configuration lockregister
LCKR<base_address + 28> LCKR; 
// GPIO alternate function lowregister
AFRL<base_address + 32> AFRL; 
// GPIO alternate function highregister
AFRH<base_address + 36> AFRH; 
};
}

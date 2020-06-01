#pragma once

#include <cstdint>
#include <reg.h>

namespace NVIC{
namespace ISER0{

template <uint32_t address>
class ISER0 : public ReadableWritable<address> {
   public:
    ISER0() : ReadableWritable<address>() {}
    uint32_t SETENA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void SETENA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ISER1{

template <uint32_t address>
class ISER1 : public ReadableWritable<address> {
   public:
    ISER1() : ReadableWritable<address>() {}
    uint32_t SETENA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void SETENA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ISER2{

template <uint32_t address>
class ISER2 : public ReadableWritable<address> {
   public:
    ISER2() : ReadableWritable<address>() {}
    uint32_t SETENA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void SETENA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ICER0{

template <uint32_t address>
class ICER0 : public ReadableWritable<address> {
   public:
    ICER0() : ReadableWritable<address>() {}
    uint32_t CLRENA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CLRENA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ICER1{

template <uint32_t address>
class ICER1 : public ReadableWritable<address> {
   public:
    ICER1() : ReadableWritable<address>() {}
    uint32_t CLRENA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CLRENA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ICER2{

template <uint32_t address>
class ICER2 : public ReadableWritable<address> {
   public:
    ICER2() : ReadableWritable<address>() {}
    uint32_t CLRENA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CLRENA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ISPR0{

template <uint32_t address>
class ISPR0 : public ReadableWritable<address> {
   public:
    ISPR0() : ReadableWritable<address>() {}
    uint32_t SETPEND(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void SETPEND(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ISPR1{

template <uint32_t address>
class ISPR1 : public ReadableWritable<address> {
   public:
    ISPR1() : ReadableWritable<address>() {}
    uint32_t SETPEND(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void SETPEND(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ISPR2{

template <uint32_t address>
class ISPR2 : public ReadableWritable<address> {
   public:
    ISPR2() : ReadableWritable<address>() {}
    uint32_t SETPEND(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void SETPEND(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ICPR0{

template <uint32_t address>
class ICPR0 : public ReadableWritable<address> {
   public:
    ICPR0() : ReadableWritable<address>() {}
    uint32_t CLRPEND(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CLRPEND(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ICPR1{

template <uint32_t address>
class ICPR1 : public ReadableWritable<address> {
   public:
    ICPR1() : ReadableWritable<address>() {}
    uint32_t CLRPEND(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CLRPEND(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace ICPR2{

template <uint32_t address>
class ICPR2 : public ReadableWritable<address> {
   public:
    ICPR2() : ReadableWritable<address>() {}
    uint32_t CLRPEND(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CLRPEND(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace IABR0{

template <uint32_t address>
class IABR0 : public Readable<address> {
   public:
    IABR0() : Readable<address>() {}
    uint32_t ACTIVE(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void ACTIVE(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace IABR1{

template <uint32_t address>
class IABR1 : public Readable<address> {
   public:
    IABR1() : Readable<address>() {}
    uint32_t ACTIVE(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void ACTIVE(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace IABR2{

template <uint32_t address>
class IABR2 : public Readable<address> {
   public:
    IABR2() : Readable<address>() {}
    uint32_t ACTIVE(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void ACTIVE(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace IPR0{

template <uint32_t address>
class IPR0 : public ReadableWritable<address> {
   public:
    IPR0() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR1{

template <uint32_t address>
class IPR1 : public ReadableWritable<address> {
   public:
    IPR1() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR2{

template <uint32_t address>
class IPR2 : public ReadableWritable<address> {
   public:
    IPR2() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR3{

template <uint32_t address>
class IPR3 : public ReadableWritable<address> {
   public:
    IPR3() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR4{

template <uint32_t address>
class IPR4 : public ReadableWritable<address> {
   public:
    IPR4() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR5{

template <uint32_t address>
class IPR5 : public ReadableWritable<address> {
   public:
    IPR5() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR6{

template <uint32_t address>
class IPR6 : public ReadableWritable<address> {
   public:
    IPR6() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR7{

template <uint32_t address>
class IPR7 : public ReadableWritable<address> {
   public:
    IPR7() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR8{

template <uint32_t address>
class IPR8 : public ReadableWritable<address> {
   public:
    IPR8() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR9{

template <uint32_t address>
class IPR9 : public ReadableWritable<address> {
   public:
    IPR9() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR10{

template <uint32_t address>
class IPR10 : public ReadableWritable<address> {
   public:
    IPR10() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR11{

template <uint32_t address>
class IPR11 : public ReadableWritable<address> {
   public:
    IPR11() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR12{

template <uint32_t address>
class IPR12 : public ReadableWritable<address> {
   public:
    IPR12() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR13{

template <uint32_t address>
class IPR13 : public ReadableWritable<address> {
   public:
    IPR13() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR14{

template <uint32_t address>
class IPR14 : public ReadableWritable<address> {
   public:
    IPR14() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR15{

template <uint32_t address>
class IPR15 : public ReadableWritable<address> {
   public:
    IPR15() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR16{

template <uint32_t address>
class IPR16 : public ReadableWritable<address> {
   public:
    IPR16() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR17{

template <uint32_t address>
class IPR17 : public ReadableWritable<address> {
   public:
    IPR17() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR18{

template <uint32_t address>
class IPR18 : public ReadableWritable<address> {
   public:
    IPR18() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
namespace IPR19{

template <uint32_t address>
class IPR19 : public ReadableWritable<address> {
   public:
    IPR19() : ReadableWritable<address>() {}
    uint8_t IPR_N0(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N0(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
uint8_t IPR_N1(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N1(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
uint8_t IPR_N2(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N2(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t IPR_N3(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
void IPR_N3(uint8_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0xff000000);
}
};
}
template<uint32_t base_address>
class NVIC{
    public:
    // Interrupt Set-Enable Register
ISER0<base_address + 0> ISER0; 
// Interrupt Set-Enable Register
ISER1<base_address + 4> ISER1; 
// Interrupt Set-Enable Register
ISER2<base_address + 8> ISER2; 
// Interrupt Clear-EnableRegister
ICER0<base_address + 128> ICER0; 
// Interrupt Clear-EnableRegister
ICER1<base_address + 132> ICER1; 
// Interrupt Clear-EnableRegister
ICER2<base_address + 136> ICER2; 
// Interrupt Set-Pending Register
ISPR0<base_address + 256> ISPR0; 
// Interrupt Set-Pending Register
ISPR1<base_address + 260> ISPR1; 
// Interrupt Set-Pending Register
ISPR2<base_address + 264> ISPR2; 
// Interrupt Clear-PendingRegister
ICPR0<base_address + 384> ICPR0; 
// Interrupt Clear-PendingRegister
ICPR1<base_address + 388> ICPR1; 
// Interrupt Clear-PendingRegister
ICPR2<base_address + 392> ICPR2; 
// Interrupt Active Bit Register
IABR0<base_address + 512> IABR0; 
// Interrupt Active Bit Register
IABR1<base_address + 516> IABR1; 
// Interrupt Active Bit Register
IABR2<base_address + 520> IABR2; 
// Interrupt Priority Register
IPR0<base_address + 768> IPR0; 
// Interrupt Priority Register
IPR1<base_address + 772> IPR1; 
// Interrupt Priority Register
IPR2<base_address + 776> IPR2; 
// Interrupt Priority Register
IPR3<base_address + 780> IPR3; 
// Interrupt Priority Register
IPR4<base_address + 784> IPR4; 
// Interrupt Priority Register
IPR5<base_address + 788> IPR5; 
// Interrupt Priority Register
IPR6<base_address + 792> IPR6; 
// Interrupt Priority Register
IPR7<base_address + 796> IPR7; 
// Interrupt Priority Register
IPR8<base_address + 800> IPR8; 
// Interrupt Priority Register
IPR9<base_address + 804> IPR9; 
// Interrupt Priority Register
IPR10<base_address + 808> IPR10; 
// Interrupt Priority Register
IPR11<base_address + 812> IPR11; 
// Interrupt Priority Register
IPR12<base_address + 816> IPR12; 
// Interrupt Priority Register
IPR13<base_address + 820> IPR13; 
// Interrupt Priority Register
IPR14<base_address + 824> IPR14; 
// Interrupt Priority Register
IPR15<base_address + 828> IPR15; 
// Interrupt Priority Register
IPR16<base_address + 832> IPR16; 
// Interrupt Priority Register
IPR17<base_address + 836> IPR17; 
// Interrupt Priority Register
IPR18<base_address + 840> IPR18; 
// Interrupt Priority Register
IPR19<base_address + 844> IPR19; 
};
}

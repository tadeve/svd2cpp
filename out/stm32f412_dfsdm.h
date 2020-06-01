#pragma once

#include <cstdint>
#include <reg.h>

namespace DFSDM{
namespace DFSDM0_CR2{

enum class AWDIE_t : uint32_t {
    AWDIE_0 = 0, // field has value 0x0
AWDIE_1 = 1, // field has value 0x1

};
enum class ROVRIE_t : uint32_t {
    ROVRIE_0 = 0, // field has value 0x0
ROVRIE_1 = 1, // field has value 0x1

};
enum class SCDIE_t : uint32_t {
    SCDIE_0 = 0, // field has value 0x0
SCDIE_1 = 1, // field has value 0x1

};
enum class CKABIE_t : uint32_t {
    CKABIE_0 = 0, // field has value 0x0
CKABIE_1 = 1, // field has value 0x1

};
enum class REOCIE_t : uint32_t {
    REOCIE_0 = 0, // field has value 0x0
REOCIE_1 = 1, // field has value 0x1

};
enum class JOVRIE_t : uint32_t {
    JOVRIE_0 = 0, // field has value 0x0
JOVRIE_1 = 1, // field has value 0x1

};
enum class JEOCIE_t : uint32_t {
    JEOCIE_0 = 0, // field has value 0x0
JEOCIE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DFSDM0_CR2 : public ReadableWritable<address> {
   public:
    DFSDM0_CR2() : ReadableWritable<address>() {}
    uint8_t AWDCH(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void AWDCH(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t EXCH(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void EXCH(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
CKABIE_t CKABIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CKABIE_t>(tmp);
}
void CKABIE(CKABIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SCDIE_t SCDIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<SCDIE_t>(tmp);
}
void SCDIE(SCDIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
AWDIE_t AWDIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<AWDIE_t>(tmp);
}
void AWDIE(AWDIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ROVRIE_t ROVRIE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ROVRIE_t>(tmp);
}
void ROVRIE(ROVRIE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
JOVRIE_t JOVRIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<JOVRIE_t>(tmp);
}
void JOVRIE(JOVRIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
REOCIE_t REOCIE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<REOCIE_t>(tmp);
}
void REOCIE(REOCIE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
JEOCIE_t JEOCIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<JEOCIE_t>(tmp);
}
void JEOCIE(JEOCIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DFSDM1_CR2{

enum class AWDIE_t : uint32_t {
    AWDIE_0 = 0, // field has value 0x0
AWDIE_1 = 1, // field has value 0x1

};
enum class ROVRIE_t : uint32_t {
    ROVRIE_0 = 0, // field has value 0x0
ROVRIE_1 = 1, // field has value 0x1

};
enum class SCDIE_t : uint32_t {
    SCDIE_0 = 0, // field has value 0x0
SCDIE_1 = 1, // field has value 0x1

};
enum class CKABIE_t : uint32_t {
    CKABIE_0 = 0, // field has value 0x0
CKABIE_1 = 1, // field has value 0x1

};
enum class REOCIE_t : uint32_t {
    REOCIE_0 = 0, // field has value 0x0
REOCIE_1 = 1, // field has value 0x1

};
enum class JOVRIE_t : uint32_t {
    JOVRIE_0 = 0, // field has value 0x0
JOVRIE_1 = 1, // field has value 0x1

};
enum class JEOCIE_t : uint32_t {
    JEOCIE_0 = 0, // field has value 0x0
JEOCIE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DFSDM1_CR2 : public ReadableWritable<address> {
   public:
    DFSDM1_CR2() : ReadableWritable<address>() {}
    uint8_t AWDCH(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void AWDCH(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t EXCH(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void EXCH(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
CKABIE_t CKABIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CKABIE_t>(tmp);
}
void CKABIE(CKABIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SCDIE_t SCDIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<SCDIE_t>(tmp);
}
void SCDIE(SCDIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
AWDIE_t AWDIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<AWDIE_t>(tmp);
}
void AWDIE(AWDIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ROVRIE_t ROVRIE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ROVRIE_t>(tmp);
}
void ROVRIE(ROVRIE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
JOVRIE_t JOVRIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<JOVRIE_t>(tmp);
}
void JOVRIE(JOVRIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
REOCIE_t REOCIE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<REOCIE_t>(tmp);
}
void REOCIE(REOCIE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
JEOCIE_t JEOCIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<JEOCIE_t>(tmp);
}
void JEOCIE(JEOCIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DFSDM2_CR2{

enum class AWDIE_t : uint32_t {
    AWDIE_0 = 0, // field has value 0x0
AWDIE_1 = 1, // field has value 0x1

};
enum class ROVRIE_t : uint32_t {
    ROVRIE_0 = 0, // field has value 0x0
ROVRIE_1 = 1, // field has value 0x1

};
enum class SCDIE_t : uint32_t {
    SCDIE_0 = 0, // field has value 0x0
SCDIE_1 = 1, // field has value 0x1

};
enum class CKABIE_t : uint32_t {
    CKABIE_0 = 0, // field has value 0x0
CKABIE_1 = 1, // field has value 0x1

};
enum class REOCIE_t : uint32_t {
    REOCIE_0 = 0, // field has value 0x0
REOCIE_1 = 1, // field has value 0x1

};
enum class JOVRIE_t : uint32_t {
    JOVRIE_0 = 0, // field has value 0x0
JOVRIE_1 = 1, // field has value 0x1

};
enum class JEOCIE_t : uint32_t {
    JEOCIE_0 = 0, // field has value 0x0
JEOCIE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DFSDM2_CR2 : public ReadableWritable<address> {
   public:
    DFSDM2_CR2() : ReadableWritable<address>() {}
    uint8_t AWDCH(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void AWDCH(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t EXCH(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void EXCH(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
CKABIE_t CKABIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CKABIE_t>(tmp);
}
void CKABIE(CKABIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SCDIE_t SCDIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<SCDIE_t>(tmp);
}
void SCDIE(SCDIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
AWDIE_t AWDIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<AWDIE_t>(tmp);
}
void AWDIE(AWDIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ROVRIE_t ROVRIE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ROVRIE_t>(tmp);
}
void ROVRIE(ROVRIE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
JOVRIE_t JOVRIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<JOVRIE_t>(tmp);
}
void JOVRIE(JOVRIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
REOCIE_t REOCIE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<REOCIE_t>(tmp);
}
void REOCIE(REOCIE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
JEOCIE_t JEOCIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<JEOCIE_t>(tmp);
}
void JEOCIE(JEOCIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace DFSDM3_CR2{

enum class AWDIE_t : uint32_t {
    AWDIE_0 = 0, // field has value 0x0
AWDIE_1 = 1, // field has value 0x1

};
enum class ROVRIE_t : uint32_t {
    ROVRIE_0 = 0, // field has value 0x0
ROVRIE_1 = 1, // field has value 0x1

};
enum class SCDIE_t : uint32_t {
    SCDIE_0 = 0, // field has value 0x0
SCDIE_1 = 1, // field has value 0x1

};
enum class CKABIE_t : uint32_t {
    CKABIE_0 = 0, // field has value 0x0
CKABIE_1 = 1, // field has value 0x1

};
enum class REOCIE_t : uint32_t {
    REOCIE_0 = 0, // field has value 0x0
REOCIE_1 = 1, // field has value 0x1

};
enum class JOVRIE_t : uint32_t {
    JOVRIE_0 = 0, // field has value 0x0
JOVRIE_1 = 1, // field has value 0x1

};
enum class JEOCIE_t : uint32_t {
    JEOCIE_0 = 0, // field has value 0x0
JEOCIE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class DFSDM3_CR2 : public ReadableWritable<address> {
   public:
    DFSDM3_CR2() : ReadableWritable<address>() {}
    uint8_t AWDCH(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void AWDCH(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
uint8_t EXCH(){
    uint32_t tmp = this->bits_masked(0xff00) >> 8;
    return reinterpret_cast<uint8_t>(tmp);
}
void EXCH(uint8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0xff00);
}
CKABIE_t CKABIE(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CKABIE_t>(tmp);
}
void CKABIE(CKABIE_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
SCDIE_t SCDIE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<SCDIE_t>(tmp);
}
void SCDIE(SCDIE_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
AWDIE_t AWDIE(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<AWDIE_t>(tmp);
}
void AWDIE(AWDIE_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
ROVRIE_t ROVRIE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<ROVRIE_t>(tmp);
}
void ROVRIE(ROVRIE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
JOVRIE_t JOVRIE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<JOVRIE_t>(tmp);
}
void JOVRIE(JOVRIE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
REOCIE_t REOCIE(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<REOCIE_t>(tmp);
}
void REOCIE(REOCIE_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
JEOCIE_t JEOCIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<JEOCIE_t>(tmp);
}
void JEOCIE(JEOCIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
template<uint32_t base_address>
class DFSDM{
    public:
    // control register 2
DFSDM0_CR2<base_address + 260> DFSDM0_CR2; 
// control register 2
DFSDM1_CR2<base_address + 516> DFSDM1_CR2; 
// control register 2
DFSDM2_CR2<base_address + 772> DFSDM2_CR2; 
// control register 2
DFSDM3_CR2<base_address + 1028> DFSDM3_CR2; 
};
}

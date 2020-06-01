#pragma once

#include <cstdint>
#include <reg.h>

namespace RNG{
namespace CR{
enum class IE_t : uint32_t {
    IE_0 = 0, // field has value 0x0
IE_1 = 1, // field has value 0x1

};
enum class RNGEN_t : uint32_t {
    RNGEN_0 = 0, // field has value 0x0
RNGEN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CR : public ReadableWritable<address> {
   public:
    CR() : ReadableWritable<address>() {}
    IE_t IE(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<IE_t>(tmp);
}
void IE(IE_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
RNGEN_t RNGEN(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<RNGEN_t>(tmp);
}
void RNGEN(RNGEN_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
};
}
namespace SR{
enum class SEIS_t : uint32_t {
    SEIS_0 = 0, // field has value 0x0
SEIS_1 = 1, // field has value 0x1

};
enum class CEIS_t : uint32_t {
    CEIS_0 = 0, // field has value 0x0
CEIS_1 = 1, // field has value 0x1

};
enum class DRDY_t : uint32_t {
    DRDY_0 = 0, // field has value 0x0
DRDY_1 = 1, // field has value 0x1

};
enum class CECS_t : uint32_t {
    CECS_0 = 0, // field has value 0x0
CECS_1 = 1, // field has value 0x1

};
enum class SECS_t : uint32_t {
    SECS_0 = 0, // field has value 0x0
SECS_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR : public ReadableWritable<address> {
   public:
    SR() : ReadableWritable<address>() {}
    SEIS_t SEIS(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<SEIS_t>(tmp);
}
void SEIS(SEIS_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
CEIS_t CEIS(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<CEIS_t>(tmp);
}
void CEIS(CEIS_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
SECS_t SECS(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<SECS_t>(tmp);
}
CECS_t CECS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<CECS_t>(tmp);
}
DRDY_t DRDY(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DRDY_t>(tmp);
}
};
}
namespace DR{

template <uint32_t address>
class DR : public Readable<address> {
   public:
    DR() : Readable<address>() {}
    uint32_t RNDATA(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void RNDATA(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
template<uint32_t base_address>
class RNG{
    public:
    // control register
CR<base_address + 0> CR; 
// status register
SR<base_address + 4> SR; 
// data register
DR<base_address + 8> DR; 
};
}

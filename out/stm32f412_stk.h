#pragma once

#include <cstdint>
#include <reg.h>

namespace STK{
namespace CTRL{
enum class CLKSOURCE_t : uint32_t {
    CLKSOURCE_0 = 0, // field has value 0x0
CLKSOURCE_1 = 1, // field has value 0x1

};
enum class COUNTFLAG_t : uint32_t {
    COUNTFLAG_0 = 0, // field has value 0x0
COUNTFLAG_1 = 1, // field has value 0x1

};
enum class ENABLE_t : uint32_t {
    ENABLE_0 = 0, // field has value 0x0
ENABLE_1 = 1, // field has value 0x1

};
enum class TICKINT_t : uint32_t {
    TICKINT_0 = 0, // field has value 0x0
TICKINT_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CTRL : public ReadableWritable<address> {
   public:
    CTRL() : ReadableWritable<address>() {}
    ENABLE_t ENABLE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<ENABLE_t>(tmp);
}
void ENABLE(ENABLE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TICKINT_t TICKINT(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TICKINT_t>(tmp);
}
void TICKINT(TICKINT_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
CLKSOURCE_t CLKSOURCE(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CLKSOURCE_t>(tmp);
}
void CLKSOURCE(CLKSOURCE_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
COUNTFLAG_t COUNTFLAG(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<COUNTFLAG_t>(tmp);
}
void COUNTFLAG(COUNTFLAG_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
};
}
namespace LOAD{

template <uint32_t address>
class LOAD : public ReadableWritable<address> {
   public:
    LOAD() : ReadableWritable<address>() {}
    uint32_t RELOAD(){
    uint32_t tmp = this->bits_masked(0xffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void RELOAD(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffff);
}
};
}
namespace VAL{

template <uint32_t address>
class VAL : public ReadableWritable<address> {
   public:
    VAL() : ReadableWritable<address>() {}
    uint32_t CURRENT(){
    uint32_t tmp = this->bits_masked(0xffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void CURRENT(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffff);
}
};
}
namespace CALIB{

enum class NOREF_t : uint32_t {
    NOREF_0 = 0, // field has value 0x0
NOREF_1 = 1, // field has value 0x1

};
enum class SKEW_t : uint32_t {
    SKEW_0 = 0, // field has value 0x0
SKEW_1 = 1, // field has value 0x1

};
template <uint32_t address>
class CALIB : public ReadableWritable<address> {
   public:
    CALIB() : ReadableWritable<address>() {}
    uint32_t TENMS(){
    uint32_t tmp = this->bits_masked(0xffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void TENMS(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffff);
}
SKEW_t SKEW(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<SKEW_t>(tmp);
}
void SKEW(SKEW_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
NOREF_t NOREF(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<NOREF_t>(tmp);
}
void NOREF(NOREF_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
template<uint32_t base_address>
class STK{
    public:
    // SysTick control and statusregister
CTRL<base_address + 0> CTRL; 
// SysTick reload value register
LOAD<base_address + 4> LOAD; 
// SysTick current value register
VAL<base_address + 8> VAL; 
// SysTick calibration valueregister
CALIB<base_address + 12> CALIB; 
};
}

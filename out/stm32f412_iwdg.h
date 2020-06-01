#pragma once

#include <cstdint>
#include <reg.h>

namespace IWDG{
namespace KR{
enum class KEY_t : uint32_t {
    Enable = 21845, // Enable access to PR, RLR and WINR registers (0x5555)
Reset = 43690, // Reset the watchdog value (0xAAAA)
Start = 52428, // Start the watchdog (0xCCCC)

};
template <uint32_t address>
class KR : public Writable<address> {
   public:
    KR() : Writable<address>() {}
    KEY_t KEY(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<KEY_t>(tmp);
}
void KEY(KEY_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace PR{
enum class PR_t : uint32_t {
    DivideBy4 = 0, // Divider /4
DivideBy8 = 1, // Divider /8
DivideBy16 = 2, // Divider /16
DivideBy32 = 3, // Divider /32
DivideBy64 = 4, // Divider /64
DivideBy128 = 5, // Divider /128
DivideBy256 = 6, // Divider /256
DivideBy256bis = 7, // Divider /256

};
template <uint32_t address>
class PR : public ReadableWritable<address> {
   public:
    PR() : ReadableWritable<address>() {}
    PR_t PR(){
    uint32_t tmp = this->bits_masked(0x7) >> 0;
    return reinterpret_cast<PR_t>(tmp);
}
void PR(PR_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7);
}
};
}
namespace RLR{

template <uint32_t address>
class RLR : public ReadableWritable<address> {
   public:
    RLR() : ReadableWritable<address>() {}
    uint16_t RL(){
    uint32_t tmp = this->bits_masked(0xfff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void RL(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xfff);
}
};
}
namespace SR{
enum class RVU_t : uint32_t {
    RVU_0 = 0, // field has value 0x0
RVU_1 = 1, // field has value 0x1

};
enum class PVU_t : uint32_t {
    PVU_0 = 0, // field has value 0x0
PVU_1 = 1, // field has value 0x1

};
template <uint32_t address>
class SR : public Readable<address> {
   public:
    SR() : Readable<address>() {}
    RVU_t RVU(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<RVU_t>(tmp);
}
void RVU(RVU_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
PVU_t PVU(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<PVU_t>(tmp);
}
void PVU(PVU_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
template<uint32_t base_address>
class IWDG{
    public:
    // Key register
KR<base_address + 0> KR; 
// Prescaler register
PR<base_address + 4> PR; 
// Reload register
RLR<base_address + 8> RLR; 
// Status register
SR<base_address + 12> SR; 
};
}

#pragma once

#include <cstdint>
#include <reg.h>

namespace SCB_ACTRL{
namespace ACTRL{
enum class DISDEFWBUF_t : uint32_t {
    DISDEFWBUF_0 = 0, // field has value 0x0
DISDEFWBUF_1 = 1, // field has value 0x1

};
enum class DISFOLD_t : uint32_t {
    DISFOLD_0 = 0, // field has value 0x0
DISFOLD_1 = 1, // field has value 0x1

};
enum class DISFPCA_t : uint32_t {
    DISFPCA_0 = 0, // field has value 0x0
DISFPCA_1 = 1, // field has value 0x1

};
enum class DISOOFP_t : uint32_t {
    DISOOFP_0 = 0, // field has value 0x0
DISOOFP_1 = 1, // field has value 0x1

};
enum class DISMCYCINT_t : uint32_t {
    DISMCYCINT_0 = 0, // field has value 0x0
DISMCYCINT_1 = 1, // field has value 0x1

};
template <uint32_t address>
class ACTRL : public ReadableWritable<address> {
   public:
    ACTRL() : ReadableWritable<address>() {}
    DISMCYCINT_t DISMCYCINT(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DISMCYCINT_t>(tmp);
}
void DISMCYCINT(DISMCYCINT_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
DISDEFWBUF_t DISDEFWBUF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DISDEFWBUF_t>(tmp);
}
void DISDEFWBUF(DISDEFWBUF_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
DISFOLD_t DISFOLD(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DISFOLD_t>(tmp);
}
void DISFOLD(DISFOLD_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
DISFPCA_t DISFPCA(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DISFPCA_t>(tmp);
}
void DISFPCA(DISFPCA_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
DISOOFP_t DISOOFP(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<DISOOFP_t>(tmp);
}
void DISOOFP(DISOOFP_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
};
}
template<uint32_t base_address>
class SCB{
    public:
    // Auxiliary control register
ACTRL<base_address + 0> ACTRL; 
};
}

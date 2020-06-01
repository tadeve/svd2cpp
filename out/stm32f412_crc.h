#pragma once

#include <cstdint>
#include <reg.h>

namespace CRC{
namespace DR{

template <uint32_t address>
class DR : public ReadableWritable<address> {
   public:
    DR() : ReadableWritable<address>() {}
    uint32_t DR(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void DR(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace IDR{

template <uint32_t address>
class IDR : public ReadableWritable<address> {
   public:
    IDR() : ReadableWritable<address>() {}
    uint8_t IDR(){
    uint32_t tmp = this->bits_masked(0xff) >> 0;
    return reinterpret_cast<uint8_t>(tmp);
}
void IDR(uint8_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xff);
}
};
}
namespace CR{
enum class RESETW_t : uint32_t {
    Reset = 1, // Resets the CRC calculation unit and sets the data register to 0xFFFF FFFF

};
template <uint32_t address>
class CR : public Writable<address> {
   public:
    CR() : Writable<address>() {}
    
void RESET(RESETW_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
template<uint32_t base_address>
class CRC{
    public:
    // Data register
DR<base_address + 0> DR; 
// Independent Data register
IDR<base_address + 4> IDR; 
// Control register
CR<base_address + 8> CR; 
};
}

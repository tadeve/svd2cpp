#pragma once

#include <cstdint>
#include <reg.h>

namespace DMA1{
namespace LISR{
enum class DMEIF3_t : uint32_t {
    NoError = 0, // No Direct Mode error on stream x
Error = 1, // A Direct Mode error occurred on stream x

};
enum class HTIF3_t : uint32_t {
    NotHalf = 0, // No half transfer event on stream x
Half = 1, // A half transfer event occurred on stream x

};
enum class FEIF3_t : uint32_t {
    NoError = 0, // No FIFO error event on stream x
Error = 1, // A FIFO error event occurred on stream x

};
enum class TCIF3_t : uint32_t {
    NotComplete = 0, // No transfer complete event on stream x
Complete = 1, // A transfer complete event occurred on stream x

};
enum class TEIF3_t : uint32_t {
    NoError = 0, // No transfer error on stream x
Error = 1, // A transfer error occurred on stream x

};
template <uint32_t address>
class LISR : public Readable<address> {
   public:
    LISR() : Readable<address>() {}
    TCIF3_t TCIF3(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<TCIF3_t>(tmp);
}
void TCIF3(TCIF3_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
HTIF3_t HTIF3(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<HTIF3_t>(tmp);
}
void HTIF3(HTIF3_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
TEIF3_t TEIF3(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<TEIF3_t>(tmp);
}
void TEIF3(TEIF3_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
DMEIF3_t DMEIF3(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<DMEIF3_t>(tmp);
}
void DMEIF3(DMEIF3_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
FEIF3_t FEIF3(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<FEIF3_t>(tmp);
}
void FEIF3(FEIF3_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
TCIF3_t TCIF2(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TCIF3_t>(tmp);
}
void TCIF2(TCIF3_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
HTIF3_t HTIF2(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<HTIF3_t>(tmp);
}
void HTIF2(HTIF3_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
TEIF3_t TEIF2(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<TEIF3_t>(tmp);
}
void TEIF2(TEIF3_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
DMEIF3_t DMEIF2(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<DMEIF3_t>(tmp);
}
void DMEIF2(DMEIF3_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
FEIF3_t FEIF2(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<FEIF3_t>(tmp);
}
void FEIF2(FEIF3_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TCIF3_t TCIF1(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TCIF3_t>(tmp);
}
void TCIF1(TCIF3_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
HTIF3_t HTIF1(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<HTIF3_t>(tmp);
}
void HTIF1(HTIF3_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
TEIF3_t TEIF1(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<TEIF3_t>(tmp);
}
void TEIF1(TEIF3_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DMEIF3_t DMEIF1(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DMEIF3_t>(tmp);
}
void DMEIF1(DMEIF3_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FEIF3_t FEIF1(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FEIF3_t>(tmp);
}
void FEIF1(FEIF3_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TCIF3_t TCIF0(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TCIF3_t>(tmp);
}
void TCIF0(TCIF3_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
HTIF3_t HTIF0(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<HTIF3_t>(tmp);
}
void HTIF0(HTIF3_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TEIF3_t TEIF0(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TEIF3_t>(tmp);
}
void TEIF0(TEIF3_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DMEIF3_t DMEIF0(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DMEIF3_t>(tmp);
}
void DMEIF0(DMEIF3_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FEIF3_t FEIF0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FEIF3_t>(tmp);
}
void FEIF0(FEIF3_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace HISR{
enum class DMEIF7_t : uint32_t {
    NoError = 0, // No Direct Mode error on stream x
Error = 1, // A Direct Mode error occurred on stream x

};
enum class TEIF7_t : uint32_t {
    NoError = 0, // No transfer error on stream x
Error = 1, // A transfer error occurred on stream x

};
enum class TCIF7_t : uint32_t {
    NotComplete = 0, // No transfer complete event on stream x
Complete = 1, // A transfer complete event occurred on stream x

};
enum class HTIF7_t : uint32_t {
    NotHalf = 0, // No half transfer event on stream x
Half = 1, // A half transfer event occurred on stream x

};
enum class FEIF7_t : uint32_t {
    NoError = 0, // No FIFO error event on stream x
Error = 1, // A FIFO error event occurred on stream x

};
template <uint32_t address>
class HISR : public Readable<address> {
   public:
    HISR() : Readable<address>() {}
    TCIF7_t TCIF7(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<TCIF7_t>(tmp);
}
void TCIF7(TCIF7_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
HTIF7_t HTIF7(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<HTIF7_t>(tmp);
}
void HTIF7(HTIF7_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
TEIF7_t TEIF7(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<TEIF7_t>(tmp);
}
void TEIF7(TEIF7_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
DMEIF7_t DMEIF7(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<DMEIF7_t>(tmp);
}
void DMEIF7(DMEIF7_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
FEIF7_t FEIF7(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<FEIF7_t>(tmp);
}
void FEIF7(FEIF7_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
TCIF7_t TCIF6(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<TCIF7_t>(tmp);
}
void TCIF6(TCIF7_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
HTIF7_t HTIF6(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<HTIF7_t>(tmp);
}
void HTIF6(HTIF7_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
TEIF7_t TEIF6(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<TEIF7_t>(tmp);
}
void TEIF6(TEIF7_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
DMEIF7_t DMEIF6(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<DMEIF7_t>(tmp);
}
void DMEIF6(DMEIF7_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
FEIF7_t FEIF6(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<FEIF7_t>(tmp);
}
void FEIF6(FEIF7_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
TCIF7_t TCIF5(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TCIF7_t>(tmp);
}
void TCIF5(TCIF7_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
HTIF7_t HTIF5(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<HTIF7_t>(tmp);
}
void HTIF5(HTIF7_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
TEIF7_t TEIF5(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<TEIF7_t>(tmp);
}
void TEIF5(TEIF7_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
DMEIF7_t DMEIF5(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<DMEIF7_t>(tmp);
}
void DMEIF5(DMEIF7_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FEIF7_t FEIF5(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FEIF7_t>(tmp);
}
void FEIF5(FEIF7_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
TCIF7_t TCIF4(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TCIF7_t>(tmp);
}
void TCIF4(TCIF7_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
HTIF7_t HTIF4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<HTIF7_t>(tmp);
}
void HTIF4(HTIF7_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TEIF7_t TEIF4(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TEIF7_t>(tmp);
}
void TEIF4(TEIF7_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
DMEIF7_t DMEIF4(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<DMEIF7_t>(tmp);
}
void DMEIF4(DMEIF7_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FEIF7_t FEIF4(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FEIF7_t>(tmp);
}
void FEIF4(FEIF7_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace LIFCR{
enum class CTEIF3_t : uint32_t {
    Clear = 1, // Clear the corresponding TEIFx flag

};
enum class CFEIF3_t : uint32_t {
    Clear = 1, // Clear the corresponding CFEIFx flag

};
enum class CDMEIF3_t : uint32_t {
    Clear = 1, // Clear the corresponding DMEIFx flag

};
enum class CTCIF3_t : uint32_t {
    Clear = 1, // Clear the corresponding TCIFx flag

};
enum class CHTIF3_t : uint32_t {
    Clear = 1, // Clear the corresponding HTIFx flag

};
template <uint32_t address>
class LIFCR : public Writable<address> {
   public:
    LIFCR() : Writable<address>() {}
    CTCIF3_t CTCIF3(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<CTCIF3_t>(tmp);
}
void CTCIF3(CTCIF3_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
CHTIF3_t CHTIF3(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<CHTIF3_t>(tmp);
}
void CHTIF3(CHTIF3_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
CTEIF3_t CTEIF3(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<CTEIF3_t>(tmp);
}
void CTEIF3(CTEIF3_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
CDMEIF3_t CDMEIF3(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<CDMEIF3_t>(tmp);
}
void CDMEIF3(CDMEIF3_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
CFEIF3_t CFEIF3(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<CFEIF3_t>(tmp);
}
void CFEIF3(CFEIF3_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
CTCIF3_t CTCIF2(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<CTCIF3_t>(tmp);
}
void CTCIF2(CTCIF3_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
CHTIF3_t CHTIF2(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<CHTIF3_t>(tmp);
}
void CHTIF2(CHTIF3_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
CTEIF3_t CTEIF2(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<CTEIF3_t>(tmp);
}
void CTEIF2(CTEIF3_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
CDMEIF3_t CDMEIF2(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<CDMEIF3_t>(tmp);
}
void CDMEIF2(CDMEIF3_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
CFEIF3_t CFEIF2(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<CFEIF3_t>(tmp);
}
void CFEIF2(CFEIF3_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
CTCIF3_t CTCIF1(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CTCIF3_t>(tmp);
}
void CTCIF1(CTCIF3_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CHTIF3_t CHTIF1(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CHTIF3_t>(tmp);
}
void CHTIF1(CHTIF3_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CTEIF3_t CTEIF1(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CTEIF3_t>(tmp);
}
void CTEIF1(CTEIF3_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
CDMEIF3_t CDMEIF1(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<CDMEIF3_t>(tmp);
}
void CDMEIF1(CDMEIF3_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CFEIF3_t CFEIF1(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CFEIF3_t>(tmp);
}
void CFEIF1(CFEIF3_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
CTCIF3_t CTCIF0(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<CTCIF3_t>(tmp);
}
void CTCIF0(CTCIF3_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
CHTIF3_t CHTIF0(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CHTIF3_t>(tmp);
}
void CHTIF0(CHTIF3_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
CTEIF3_t CTEIF0(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CTEIF3_t>(tmp);
}
void CTEIF0(CTEIF3_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CDMEIF3_t CDMEIF0(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CDMEIF3_t>(tmp);
}
void CDMEIF0(CDMEIF3_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CFEIF3_t CFEIF0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CFEIF3_t>(tmp);
}
void CFEIF0(CFEIF3_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace HIFCR{
enum class CHTIF7_t : uint32_t {
    Clear = 1, // Clear the corresponding HTIFx flag

};
enum class CTEIF7_t : uint32_t {
    Clear = 1, // Clear the corresponding TEIFx flag

};
enum class CFEIF7_t : uint32_t {
    Clear = 1, // Clear the corresponding CFEIFx flag

};
enum class CDMEIF7_t : uint32_t {
    Clear = 1, // Clear the corresponding DMEIFx flag

};
enum class CTCIF7_t : uint32_t {
    Clear = 1, // Clear the corresponding TCIFx flag

};
template <uint32_t address>
class HIFCR : public Writable<address> {
   public:
    HIFCR() : Writable<address>() {}
    CTCIF7_t CTCIF7(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<CTCIF7_t>(tmp);
}
void CTCIF7(CTCIF7_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
CHTIF7_t CHTIF7(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<CHTIF7_t>(tmp);
}
void CHTIF7(CHTIF7_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
CTEIF7_t CTEIF7(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<CTEIF7_t>(tmp);
}
void CTEIF7(CTEIF7_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
CDMEIF7_t CDMEIF7(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<CDMEIF7_t>(tmp);
}
void CDMEIF7(CDMEIF7_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
CFEIF7_t CFEIF7(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<CFEIF7_t>(tmp);
}
void CFEIF7(CFEIF7_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
CTCIF7_t CTCIF6(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<CTCIF7_t>(tmp);
}
void CTCIF6(CTCIF7_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
CHTIF7_t CHTIF6(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<CHTIF7_t>(tmp);
}
void CHTIF6(CHTIF7_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
CTEIF7_t CTEIF6(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<CTEIF7_t>(tmp);
}
void CTEIF6(CTEIF7_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
CDMEIF7_t CDMEIF6(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<CDMEIF7_t>(tmp);
}
void CDMEIF6(CDMEIF7_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
CFEIF7_t CFEIF6(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<CFEIF7_t>(tmp);
}
void CFEIF6(CFEIF7_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
CTCIF7_t CTCIF5(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<CTCIF7_t>(tmp);
}
void CTCIF5(CTCIF7_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CHTIF7_t CHTIF5(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<CHTIF7_t>(tmp);
}
void CHTIF5(CHTIF7_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
CTEIF7_t CTEIF5(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<CTEIF7_t>(tmp);
}
void CTEIF5(CTEIF7_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
CDMEIF7_t CDMEIF5(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<CDMEIF7_t>(tmp);
}
void CDMEIF5(CDMEIF7_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
CFEIF7_t CFEIF5(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<CFEIF7_t>(tmp);
}
void CFEIF5(CFEIF7_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
CTCIF7_t CTCIF4(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<CTCIF7_t>(tmp);
}
void CTCIF4(CTCIF7_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
CHTIF7_t CHTIF4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<CHTIF7_t>(tmp);
}
void CHTIF4(CHTIF7_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
CTEIF7_t CTEIF4(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<CTEIF7_t>(tmp);
}
void CTEIF4(CTEIF7_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
CDMEIF7_t CDMEIF4(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<CDMEIF7_t>(tmp);
}
void CDMEIF4(CDMEIF7_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
CFEIF7_t CFEIF4(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CFEIF7_t>(tmp);
}
void CFEIF4(CFEIF7_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
template<uint32_t base_address>
class DMA{
    public:
    // low interrupt status register
LISR<base_address + 0> LISR; 
// high interrupt status register
HISR<base_address + 4> HISR; 
// low interrupt flag clearregister
LIFCR<base_address + 8> LIFCR; 
// high interrupt flag clearregister
HIFCR<base_address + 12> HIFCR; 
};
}

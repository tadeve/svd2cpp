#pragma once

#include <cstdint>
#include <reg.h>

namespace FPU{
namespace FPCCR{
enum class LSPEN_t : uint32_t {
    LSPEN_0 = 0, // field has value 0x0
LSPEN_1 = 1, // field has value 0x1

};
enum class LSPACT_t : uint32_t {
    LSPACT_0 = 0, // field has value 0x0
LSPACT_1 = 1, // field has value 0x1

};
enum class THREAD_t : uint32_t {
    THREAD_0 = 0, // field has value 0x0
THREAD_1 = 1, // field has value 0x1

};
enum class USER_t : uint32_t {
    USER_0 = 0, // field has value 0x0
USER_1 = 1, // field has value 0x1

};
enum class ASPEN_t : uint32_t {
    ASPEN_0 = 0, // field has value 0x0
ASPEN_1 = 1, // field has value 0x1

};
enum class HFRDY_t : uint32_t {
    HFRDY_0 = 0, // field has value 0x0
HFRDY_1 = 1, // field has value 0x1

};
enum class BFRDY_t : uint32_t {
    BFRDY_0 = 0, // field has value 0x0
BFRDY_1 = 1, // field has value 0x1

};
enum class MONRDY_t : uint32_t {
    MONRDY_0 = 0, // field has value 0x0
MONRDY_1 = 1, // field has value 0x1

};
enum class MMRDY_t : uint32_t {
    MMRDY_0 = 0, // field has value 0x0
MMRDY_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FPCCR : public ReadableWritable<address> {
   public:
    FPCCR() : ReadableWritable<address>() {}
    LSPACT_t LSPACT(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<LSPACT_t>(tmp);
}
void LSPACT(LSPACT_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
USER_t USER(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<USER_t>(tmp);
}
void USER(USER_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
THREAD_t THREAD(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<THREAD_t>(tmp);
}
void THREAD(THREAD_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
HFRDY_t HFRDY(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<HFRDY_t>(tmp);
}
void HFRDY(HFRDY_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
MMRDY_t MMRDY(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<MMRDY_t>(tmp);
}
void MMRDY(MMRDY_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
BFRDY_t BFRDY(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<BFRDY_t>(tmp);
}
void BFRDY(BFRDY_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
MONRDY_t MONRDY(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<MONRDY_t>(tmp);
}
void MONRDY(MONRDY_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
LSPEN_t LSPEN(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<LSPEN_t>(tmp);
}
void LSPEN(LSPEN_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
ASPEN_t ASPEN(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<ASPEN_t>(tmp);
}
void ASPEN(ASPEN_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace FPCAR{

template <uint32_t address>
class FPCAR : public ReadableWritable<address> {
   public:
    FPCAR() : ReadableWritable<address>() {}
    uint32_t ADDRESS(){
    uint32_t tmp = this->bits_masked(0xfffffff8) >> 3;
    return reinterpret_cast<uint32_t>(tmp);
}
void ADDRESS(uint32_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0xfffffff8);
}
};
}
namespace FPSCR{
enum class OFC_t : uint32_t {
    OFC_0 = 0, // field has value 0x0
OFC_1 = 1, // field has value 0x1

};
enum class Z_t : uint32_t {
    Z_0 = 0, // field has value 0x0
Z_1 = 1, // field has value 0x1

};
enum class UFC_t : uint32_t {
    UFC_0 = 0, // field has value 0x0
UFC_1 = 1, // field has value 0x1

};
enum class RMode_t : uint32_t {
    RMode_0 = 0, // field has value 0x0
RMode_1 = 1, // field has value 0x1
RMode_2 = 2, // field has value 0x2
RMode_3 = 3, // field has value 0x3

};
enum class AHP_t : uint32_t {
    AHP_0 = 0, // field has value 0x0
AHP_1 = 1, // field has value 0x1

};
enum class C_t : uint32_t {
    C_0 = 0, // field has value 0x0
C_1 = 1, // field has value 0x1

};
enum class IOC_t : uint32_t {
    IOC_0 = 0, // field has value 0x0
IOC_1 = 1, // field has value 0x1

};
enum class DZC_t : uint32_t {
    DZC_0 = 0, // field has value 0x0
DZC_1 = 1, // field has value 0x1

};
enum class IDC_t : uint32_t {
    IDC_0 = 0, // field has value 0x0
IDC_1 = 1, // field has value 0x1

};
enum class N_t : uint32_t {
    N_0 = 0, // field has value 0x0
N_1 = 1, // field has value 0x1

};
enum class FZ_t : uint32_t {
    FZ_0 = 0, // field has value 0x0
FZ_1 = 1, // field has value 0x1

};
enum class DN_t : uint32_t {
    DN_0 = 0, // field has value 0x0
DN_1 = 1, // field has value 0x1

};
enum class IXC_t : uint32_t {
    IXC_0 = 0, // field has value 0x0
IXC_1 = 1, // field has value 0x1

};
enum class V_t : uint32_t {
    V_0 = 0, // field has value 0x0
V_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FPSCR : public ReadableWritable<address> {
   public:
    FPSCR() : ReadableWritable<address>() {}
    IOC_t IOC(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<IOC_t>(tmp);
}
void IOC(IOC_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
DZC_t DZC(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<DZC_t>(tmp);
}
void DZC(DZC_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
OFC_t OFC(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<OFC_t>(tmp);
}
void OFC(OFC_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
UFC_t UFC(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<UFC_t>(tmp);
}
void UFC(UFC_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
IXC_t IXC(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<IXC_t>(tmp);
}
void IXC(IXC_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
IDC_t IDC(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<IDC_t>(tmp);
}
void IDC(IDC_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
RMode_t RMode(){
    uint32_t tmp = this->bits_masked(0xc00000) >> 22;
    return reinterpret_cast<RMode_t>(tmp);
}
void RMode(RMode_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0xc00000);
}
FZ_t FZ(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<FZ_t>(tmp);
}
void FZ(FZ_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
DN_t DN(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<DN_t>(tmp);
}
void DN(DN_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
AHP_t AHP(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<AHP_t>(tmp);
}
void AHP(AHP_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
V_t V(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<V_t>(tmp);
}
void V(V_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
C_t C(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<C_t>(tmp);
}
void C(C_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
Z_t Z(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<Z_t>(tmp);
}
void Z(Z_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
N_t N(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<N_t>(tmp);
}
void N(N_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
template<uint32_t base_address>
class FPU{
    public:
    // Floating-point context controlregister
FPCCR<base_address + 0> FPCCR; 
// Floating-point context addressregister
FPCAR<base_address + 4> FPCAR; 
// Floating-point status controlregister
FPSCR<base_address + 8> FPSCR; 
};
}

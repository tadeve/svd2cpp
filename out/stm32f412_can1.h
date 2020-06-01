#pragma once

#include <cstdint>
#include <reg.h>

namespace CAN1{
namespace MCR{
enum class AWUM_t : uint32_t {
    AWUM_0 = 0, // field has value 0x0
AWUM_1 = 1, // field has value 0x1

};
enum class RESET_t : uint32_t {
    RESET_0 = 0, // field has value 0x0
RESET_1 = 1, // field has value 0x1

};
enum class INRQ_t : uint32_t {
    INRQ_0 = 0, // field has value 0x0
INRQ_1 = 1, // field has value 0x1

};
enum class NART_t : uint32_t {
    NART_0 = 0, // field has value 0x0
NART_1 = 1, // field has value 0x1

};
enum class TXFP_t : uint32_t {
    TXFP_0 = 0, // field has value 0x0
TXFP_1 = 1, // field has value 0x1

};
enum class SLEEP_t : uint32_t {
    SLEEP_0 = 0, // field has value 0x0
SLEEP_1 = 1, // field has value 0x1

};
enum class DBF_t : uint32_t {
    DBF_0 = 0, // field has value 0x0
DBF_1 = 1, // field has value 0x1

};
enum class TTCM_t : uint32_t {
    TTCM_0 = 0, // field has value 0x0
TTCM_1 = 1, // field has value 0x1

};
enum class ABOM_t : uint32_t {
    ABOM_0 = 0, // field has value 0x0
ABOM_1 = 1, // field has value 0x1

};
enum class RFLM_t : uint32_t {
    RFLM_0 = 0, // field has value 0x0
RFLM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class MCR : public ReadableWritable<address> {
   public:
    MCR() : ReadableWritable<address>() {}
    DBF_t DBF(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<DBF_t>(tmp);
}
void DBF(DBF_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
RESET_t RESET(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<RESET_t>(tmp);
}
void RESET(RESET_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TTCM_t TTCM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TTCM_t>(tmp);
}
void TTCM(TTCM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
ABOM_t ABOM(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<ABOM_t>(tmp);
}
void ABOM(ABOM_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
AWUM_t AWUM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<AWUM_t>(tmp);
}
void AWUM(AWUM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
NART_t NART(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<NART_t>(tmp);
}
void NART(NART_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
RFLM_t RFLM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<RFLM_t>(tmp);
}
void RFLM(RFLM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
TXFP_t TXFP(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<TXFP_t>(tmp);
}
void TXFP(TXFP_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
SLEEP_t SLEEP(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SLEEP_t>(tmp);
}
void SLEEP(SLEEP_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
INRQ_t INRQ(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<INRQ_t>(tmp);
}
void INRQ(INRQ_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace MSR{
enum class TXM_t : uint32_t {
    TXM_0 = 0, // field has value 0x0
TXM_1 = 1, // field has value 0x1

};
enum class WKUI_t : uint32_t {
    WKUI_0 = 0, // field has value 0x0
WKUI_1 = 1, // field has value 0x1

};
enum class SLAK_t : uint32_t {
    SLAK_0 = 0, // field has value 0x0
SLAK_1 = 1, // field has value 0x1

};
enum class SLAKI_t : uint32_t {
    SLAKI_0 = 0, // field has value 0x0
SLAKI_1 = 1, // field has value 0x1

};
enum class INAK_t : uint32_t {
    INAK_0 = 0, // field has value 0x0
INAK_1 = 1, // field has value 0x1

};
enum class RX_t : uint32_t {
    RX_0 = 0, // field has value 0x0
RX_1 = 1, // field has value 0x1

};
enum class ERRI_t : uint32_t {
    ERRI_0 = 0, // field has value 0x0
ERRI_1 = 1, // field has value 0x1

};
enum class RXM_t : uint32_t {
    RXM_0 = 0, // field has value 0x0
RXM_1 = 1, // field has value 0x1

};
enum class SAMP_t : uint32_t {
    SAMP_0 = 0, // field has value 0x0
SAMP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class MSR : public ReadableWritable<address> {
   public:
    MSR() : ReadableWritable<address>() {}
    RX_t RX(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<RX_t>(tmp);
}
SAMP_t SAMP(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<SAMP_t>(tmp);
}
RXM_t RXM(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<RXM_t>(tmp);
}
TXM_t TXM(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<TXM_t>(tmp);
}
SLAKI_t SLAKI(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<SLAKI_t>(tmp);
}
void SLAKI(SLAKI_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
WKUI_t WKUI(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<WKUI_t>(tmp);
}
void WKUI(WKUI_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
ERRI_t ERRI(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<ERRI_t>(tmp);
}
void ERRI(ERRI_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
SLAK_t SLAK(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SLAK_t>(tmp);
}
INAK_t INAK(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<INAK_t>(tmp);
}
};
}
namespace TSR{
enum class LOW0_t : uint32_t {
    LOW0_0 = 0, // field has value 0x0
LOW0_1 = 1, // field has value 0x1

};
enum class TERR0_t : uint32_t {
    TERR0_0 = 0, // field has value 0x0
TERR0_1 = 1, // field has value 0x1

};
enum class LOW2_t : uint32_t {
    LOW2_0 = 0, // field has value 0x0
LOW2_1 = 1, // field has value 0x1

};
enum class ALST1_t : uint32_t {
    ALST1_0 = 0, // field has value 0x0
ALST1_1 = 1, // field has value 0x1

};
enum class LOW1_t : uint32_t {
    LOW1_0 = 0, // field has value 0x0
LOW1_1 = 1, // field has value 0x1

};
enum class RQCP1_t : uint32_t {
    RQCP1_0 = 0, // field has value 0x0
RQCP1_1 = 1, // field has value 0x1

};
enum class TERR1_t : uint32_t {
    TERR1_0 = 0, // field has value 0x0
TERR1_1 = 1, // field has value 0x1

};
enum class TXOK0_t : uint32_t {
    TXOK0_0 = 0, // field has value 0x0
TXOK0_1 = 1, // field has value 0x1

};
enum class TME2_t : uint32_t {
    TME2_0 = 0, // field has value 0x0
TME2_1 = 1, // field has value 0x1

};
enum class TXOK1_t : uint32_t {
    TXOK1_0 = 0, // field has value 0x0
TXOK1_1 = 1, // field has value 0x1

};
enum class TERR2_t : uint32_t {
    TERR2_0 = 0, // field has value 0x0
TERR2_1 = 1, // field has value 0x1

};
enum class ABRQ0_t : uint32_t {
    ABRQ0_0 = 0, // field has value 0x0
ABRQ0_1 = 1, // field has value 0x1

};
enum class ABRQ2_t : uint32_t {
    ABRQ2_0 = 0, // field has value 0x0
ABRQ2_1 = 1, // field has value 0x1

};
enum class TME1_t : uint32_t {
    TME1_0 = 0, // field has value 0x0
TME1_1 = 1, // field has value 0x1

};
enum class RQCP2_t : uint32_t {
    RQCP2_0 = 0, // field has value 0x0
RQCP2_1 = 1, // field has value 0x1

};
enum class TME0_t : uint32_t {
    TME0_0 = 0, // field has value 0x0
TME0_1 = 1, // field has value 0x1

};
enum class CODE_t : uint32_t {
    CODE_0 = 0, // field has value 0x0
CODE_1 = 1, // field has value 0x1
CODE_2 = 2, // field has value 0x2
CODE_3 = 3, // field has value 0x3

};
enum class TXOK2_t : uint32_t {
    TXOK2_0 = 0, // field has value 0x0
TXOK2_1 = 1, // field has value 0x1

};
enum class RQCP0_t : uint32_t {
    RQCP0_0 = 0, // field has value 0x0
RQCP0_1 = 1, // field has value 0x1

};
enum class ALST2_t : uint32_t {
    ALST2_0 = 0, // field has value 0x0
ALST2_1 = 1, // field has value 0x1

};
enum class ALST0_t : uint32_t {
    ALST0_0 = 0, // field has value 0x0
ALST0_1 = 1, // field has value 0x1

};
enum class ABRQ1_t : uint32_t {
    ABRQ1_0 = 0, // field has value 0x0
ABRQ1_1 = 1, // field has value 0x1

};
template <uint32_t address>
class TSR : public ReadableWritable<address> {
   public:
    TSR() : ReadableWritable<address>() {}
    LOW2_t LOW2(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<LOW2_t>(tmp);
}
LOW1_t LOW1(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<LOW1_t>(tmp);
}
LOW0_t LOW0(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<LOW0_t>(tmp);
}
TME2_t TME2(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<TME2_t>(tmp);
}
TME1_t TME1(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<TME1_t>(tmp);
}
TME0_t TME0(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<TME0_t>(tmp);
}
CODE_t CODE(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<CODE_t>(tmp);
}
ABRQ2_t ABRQ2(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<ABRQ2_t>(tmp);
}
void ABRQ2(ABRQ2_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
TERR2_t TERR2(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<TERR2_t>(tmp);
}
void TERR2(TERR2_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
ALST2_t ALST2(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<ALST2_t>(tmp);
}
void ALST2(ALST2_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
TXOK2_t TXOK2(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<TXOK2_t>(tmp);
}
void TXOK2(TXOK2_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
RQCP2_t RQCP2(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<RQCP2_t>(tmp);
}
void RQCP2(RQCP2_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
ABRQ1_t ABRQ1(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ABRQ1_t>(tmp);
}
void ABRQ1(ABRQ1_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
TERR1_t TERR1(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<TERR1_t>(tmp);
}
void TERR1(TERR1_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
ALST1_t ALST1(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<ALST1_t>(tmp);
}
void ALST1(ALST1_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
TXOK1_t TXOK1(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<TXOK1_t>(tmp);
}
void TXOK1(TXOK1_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
RQCP1_t RQCP1(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<RQCP1_t>(tmp);
}
void RQCP1(RQCP1_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
ABRQ0_t ABRQ0(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<ABRQ0_t>(tmp);
}
void ABRQ0(ABRQ0_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
TERR0_t TERR0(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<TERR0_t>(tmp);
}
void TERR0(TERR0_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
ALST0_t ALST0(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<ALST0_t>(tmp);
}
void ALST0(ALST0_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
TXOK0_t TXOK0(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<TXOK0_t>(tmp);
}
void TXOK0(TXOK0_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
RQCP0_t RQCP0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<RQCP0_t>(tmp);
}
void RQCP0(RQCP0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace RF%sR{
enum class FULL0R_t : uint32_t {
    NotFull = 0, // FIFO x is not full
Full = 1, // FIFO x is full

};
enum class FULL0W_t : uint32_t {
    Clear = 1, // Clear flag

};
enum class FMP_t : uint32_t {
    FMP_0 = 0, // field has value 0x0
FMP_1 = 1, // field has value 0x1
FMP_2 = 2, // field has value 0x2
FMP_3 = 3, // field has value 0x3

};
enum class RFOM0W_t : uint32_t {
    Release = 1, // Set by software to release the output mailbox of the FIFO

};
enum class FOVR0R_t : uint32_t {
    NoOverrun = 0, // No FIFO x overrun
Overrun = 1, // FIFO x overrun

};
enum class FOVR0W_t : uint32_t {
    Clear = 1, // Clear flag

};
template <uint32_t address>
class RF%sR : public ReadableWritable<address> {
   public:
    RF%sR() : ReadableWritable<address>() {}
    
void RFOM(RFOM0W_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FOVR0R_t FOVR(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FOVR0R_t>(tmp);
}
void FOVR(FOVR0W_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
FULL0R_t FULL(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<FULL0R_t>(tmp);
}
void FULL(FULL0W_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FMP_t FMP(){
    uint32_t tmp = this->bits_masked(0x3) >> 0;
    return reinterpret_cast<FMP_t>(tmp);
}
};
}
namespace IER{
enum class FOVIE1_t : uint32_t {
    Disabled = 0, // No interrupt when FOVR is set
Enabled = 1, // Interrupt generation when FOVR is set

};
enum class FMPIE1_t : uint32_t {
    Disabled = 0, // No interrupt generated when state of FMP[1:0] bits are not 00b
Enabled = 1, // Interrupt generated when state of FMP[1:0] bits are not 00b

};
enum class EWGIE_t : uint32_t {
    Disabled = 0, // ERRI bit will not be set when EWGF is set
Enabled = 1, // ERRI bit will be set when EWGF is set

};
enum class FOVIE0_t : uint32_t {
    Disabled = 0, // No interrupt when FOVR bit is set
Enabled = 1, // Interrupt generated when FOVR bit is set

};
enum class FFIE0_t : uint32_t {
    Disabled = 0, // No interrupt when FULL bit is set
Enabled = 1, // Interrupt generated when FULL bit is set

};
enum class SLKIE_t : uint32_t {
    Disabled = 0, // No interrupt when SLAKI bit is set
Enabled = 1, // Interrupt generated when SLAKI bit is set

};
enum class TMEIE_t : uint32_t {
    Disabled = 0, // No interrupt when RQCPx bit is set
Enabled = 1, // Interrupt generated when RQCPx bit is set

};
enum class WKUIE_t : uint32_t {
    Disabled = 0, // No interrupt when WKUI is set
Enabled = 1, // Interrupt generated when WKUI bit is set

};
enum class ERRIE_t : uint32_t {
    Disabled = 0, // No interrupt will be generated when an error condition is pending in the CAN_ESR
Enabled = 1, // An interrupt will be generation when an error condition is pending in the CAN_ESR

};
enum class FMPIE0_t : uint32_t {
    Disabled = 0, // No interrupt generated when state of FMP[1:0] bits are not 00
Enabled = 1, // Interrupt generated when state of FMP[1:0] bits are not 00b

};
enum class EPVIE_t : uint32_t {
    Disabled = 0, // ERRI bit will not be set when EPVF is set
Enabled = 1, // ERRI bit will be set when EPVF is set

};
enum class FFIE1_t : uint32_t {
    Disabled = 0, // No interrupt when FULL bit is set
Enabled = 1, // Interrupt generated when FULL bit is set

};
enum class BOFIE_t : uint32_t {
    Disabled = 0, // ERRI bit will not be set when BOFF is set
Enabled = 1, // ERRI bit will be set when BOFF is set

};
enum class LECIE_t : uint32_t {
    Disabled = 0, // ERRI bit will not be set when the error code in LEC[2:0] is set by hardware on error detection
Enabled = 1, // ERRI bit will be set when the error code in LEC[2:0] is set by hardware on error detection

};
template <uint32_t address>
class IER : public ReadableWritable<address> {
   public:
    IER() : ReadableWritable<address>() {}
    SLKIE_t SLKIE(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<SLKIE_t>(tmp);
}
void SLKIE(SLKIE_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
WKUIE_t WKUIE(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<WKUIE_t>(tmp);
}
void WKUIE(WKUIE_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
ERRIE_t ERRIE(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<ERRIE_t>(tmp);
}
void ERRIE(ERRIE_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
LECIE_t LECIE(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<LECIE_t>(tmp);
}
void LECIE(LECIE_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
BOFIE_t BOFIE(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<BOFIE_t>(tmp);
}
void BOFIE(BOFIE_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
EPVIE_t EPVIE(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<EPVIE_t>(tmp);
}
void EPVIE(EPVIE_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
EWGIE_t EWGIE(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<EWGIE_t>(tmp);
}
void EWGIE(EWGIE_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FOVIE1_t FOVIE1(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FOVIE1_t>(tmp);
}
void FOVIE1(FOVIE1_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
FFIE1_t FFIE1(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<FFIE1_t>(tmp);
}
void FFIE1(FFIE1_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FMPIE1_t FMPIE1(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FMPIE1_t>(tmp);
}
void FMPIE1(FMPIE1_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
FOVIE0_t FOVIE0(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<FOVIE0_t>(tmp);
}
void FOVIE0(FOVIE0_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FFIE0_t FFIE0(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FFIE0_t>(tmp);
}
void FFIE0(FFIE0_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FMPIE0_t FMPIE0(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FMPIE0_t>(tmp);
}
void FMPIE0(FMPIE0_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
TMEIE_t TMEIE(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<TMEIE_t>(tmp);
}
void TMEIE(TMEIE_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace ESR{

enum class BOFF_t : uint32_t {
    BOFF_0 = 0, // field has value 0x0
BOFF_1 = 1, // field has value 0x1

};
enum class EWGF_t : uint32_t {
    EWGF_0 = 0, // field has value 0x0
EWGF_1 = 1, // field has value 0x1

};
enum class EPVF_t : uint32_t {
    EPVF_0 = 0, // field has value 0x0
EPVF_1 = 1, // field has value 0x1

};
enum class LEC_t : uint32_t {
    NoError = 0, // No Error
Stuff = 1, // Stuff Error
Form = 2, // Form Error
Ack = 3, // Acknowledgment Error
BitRecessive = 4, // Bit recessive Error
BitDominant = 5, // Bit dominant Error
Crc = 6, // CRC Error
Custom = 7, // Set by software

};
template <uint32_t address>
class ESR : public ReadableWritable<address> {
   public:
    ESR() : ReadableWritable<address>() {}
    uint8_t REC(){
    uint32_t tmp = this->bits_masked(0xff000000) >> 24;
    return reinterpret_cast<uint8_t>(tmp);
}
uint8_t TEC(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
LEC_t LEC(){
    uint32_t tmp = this->bits_masked(0x70) >> 4;
    return reinterpret_cast<LEC_t>(tmp);
}
void LEC(LEC_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x70);
}
BOFF_t BOFF(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<BOFF_t>(tmp);
}
EPVF_t EPVF(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<EPVF_t>(tmp);
}
EWGF_t EWGF(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<EWGF_t>(tmp);
}
};
}
namespace BTR{

enum class TS2_t : uint32_t {
    TS2_0 = 0, // field has value 0x0
TS2_1 = 1, // field has value 0x1
TS2_2 = 2, // field has value 0x2
TS2_3 = 3, // field has value 0x3
TS2_4 = 4, // field has value 0x4
TS2_5 = 5, // field has value 0x5
TS2_6 = 6, // field has value 0x6
TS2_7 = 7, // field has value 0x7

};
enum class TS1_t : uint32_t {
    TS1_0 = 0, // field has value 0x0
TS1_1 = 1, // field has value 0x1
TS1_2 = 2, // field has value 0x2
TS1_3 = 3, // field has value 0x3
TS1_4 = 4, // field has value 0x4
TS1_5 = 5, // field has value 0x5
TS1_6 = 6, // field has value 0x6
TS1_7 = 7, // field has value 0x7
TS1_8 = 8, // field has value 0x8
TS1_9 = 9, // field has value 0x9
TS1_10 = 10, // field has value 0xa
TS1_11 = 11, // field has value 0xb
TS1_12 = 12, // field has value 0xc
TS1_13 = 13, // field has value 0xd
TS1_14 = 14, // field has value 0xe
TS1_15 = 15, // field has value 0xf

};
enum class SJW_t : uint32_t {
    SJW_0 = 0, // field has value 0x0
SJW_1 = 1, // field has value 0x1
SJW_2 = 2, // field has value 0x2
SJW_3 = 3, // field has value 0x3

};
enum class SILM_t : uint32_t {
    Normal = 0, // Normal operation
Silent = 1, // Silent Mode

};
enum class LBKM_t : uint32_t {
    Disabled = 0, // Loop Back Mode disabled
Enabled = 1, // Loop Back Mode enabled

};
template <uint32_t address>
class BTR : public ReadableWritable<address> {
   public:
    BTR() : ReadableWritable<address>() {}
    SILM_t SILM(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<SILM_t>(tmp);
}
void SILM(SILM_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
LBKM_t LBKM(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<LBKM_t>(tmp);
}
void LBKM(LBKM_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
SJW_t SJW(){
    uint32_t tmp = this->bits_masked(0x3000000) >> 24;
    return reinterpret_cast<SJW_t>(tmp);
}
void SJW(SJW_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x3000000);
}
TS2_t TS2(){
    uint32_t tmp = this->bits_masked(0x700000) >> 20;
    return reinterpret_cast<TS2_t>(tmp);
}
void TS2(TS2_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x700000);
}
TS1_t TS1(){
    uint32_t tmp = this->bits_masked(0xf0000) >> 16;
    return reinterpret_cast<TS1_t>(tmp);
}
void TS1(TS1_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xf0000);
}
uint16_t BRP(){
    uint32_t tmp = this->bits_masked(0x3ff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void BRP(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x3ff);
}
};
}
namespace FMR{
enum class FINIT_t : uint32_t {
    FINIT_0 = 0, // field has value 0x0
FINIT_1 = 1, // field has value 0x1

};
enum class CAN2SB_t : uint32_t {
    CAN2SB_0 = 0, // field has value 0x0
CAN2SB_1 = 1, // field has value 0x1
CAN2SB_2 = 2, // field has value 0x2
CAN2SB_3 = 3, // field has value 0x3
CAN2SB_4 = 4, // field has value 0x4
CAN2SB_5 = 5, // field has value 0x5
CAN2SB_6 = 6, // field has value 0x6
CAN2SB_7 = 7, // field has value 0x7
CAN2SB_8 = 8, // field has value 0x8
CAN2SB_9 = 9, // field has value 0x9
CAN2SB_10 = 10, // field has value 0xa
CAN2SB_11 = 11, // field has value 0xb
CAN2SB_12 = 12, // field has value 0xc
CAN2SB_13 = 13, // field has value 0xd
CAN2SB_14 = 14, // field has value 0xe
CAN2SB_15 = 15, // field has value 0xf
CAN2SB_16 = 16, // field has value 0x10
CAN2SB_17 = 17, // field has value 0x11
CAN2SB_18 = 18, // field has value 0x12
CAN2SB_19 = 19, // field has value 0x13
CAN2SB_20 = 20, // field has value 0x14
CAN2SB_21 = 21, // field has value 0x15
CAN2SB_22 = 22, // field has value 0x16
CAN2SB_23 = 23, // field has value 0x17
CAN2SB_24 = 24, // field has value 0x18
CAN2SB_25 = 25, // field has value 0x19
CAN2SB_26 = 26, // field has value 0x1a
CAN2SB_27 = 27, // field has value 0x1b
CAN2SB_28 = 28, // field has value 0x1c
CAN2SB_29 = 29, // field has value 0x1d
CAN2SB_30 = 30, // field has value 0x1e
CAN2SB_31 = 31, // field has value 0x1f
CAN2SB_32 = 32, // field has value 0x20
CAN2SB_33 = 33, // field has value 0x21
CAN2SB_34 = 34, // field has value 0x22
CAN2SB_35 = 35, // field has value 0x23
CAN2SB_36 = 36, // field has value 0x24
CAN2SB_37 = 37, // field has value 0x25
CAN2SB_38 = 38, // field has value 0x26
CAN2SB_39 = 39, // field has value 0x27
CAN2SB_40 = 40, // field has value 0x28
CAN2SB_41 = 41, // field has value 0x29
CAN2SB_42 = 42, // field has value 0x2a
CAN2SB_43 = 43, // field has value 0x2b
CAN2SB_44 = 44, // field has value 0x2c
CAN2SB_45 = 45, // field has value 0x2d
CAN2SB_46 = 46, // field has value 0x2e
CAN2SB_47 = 47, // field has value 0x2f
CAN2SB_48 = 48, // field has value 0x30
CAN2SB_49 = 49, // field has value 0x31
CAN2SB_50 = 50, // field has value 0x32
CAN2SB_51 = 51, // field has value 0x33
CAN2SB_52 = 52, // field has value 0x34
CAN2SB_53 = 53, // field has value 0x35
CAN2SB_54 = 54, // field has value 0x36
CAN2SB_55 = 55, // field has value 0x37
CAN2SB_56 = 56, // field has value 0x38
CAN2SB_57 = 57, // field has value 0x39
CAN2SB_58 = 58, // field has value 0x3a
CAN2SB_59 = 59, // field has value 0x3b
CAN2SB_60 = 60, // field has value 0x3c
CAN2SB_61 = 61, // field has value 0x3d
CAN2SB_62 = 62, // field has value 0x3e
CAN2SB_63 = 63, // field has value 0x3f

};
template <uint32_t address>
class FMR : public ReadableWritable<address> {
   public:
    FMR() : ReadableWritable<address>() {}
    CAN2SB_t CAN2SB(){
    uint32_t tmp = this->bits_masked(0x3f00) >> 8;
    return reinterpret_cast<CAN2SB_t>(tmp);
}
void CAN2SB(CAN2SB_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x3f00);
}
FINIT_t FINIT(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FINIT_t>(tmp);
}
void FINIT(FINIT_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
};
}
namespace FM1R{
enum class FBM25_t : uint32_t {
    FBM25_0 = 0, // field has value 0x0
FBM25_1 = 1, // field has value 0x1

};
enum class FBM27_t : uint32_t {
    FBM27_0 = 0, // field has value 0x0
FBM27_1 = 1, // field has value 0x1

};
enum class FBM5_t : uint32_t {
    FBM5_0 = 0, // field has value 0x0
FBM5_1 = 1, // field has value 0x1

};
enum class FBM15_t : uint32_t {
    FBM15_0 = 0, // field has value 0x0
FBM15_1 = 1, // field has value 0x1

};
enum class FBM14_t : uint32_t {
    FBM14_0 = 0, // field has value 0x0
FBM14_1 = 1, // field has value 0x1

};
enum class FBM20_t : uint32_t {
    FBM20_0 = 0, // field has value 0x0
FBM20_1 = 1, // field has value 0x1

};
enum class FBM13_t : uint32_t {
    FBM13_0 = 0, // field has value 0x0
FBM13_1 = 1, // field has value 0x1

};
enum class FBM2_t : uint32_t {
    FBM2_0 = 0, // field has value 0x0
FBM2_1 = 1, // field has value 0x1

};
enum class FBM7_t : uint32_t {
    FBM7_0 = 0, // field has value 0x0
FBM7_1 = 1, // field has value 0x1

};
enum class FBM23_t : uint32_t {
    FBM23_0 = 0, // field has value 0x0
FBM23_1 = 1, // field has value 0x1

};
enum class FBM19_t : uint32_t {
    FBM19_0 = 0, // field has value 0x0
FBM19_1 = 1, // field has value 0x1

};
enum class FBM6_t : uint32_t {
    FBM6_0 = 0, // field has value 0x0
FBM6_1 = 1, // field has value 0x1

};
enum class FBM22_t : uint32_t {
    FBM22_0 = 0, // field has value 0x0
FBM22_1 = 1, // field has value 0x1

};
enum class FBM4_t : uint32_t {
    FBM4_0 = 0, // field has value 0x0
FBM4_1 = 1, // field has value 0x1

};
enum class FBM10_t : uint32_t {
    FBM10_0 = 0, // field has value 0x0
FBM10_1 = 1, // field has value 0x1

};
enum class FBM18_t : uint32_t {
    FBM18_0 = 0, // field has value 0x0
FBM18_1 = 1, // field has value 0x1

};
enum class FBM21_t : uint32_t {
    FBM21_0 = 0, // field has value 0x0
FBM21_1 = 1, // field has value 0x1

};
enum class FBM0_t : uint32_t {
    FBM0_0 = 0, // field has value 0x0
FBM0_1 = 1, // field has value 0x1

};
enum class FBM9_t : uint32_t {
    FBM9_0 = 0, // field has value 0x0
FBM9_1 = 1, // field has value 0x1

};
enum class FBM24_t : uint32_t {
    FBM24_0 = 0, // field has value 0x0
FBM24_1 = 1, // field has value 0x1

};
enum class FBM3_t : uint32_t {
    FBM3_0 = 0, // field has value 0x0
FBM3_1 = 1, // field has value 0x1

};
enum class FBM16_t : uint32_t {
    FBM16_0 = 0, // field has value 0x0
FBM16_1 = 1, // field has value 0x1

};
enum class FBM1_t : uint32_t {
    FBM1_0 = 0, // field has value 0x0
FBM1_1 = 1, // field has value 0x1

};
enum class FBM8_t : uint32_t {
    FBM8_0 = 0, // field has value 0x0
FBM8_1 = 1, // field has value 0x1

};
enum class FBM11_t : uint32_t {
    FBM11_0 = 0, // field has value 0x0
FBM11_1 = 1, // field has value 0x1

};
enum class FBM12_t : uint32_t {
    FBM12_0 = 0, // field has value 0x0
FBM12_1 = 1, // field has value 0x1

};
enum class FBM26_t : uint32_t {
    FBM26_0 = 0, // field has value 0x0
FBM26_1 = 1, // field has value 0x1

};
enum class FBM17_t : uint32_t {
    FBM17_0 = 0, // field has value 0x0
FBM17_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FM1R : public ReadableWritable<address> {
   public:
    FM1R() : ReadableWritable<address>() {}
    FBM0_t FBM0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FBM0_t>(tmp);
}
void FBM0(FBM0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
FBM1_t FBM1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FBM1_t>(tmp);
}
void FBM1(FBM1_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
FBM2_t FBM2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FBM2_t>(tmp);
}
void FBM2(FBM2_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FBM3_t FBM3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<FBM3_t>(tmp);
}
void FBM3(FBM3_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FBM4_t FBM4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FBM4_t>(tmp);
}
void FBM4(FBM4_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
FBM5_t FBM5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<FBM5_t>(tmp);
}
void FBM5(FBM5_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FBM6_t FBM6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FBM6_t>(tmp);
}
void FBM6(FBM6_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
FBM7_t FBM7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<FBM7_t>(tmp);
}
void FBM7(FBM7_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
FBM8_t FBM8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<FBM8_t>(tmp);
}
void FBM8(FBM8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FBM9_t FBM9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FBM9_t>(tmp);
}
void FBM9(FBM9_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
FBM10_t FBM10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<FBM10_t>(tmp);
}
void FBM10(FBM10_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
FBM11_t FBM11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<FBM11_t>(tmp);
}
void FBM11(FBM11_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
FBM12_t FBM12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<FBM12_t>(tmp);
}
void FBM12(FBM12_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
FBM13_t FBM13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<FBM13_t>(tmp);
}
void FBM13(FBM13_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
FBM14_t FBM14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<FBM14_t>(tmp);
}
void FBM14(FBM14_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
FBM15_t FBM15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<FBM15_t>(tmp);
}
void FBM15(FBM15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
FBM16_t FBM16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<FBM16_t>(tmp);
}
void FBM16(FBM16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
FBM17_t FBM17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<FBM17_t>(tmp);
}
void FBM17(FBM17_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
FBM18_t FBM18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<FBM18_t>(tmp);
}
void FBM18(FBM18_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
FBM19_t FBM19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<FBM19_t>(tmp);
}
void FBM19(FBM19_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
FBM20_t FBM20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<FBM20_t>(tmp);
}
void FBM20(FBM20_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
FBM21_t FBM21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<FBM21_t>(tmp);
}
void FBM21(FBM21_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
FBM22_t FBM22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<FBM22_t>(tmp);
}
void FBM22(FBM22_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
FBM23_t FBM23(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<FBM23_t>(tmp);
}
void FBM23(FBM23_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
FBM24_t FBM24(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<FBM24_t>(tmp);
}
void FBM24(FBM24_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
FBM25_t FBM25(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<FBM25_t>(tmp);
}
void FBM25(FBM25_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
FBM26_t FBM26(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<FBM26_t>(tmp);
}
void FBM26(FBM26_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
FBM27_t FBM27(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<FBM27_t>(tmp);
}
void FBM27(FBM27_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
};
}
namespace FS1R{
enum class FSC6_t : uint32_t {
    FSC6_0 = 0, // field has value 0x0
FSC6_1 = 1, // field has value 0x1

};
enum class FSC21_t : uint32_t {
    FSC21_0 = 0, // field has value 0x0
FSC21_1 = 1, // field has value 0x1

};
enum class FSC10_t : uint32_t {
    FSC10_0 = 0, // field has value 0x0
FSC10_1 = 1, // field has value 0x1

};
enum class FSC7_t : uint32_t {
    FSC7_0 = 0, // field has value 0x0
FSC7_1 = 1, // field has value 0x1

};
enum class FSC15_t : uint32_t {
    FSC15_0 = 0, // field has value 0x0
FSC15_1 = 1, // field has value 0x1

};
enum class FSC9_t : uint32_t {
    FSC9_0 = 0, // field has value 0x0
FSC9_1 = 1, // field has value 0x1

};
enum class FSC3_t : uint32_t {
    FSC3_0 = 0, // field has value 0x0
FSC3_1 = 1, // field has value 0x1

};
enum class FSC12_t : uint32_t {
    FSC12_0 = 0, // field has value 0x0
FSC12_1 = 1, // field has value 0x1

};
enum class FSC20_t : uint32_t {
    FSC20_0 = 0, // field has value 0x0
FSC20_1 = 1, // field has value 0x1

};
enum class FSC27_t : uint32_t {
    FSC27_0 = 0, // field has value 0x0
FSC27_1 = 1, // field has value 0x1

};
enum class FSC26_t : uint32_t {
    FSC26_0 = 0, // field has value 0x0
FSC26_1 = 1, // field has value 0x1

};
enum class FSC24_t : uint32_t {
    FSC24_0 = 0, // field has value 0x0
FSC24_1 = 1, // field has value 0x1

};
enum class FSC5_t : uint32_t {
    FSC5_0 = 0, // field has value 0x0
FSC5_1 = 1, // field has value 0x1

};
enum class FSC25_t : uint32_t {
    FSC25_0 = 0, // field has value 0x0
FSC25_1 = 1, // field has value 0x1

};
enum class FSC2_t : uint32_t {
    FSC2_0 = 0, // field has value 0x0
FSC2_1 = 1, // field has value 0x1

};
enum class FSC19_t : uint32_t {
    FSC19_0 = 0, // field has value 0x0
FSC19_1 = 1, // field has value 0x1

};
enum class FSC23_t : uint32_t {
    FSC23_0 = 0, // field has value 0x0
FSC23_1 = 1, // field has value 0x1

};
enum class FSC18_t : uint32_t {
    FSC18_0 = 0, // field has value 0x0
FSC18_1 = 1, // field has value 0x1

};
enum class FSC1_t : uint32_t {
    FSC1_0 = 0, // field has value 0x0
FSC1_1 = 1, // field has value 0x1

};
enum class FSC16_t : uint32_t {
    FSC16_0 = 0, // field has value 0x0
FSC16_1 = 1, // field has value 0x1

};
enum class FSC0_t : uint32_t {
    FSC0_0 = 0, // field has value 0x0
FSC0_1 = 1, // field has value 0x1

};
enum class FSC13_t : uint32_t {
    FSC13_0 = 0, // field has value 0x0
FSC13_1 = 1, // field has value 0x1

};
enum class FSC8_t : uint32_t {
    FSC8_0 = 0, // field has value 0x0
FSC8_1 = 1, // field has value 0x1

};
enum class FSC22_t : uint32_t {
    FSC22_0 = 0, // field has value 0x0
FSC22_1 = 1, // field has value 0x1

};
enum class FSC14_t : uint32_t {
    FSC14_0 = 0, // field has value 0x0
FSC14_1 = 1, // field has value 0x1

};
enum class FSC4_t : uint32_t {
    FSC4_0 = 0, // field has value 0x0
FSC4_1 = 1, // field has value 0x1

};
enum class FSC11_t : uint32_t {
    FSC11_0 = 0, // field has value 0x0
FSC11_1 = 1, // field has value 0x1

};
enum class FSC17_t : uint32_t {
    FSC17_0 = 0, // field has value 0x0
FSC17_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FS1R : public ReadableWritable<address> {
   public:
    FS1R() : ReadableWritable<address>() {}
    FSC0_t FSC0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FSC0_t>(tmp);
}
void FSC0(FSC0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
FSC1_t FSC1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FSC1_t>(tmp);
}
void FSC1(FSC1_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
FSC2_t FSC2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FSC2_t>(tmp);
}
void FSC2(FSC2_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FSC3_t FSC3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<FSC3_t>(tmp);
}
void FSC3(FSC3_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FSC4_t FSC4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FSC4_t>(tmp);
}
void FSC4(FSC4_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
FSC5_t FSC5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<FSC5_t>(tmp);
}
void FSC5(FSC5_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FSC6_t FSC6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FSC6_t>(tmp);
}
void FSC6(FSC6_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
FSC7_t FSC7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<FSC7_t>(tmp);
}
void FSC7(FSC7_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
FSC8_t FSC8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<FSC8_t>(tmp);
}
void FSC8(FSC8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FSC9_t FSC9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FSC9_t>(tmp);
}
void FSC9(FSC9_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
FSC10_t FSC10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<FSC10_t>(tmp);
}
void FSC10(FSC10_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
FSC11_t FSC11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<FSC11_t>(tmp);
}
void FSC11(FSC11_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
FSC12_t FSC12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<FSC12_t>(tmp);
}
void FSC12(FSC12_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
FSC13_t FSC13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<FSC13_t>(tmp);
}
void FSC13(FSC13_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
FSC14_t FSC14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<FSC14_t>(tmp);
}
void FSC14(FSC14_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
FSC15_t FSC15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<FSC15_t>(tmp);
}
void FSC15(FSC15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
FSC16_t FSC16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<FSC16_t>(tmp);
}
void FSC16(FSC16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
FSC17_t FSC17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<FSC17_t>(tmp);
}
void FSC17(FSC17_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
FSC18_t FSC18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<FSC18_t>(tmp);
}
void FSC18(FSC18_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
FSC19_t FSC19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<FSC19_t>(tmp);
}
void FSC19(FSC19_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
FSC20_t FSC20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<FSC20_t>(tmp);
}
void FSC20(FSC20_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
FSC21_t FSC21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<FSC21_t>(tmp);
}
void FSC21(FSC21_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
FSC22_t FSC22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<FSC22_t>(tmp);
}
void FSC22(FSC22_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
FSC23_t FSC23(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<FSC23_t>(tmp);
}
void FSC23(FSC23_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
FSC24_t FSC24(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<FSC24_t>(tmp);
}
void FSC24(FSC24_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
FSC25_t FSC25(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<FSC25_t>(tmp);
}
void FSC25(FSC25_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
FSC26_t FSC26(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<FSC26_t>(tmp);
}
void FSC26(FSC26_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
FSC27_t FSC27(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<FSC27_t>(tmp);
}
void FSC27(FSC27_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
};
}
namespace FFA1R{
enum class FFA24_t : uint32_t {
    FFA24_0 = 0, // field has value 0x0
FFA24_1 = 1, // field has value 0x1

};
enum class FFA25_t : uint32_t {
    FFA25_0 = 0, // field has value 0x0
FFA25_1 = 1, // field has value 0x1

};
enum class FFA18_t : uint32_t {
    FFA18_0 = 0, // field has value 0x0
FFA18_1 = 1, // field has value 0x1

};
enum class FFA14_t : uint32_t {
    FFA14_0 = 0, // field has value 0x0
FFA14_1 = 1, // field has value 0x1

};
enum class FFA0_t : uint32_t {
    FFA0_0 = 0, // field has value 0x0
FFA0_1 = 1, // field has value 0x1

};
enum class FFA22_t : uint32_t {
    FFA22_0 = 0, // field has value 0x0
FFA22_1 = 1, // field has value 0x1

};
enum class FFA27_t : uint32_t {
    FFA27_0 = 0, // field has value 0x0
FFA27_1 = 1, // field has value 0x1

};
enum class FFA19_t : uint32_t {
    FFA19_0 = 0, // field has value 0x0
FFA19_1 = 1, // field has value 0x1

};
enum class FFA4_t : uint32_t {
    FFA4_0 = 0, // field has value 0x0
FFA4_1 = 1, // field has value 0x1

};
enum class FFA8_t : uint32_t {
    FFA8_0 = 0, // field has value 0x0
FFA8_1 = 1, // field has value 0x1

};
enum class FFA11_t : uint32_t {
    FFA11_0 = 0, // field has value 0x0
FFA11_1 = 1, // field has value 0x1

};
enum class FFA2_t : uint32_t {
    FFA2_0 = 0, // field has value 0x0
FFA2_1 = 1, // field has value 0x1

};
enum class FFA23_t : uint32_t {
    FFA23_0 = 0, // field has value 0x0
FFA23_1 = 1, // field has value 0x1

};
enum class FFA5_t : uint32_t {
    FFA5_0 = 0, // field has value 0x0
FFA5_1 = 1, // field has value 0x1

};
enum class FFA13_t : uint32_t {
    FFA13_0 = 0, // field has value 0x0
FFA13_1 = 1, // field has value 0x1

};
enum class FFA17_t : uint32_t {
    FFA17_0 = 0, // field has value 0x0
FFA17_1 = 1, // field has value 0x1

};
enum class FFA15_t : uint32_t {
    FFA15_0 = 0, // field has value 0x0
FFA15_1 = 1, // field has value 0x1

};
enum class FFA16_t : uint32_t {
    FFA16_0 = 0, // field has value 0x0
FFA16_1 = 1, // field has value 0x1

};
enum class FFA1_t : uint32_t {
    FFA1_0 = 0, // field has value 0x0
FFA1_1 = 1, // field has value 0x1

};
enum class FFA21_t : uint32_t {
    FFA21_0 = 0, // field has value 0x0
FFA21_1 = 1, // field has value 0x1

};
enum class FFA7_t : uint32_t {
    FFA7_0 = 0, // field has value 0x0
FFA7_1 = 1, // field has value 0x1

};
enum class FFA3_t : uint32_t {
    FFA3_0 = 0, // field has value 0x0
FFA3_1 = 1, // field has value 0x1

};
enum class FFA26_t : uint32_t {
    FFA26_0 = 0, // field has value 0x0
FFA26_1 = 1, // field has value 0x1

};
enum class FFA9_t : uint32_t {
    FFA9_0 = 0, // field has value 0x0
FFA9_1 = 1, // field has value 0x1

};
enum class FFA12_t : uint32_t {
    FFA12_0 = 0, // field has value 0x0
FFA12_1 = 1, // field has value 0x1

};
enum class FFA20_t : uint32_t {
    FFA20_0 = 0, // field has value 0x0
FFA20_1 = 1, // field has value 0x1

};
enum class FFA6_t : uint32_t {
    FFA6_0 = 0, // field has value 0x0
FFA6_1 = 1, // field has value 0x1

};
enum class FFA10_t : uint32_t {
    FFA10_0 = 0, // field has value 0x0
FFA10_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FFA1R : public ReadableWritable<address> {
   public:
    FFA1R() : ReadableWritable<address>() {}
    FFA0_t FFA0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FFA0_t>(tmp);
}
void FFA0(FFA0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
FFA1_t FFA1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FFA1_t>(tmp);
}
void FFA1(FFA1_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
FFA2_t FFA2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FFA2_t>(tmp);
}
void FFA2(FFA2_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FFA3_t FFA3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<FFA3_t>(tmp);
}
void FFA3(FFA3_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FFA4_t FFA4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FFA4_t>(tmp);
}
void FFA4(FFA4_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
FFA5_t FFA5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<FFA5_t>(tmp);
}
void FFA5(FFA5_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FFA6_t FFA6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FFA6_t>(tmp);
}
void FFA6(FFA6_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
FFA7_t FFA7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<FFA7_t>(tmp);
}
void FFA7(FFA7_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
FFA8_t FFA8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<FFA8_t>(tmp);
}
void FFA8(FFA8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FFA9_t FFA9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FFA9_t>(tmp);
}
void FFA9(FFA9_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
FFA10_t FFA10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<FFA10_t>(tmp);
}
void FFA10(FFA10_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
FFA11_t FFA11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<FFA11_t>(tmp);
}
void FFA11(FFA11_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
FFA12_t FFA12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<FFA12_t>(tmp);
}
void FFA12(FFA12_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
FFA13_t FFA13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<FFA13_t>(tmp);
}
void FFA13(FFA13_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
FFA14_t FFA14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<FFA14_t>(tmp);
}
void FFA14(FFA14_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
FFA15_t FFA15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<FFA15_t>(tmp);
}
void FFA15(FFA15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
FFA16_t FFA16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<FFA16_t>(tmp);
}
void FFA16(FFA16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
FFA17_t FFA17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<FFA17_t>(tmp);
}
void FFA17(FFA17_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
FFA18_t FFA18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<FFA18_t>(tmp);
}
void FFA18(FFA18_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
FFA19_t FFA19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<FFA19_t>(tmp);
}
void FFA19(FFA19_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
FFA20_t FFA20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<FFA20_t>(tmp);
}
void FFA20(FFA20_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
FFA21_t FFA21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<FFA21_t>(tmp);
}
void FFA21(FFA21_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
FFA22_t FFA22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<FFA22_t>(tmp);
}
void FFA22(FFA22_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
FFA23_t FFA23(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<FFA23_t>(tmp);
}
void FFA23(FFA23_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
FFA24_t FFA24(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<FFA24_t>(tmp);
}
void FFA24(FFA24_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
FFA25_t FFA25(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<FFA25_t>(tmp);
}
void FFA25(FFA25_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
FFA26_t FFA26(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<FFA26_t>(tmp);
}
void FFA26(FFA26_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
FFA27_t FFA27(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<FFA27_t>(tmp);
}
void FFA27(FFA27_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
};
}
namespace FA1R{
enum class FACT3_t : uint32_t {
    FACT3_0 = 0, // field has value 0x0
FACT3_1 = 1, // field has value 0x1

};
enum class FACT9_t : uint32_t {
    FACT9_0 = 0, // field has value 0x0
FACT9_1 = 1, // field has value 0x1

};
enum class FACT20_t : uint32_t {
    FACT20_0 = 0, // field has value 0x0
FACT20_1 = 1, // field has value 0x1

};
enum class FACT0_t : uint32_t {
    FACT0_0 = 0, // field has value 0x0
FACT0_1 = 1, // field has value 0x1

};
enum class FACT11_t : uint32_t {
    FACT11_0 = 0, // field has value 0x0
FACT11_1 = 1, // field has value 0x1

};
enum class FACT16_t : uint32_t {
    FACT16_0 = 0, // field has value 0x0
FACT16_1 = 1, // field has value 0x1

};
enum class FACT17_t : uint32_t {
    FACT17_0 = 0, // field has value 0x0
FACT17_1 = 1, // field has value 0x1

};
enum class FACT12_t : uint32_t {
    FACT12_0 = 0, // field has value 0x0
FACT12_1 = 1, // field has value 0x1

};
enum class FACT2_t : uint32_t {
    FACT2_0 = 0, // field has value 0x0
FACT2_1 = 1, // field has value 0x1

};
enum class FACT13_t : uint32_t {
    FACT13_0 = 0, // field has value 0x0
FACT13_1 = 1, // field has value 0x1

};
enum class FACT7_t : uint32_t {
    FACT7_0 = 0, // field has value 0x0
FACT7_1 = 1, // field has value 0x1

};
enum class FACT6_t : uint32_t {
    FACT6_0 = 0, // field has value 0x0
FACT6_1 = 1, // field has value 0x1

};
enum class FACT24_t : uint32_t {
    FACT24_0 = 0, // field has value 0x0
FACT24_1 = 1, // field has value 0x1

};
enum class FACT10_t : uint32_t {
    FACT10_0 = 0, // field has value 0x0
FACT10_1 = 1, // field has value 0x1

};
enum class FACT25_t : uint32_t {
    FACT25_0 = 0, // field has value 0x0
FACT25_1 = 1, // field has value 0x1

};
enum class FACT5_t : uint32_t {
    FACT5_0 = 0, // field has value 0x0
FACT5_1 = 1, // field has value 0x1

};
enum class FACT26_t : uint32_t {
    FACT26_0 = 0, // field has value 0x0
FACT26_1 = 1, // field has value 0x1

};
enum class FACT14_t : uint32_t {
    FACT14_0 = 0, // field has value 0x0
FACT14_1 = 1, // field has value 0x1

};
enum class FACT8_t : uint32_t {
    FACT8_0 = 0, // field has value 0x0
FACT8_1 = 1, // field has value 0x1

};
enum class FACT21_t : uint32_t {
    FACT21_0 = 0, // field has value 0x0
FACT21_1 = 1, // field has value 0x1

};
enum class FACT15_t : uint32_t {
    FACT15_0 = 0, // field has value 0x0
FACT15_1 = 1, // field has value 0x1

};
enum class FACT18_t : uint32_t {
    FACT18_0 = 0, // field has value 0x0
FACT18_1 = 1, // field has value 0x1

};
enum class FACT1_t : uint32_t {
    FACT1_0 = 0, // field has value 0x0
FACT1_1 = 1, // field has value 0x1

};
enum class FACT22_t : uint32_t {
    FACT22_0 = 0, // field has value 0x0
FACT22_1 = 1, // field has value 0x1

};
enum class FACT4_t : uint32_t {
    FACT4_0 = 0, // field has value 0x0
FACT4_1 = 1, // field has value 0x1

};
enum class FACT23_t : uint32_t {
    FACT23_0 = 0, // field has value 0x0
FACT23_1 = 1, // field has value 0x1

};
enum class FACT19_t : uint32_t {
    FACT19_0 = 0, // field has value 0x0
FACT19_1 = 1, // field has value 0x1

};
enum class FACT27_t : uint32_t {
    FACT27_0 = 0, // field has value 0x0
FACT27_1 = 1, // field has value 0x1

};
template <uint32_t address>
class FA1R : public ReadableWritable<address> {
   public:
    FA1R() : ReadableWritable<address>() {}
    FACT0_t FACT0(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<FACT0_t>(tmp);
}
void FACT0(FACT0_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
FACT1_t FACT1(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<FACT1_t>(tmp);
}
void FACT1(FACT1_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
FACT2_t FACT2(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FACT2_t>(tmp);
}
void FACT2(FACT2_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
FACT3_t FACT3(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<FACT3_t>(tmp);
}
void FACT3(FACT3_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
FACT4_t FACT4(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<FACT4_t>(tmp);
}
void FACT4(FACT4_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
FACT5_t FACT5(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<FACT5_t>(tmp);
}
void FACT5(FACT5_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
FACT6_t FACT6(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<FACT6_t>(tmp);
}
void FACT6(FACT6_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
FACT7_t FACT7(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<FACT7_t>(tmp);
}
void FACT7(FACT7_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
FACT8_t FACT8(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<FACT8_t>(tmp);
}
void FACT8(FACT8_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
FACT9_t FACT9(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<FACT9_t>(tmp);
}
void FACT9(FACT9_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
FACT10_t FACT10(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<FACT10_t>(tmp);
}
void FACT10(FACT10_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
FACT11_t FACT11(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<FACT11_t>(tmp);
}
void FACT11(FACT11_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
FACT12_t FACT12(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<FACT12_t>(tmp);
}
void FACT12(FACT12_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
FACT13_t FACT13(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<FACT13_t>(tmp);
}
void FACT13(FACT13_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
FACT14_t FACT14(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<FACT14_t>(tmp);
}
void FACT14(FACT14_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
FACT15_t FACT15(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<FACT15_t>(tmp);
}
void FACT15(FACT15_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
FACT16_t FACT16(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<FACT16_t>(tmp);
}
void FACT16(FACT16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
FACT17_t FACT17(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<FACT17_t>(tmp);
}
void FACT17(FACT17_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
FACT18_t FACT18(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<FACT18_t>(tmp);
}
void FACT18(FACT18_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
FACT19_t FACT19(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<FACT19_t>(tmp);
}
void FACT19(FACT19_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
FACT20_t FACT20(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<FACT20_t>(tmp);
}
void FACT20(FACT20_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
FACT21_t FACT21(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<FACT21_t>(tmp);
}
void FACT21(FACT21_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
FACT22_t FACT22(){
    uint32_t tmp = this->bits_masked(0x400000) >> 22;
    return reinterpret_cast<FACT22_t>(tmp);
}
void FACT22(FACT22_t v){
   uint32_t tmp = v << 22;
   this->bits_masked(v, 0x400000);
}
FACT23_t FACT23(){
    uint32_t tmp = this->bits_masked(0x800000) >> 23;
    return reinterpret_cast<FACT23_t>(tmp);
}
void FACT23(FACT23_t v){
   uint32_t tmp = v << 23;
   this->bits_masked(v, 0x800000);
}
FACT24_t FACT24(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<FACT24_t>(tmp);
}
void FACT24(FACT24_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x1000000);
}
FACT25_t FACT25(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<FACT25_t>(tmp);
}
void FACT25(FACT25_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
FACT26_t FACT26(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<FACT26_t>(tmp);
}
void FACT26(FACT26_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
FACT27_t FACT27(){
    uint32_t tmp = this->bits_masked(0x8000000) >> 27;
    return reinterpret_cast<FACT27_t>(tmp);
}
void FACT27(FACT27_t v){
   uint32_t tmp = v << 27;
   this->bits_masked(v, 0x8000000);
}
};
}
template<uint32_t base_address>
class CAN{
    public:
    // master control register
MCR<base_address + 0> MCR; 
// master status register
MSR<base_address + 4> MSR; 
// transmit status register
TSR<base_address + 8> TSR; 
// receive FIFO 0 register
RF%sR<base_address + 12> RF%sR; 
// interrupt enable register
IER<base_address + 20> IER; 
// interrupt enable register
ESR<base_address + 24> ESR; 
// bit timing register
BTR<base_address + 28> BTR; 
// filter master register
FMR<base_address + 512> FMR; 
// filter mode register
FM1R<base_address + 516> FM1R; 
// filter scale register
FS1R<base_address + 524> FS1R; 
// filter FIFO assignmentregister
FFA1R<base_address + 532> FFA1R; 
// filter activation register
FA1R<base_address + 540> FA1R; 
};
}

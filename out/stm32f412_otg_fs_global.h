#pragma once

#include <cstdint>
#include <reg.h>

namespace OTG_FS_GLOBAL{
namespace GOTGCTL{
enum class CIDSTS_t : uint32_t {
    CIDSTS_0 = 0, // field has value 0x0
CIDSTS_1 = 1, // field has value 0x1

};
enum class SRQSCS_t : uint32_t {
    SRQSCS_0 = 0, // field has value 0x0
SRQSCS_1 = 1, // field has value 0x1

};
enum class BSVLD_t : uint32_t {
    BSVLD_0 = 0, // field has value 0x0
BSVLD_1 = 1, // field has value 0x1

};
enum class HNPRQ_t : uint32_t {
    HNPRQ_0 = 0, // field has value 0x0
HNPRQ_1 = 1, // field has value 0x1

};
enum class DBCT_t : uint32_t {
    DBCT_0 = 0, // field has value 0x0
DBCT_1 = 1, // field has value 0x1

};
enum class HSHNPEN_t : uint32_t {
    HSHNPEN_0 = 0, // field has value 0x0
HSHNPEN_1 = 1, // field has value 0x1

};
enum class DHNPEN_t : uint32_t {
    DHNPEN_0 = 0, // field has value 0x0
DHNPEN_1 = 1, // field has value 0x1

};
enum class HNGSCS_t : uint32_t {
    HNGSCS_0 = 0, // field has value 0x0
HNGSCS_1 = 1, // field has value 0x1

};
enum class ASVLD_t : uint32_t {
    ASVLD_0 = 0, // field has value 0x0
ASVLD_1 = 1, // field has value 0x1

};
enum class SRQ_t : uint32_t {
    SRQ_0 = 0, // field has value 0x0
SRQ_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GOTGCTL : public ReadableWritable<address> {
   public:
    GOTGCTL() : ReadableWritable<address>() {}
    SRQSCS_t SRQSCS(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<SRQSCS_t>(tmp);
}
SRQ_t SRQ(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<SRQ_t>(tmp);
}
void SRQ(SRQ_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
HNGSCS_t HNGSCS(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<HNGSCS_t>(tmp);
}
HNPRQ_t HNPRQ(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<HNPRQ_t>(tmp);
}
void HNPRQ(HNPRQ_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
HSHNPEN_t HSHNPEN(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<HSHNPEN_t>(tmp);
}
void HSHNPEN(HSHNPEN_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
DHNPEN_t DHNPEN(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<DHNPEN_t>(tmp);
}
void DHNPEN(DHNPEN_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
CIDSTS_t CIDSTS(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<CIDSTS_t>(tmp);
}
DBCT_t DBCT(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<DBCT_t>(tmp);
}
ASVLD_t ASVLD(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<ASVLD_t>(tmp);
}
BSVLD_t BSVLD(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<BSVLD_t>(tmp);
}
};
}
namespace GOTGINT{
enum class HNGDET_t : uint32_t {
    HNGDET_0 = 0, // field has value 0x0
HNGDET_1 = 1, // field has value 0x1

};
enum class HNSSCHG_t : uint32_t {
    HNSSCHG_0 = 0, // field has value 0x0
HNSSCHG_1 = 1, // field has value 0x1

};
enum class ADTOCHG_t : uint32_t {
    ADTOCHG_0 = 0, // field has value 0x0
ADTOCHG_1 = 1, // field has value 0x1

};
enum class SRSSCHG_t : uint32_t {
    SRSSCHG_0 = 0, // field has value 0x0
SRSSCHG_1 = 1, // field has value 0x1

};
enum class SEDET_t : uint32_t {
    SEDET_0 = 0, // field has value 0x0
SEDET_1 = 1, // field has value 0x1

};
enum class DBCDNE_t : uint32_t {
    DBCDNE_0 = 0, // field has value 0x0
DBCDNE_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GOTGINT : public ReadableWritable<address> {
   public:
    GOTGINT() : ReadableWritable<address>() {}
    SEDET_t SEDET(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<SEDET_t>(tmp);
}
void SEDET(SEDET_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
SRSSCHG_t SRSSCHG(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<SRSSCHG_t>(tmp);
}
void SRSSCHG(SRSSCHG_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
HNSSCHG_t HNSSCHG(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<HNSSCHG_t>(tmp);
}
void HNSSCHG(HNSSCHG_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
HNGDET_t HNGDET(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<HNGDET_t>(tmp);
}
void HNGDET(HNGDET_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
ADTOCHG_t ADTOCHG(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<ADTOCHG_t>(tmp);
}
void ADTOCHG(ADTOCHG_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
DBCDNE_t DBCDNE(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<DBCDNE_t>(tmp);
}
void DBCDNE(DBCDNE_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
};
}
namespace GAHBCFG{
enum class PTXFELVL_t : uint32_t {
    PTXFELVL_0 = 0, // field has value 0x0
PTXFELVL_1 = 1, // field has value 0x1

};
enum class TXFELVL_t : uint32_t {
    TXFELVL_0 = 0, // field has value 0x0
TXFELVL_1 = 1, // field has value 0x1

};
enum class GINT_t : uint32_t {
    GINT_0 = 0, // field has value 0x0
GINT_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GAHBCFG : public ReadableWritable<address> {
   public:
    GAHBCFG() : ReadableWritable<address>() {}
    GINT_t GINT(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<GINT_t>(tmp);
}
void GINT(GINT_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
TXFELVL_t TXFELVL(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<TXFELVL_t>(tmp);
}
void TXFELVL(TXFELVL_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
PTXFELVL_t PTXFELVL(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<PTXFELVL_t>(tmp);
}
void PTXFELVL(PTXFELVL_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
};
}
namespace GUSBCFG{
enum class TOCAL_t : uint32_t {
    TOCAL_0 = 0, // field has value 0x0
TOCAL_1 = 1, // field has value 0x1
TOCAL_2 = 2, // field has value 0x2
TOCAL_3 = 3, // field has value 0x3
TOCAL_4 = 4, // field has value 0x4
TOCAL_5 = 5, // field has value 0x5
TOCAL_6 = 6, // field has value 0x6
TOCAL_7 = 7, // field has value 0x7

};
enum class CTXPKT_t : uint32_t {
    CTXPKT_0 = 0, // field has value 0x0
CTXPKT_1 = 1, // field has value 0x1

};
enum class TRDT_t : uint32_t {
    TRDT_0 = 0, // field has value 0x0
TRDT_1 = 1, // field has value 0x1
TRDT_2 = 2, // field has value 0x2
TRDT_3 = 3, // field has value 0x3
TRDT_4 = 4, // field has value 0x4
TRDT_5 = 5, // field has value 0x5
TRDT_6 = 6, // field has value 0x6
TRDT_7 = 7, // field has value 0x7
TRDT_8 = 8, // field has value 0x8
TRDT_9 = 9, // field has value 0x9
TRDT_10 = 10, // field has value 0xa
TRDT_11 = 11, // field has value 0xb
TRDT_12 = 12, // field has value 0xc
TRDT_13 = 13, // field has value 0xd
TRDT_14 = 14, // field has value 0xe
TRDT_15 = 15, // field has value 0xf

};
enum class PHYSEL_t : uint32_t {
    PHYSEL_0 = 0, // field has value 0x0
PHYSEL_1 = 1, // field has value 0x1

};
enum class HNPCAP_t : uint32_t {
    HNPCAP_0 = 0, // field has value 0x0
HNPCAP_1 = 1, // field has value 0x1

};
enum class FDMOD_t : uint32_t {
    FDMOD_0 = 0, // field has value 0x0
FDMOD_1 = 1, // field has value 0x1

};
enum class SRPCAP_t : uint32_t {
    SRPCAP_0 = 0, // field has value 0x0
SRPCAP_1 = 1, // field has value 0x1

};
enum class FHMOD_t : uint32_t {
    FHMOD_0 = 0, // field has value 0x0
FHMOD_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GUSBCFG : public ReadableWritable<address> {
   public:
    GUSBCFG() : ReadableWritable<address>() {}
    TOCAL_t TOCAL(){
    uint32_t tmp = this->bits_masked(0x7) >> 0;
    return reinterpret_cast<TOCAL_t>(tmp);
}
void TOCAL(TOCAL_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x7);
}
void PHYSEL(PHYSEL_t v){
   uint32_t tmp = v << 6;
   this->bits(v);
}
SRPCAP_t SRPCAP(){
    uint32_t tmp = this->bits_masked(0x100) >> 8;
    return reinterpret_cast<SRPCAP_t>(tmp);
}
void SRPCAP(SRPCAP_t v){
   uint32_t tmp = v << 8;
   this->bits_masked(v, 0x100);
}
HNPCAP_t HNPCAP(){
    uint32_t tmp = this->bits_masked(0x200) >> 9;
    return reinterpret_cast<HNPCAP_t>(tmp);
}
void HNPCAP(HNPCAP_t v){
   uint32_t tmp = v << 9;
   this->bits_masked(v, 0x200);
}
TRDT_t TRDT(){
    uint32_t tmp = this->bits_masked(0x3c00) >> 10;
    return reinterpret_cast<TRDT_t>(tmp);
}
void TRDT(TRDT_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x3c00);
}
FHMOD_t FHMOD(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<FHMOD_t>(tmp);
}
void FHMOD(FHMOD_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
FDMOD_t FDMOD(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<FDMOD_t>(tmp);
}
void FDMOD(FDMOD_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
CTXPKT_t CTXPKT(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<CTXPKT_t>(tmp);
}
void CTXPKT(CTXPKT_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace GRSTCTL{
enum class RXFFLSH_t : uint32_t {
    RXFFLSH_0 = 0, // field has value 0x0
RXFFLSH_1 = 1, // field has value 0x1

};
enum class FCRST_t : uint32_t {
    FCRST_0 = 0, // field has value 0x0
FCRST_1 = 1, // field has value 0x1

};
enum class TXFFLSH_t : uint32_t {
    TXFFLSH_0 = 0, // field has value 0x0
TXFFLSH_1 = 1, // field has value 0x1

};
enum class HSRST_t : uint32_t {
    HSRST_0 = 0, // field has value 0x0
HSRST_1 = 1, // field has value 0x1

};
enum class CSRST_t : uint32_t {
    CSRST_0 = 0, // field has value 0x0
CSRST_1 = 1, // field has value 0x1

};
enum class AHBIDL_t : uint32_t {
    AHBIDL_0 = 0, // field has value 0x0
AHBIDL_1 = 1, // field has value 0x1

};
enum class TXFNUM_t : uint32_t {
    TXFNUM_0 = 0, // field has value 0x0
TXFNUM_1 = 1, // field has value 0x1
TXFNUM_2 = 2, // field has value 0x2
TXFNUM_3 = 3, // field has value 0x3
TXFNUM_4 = 4, // field has value 0x4
TXFNUM_5 = 5, // field has value 0x5
TXFNUM_6 = 6, // field has value 0x6
TXFNUM_7 = 7, // field has value 0x7
TXFNUM_8 = 8, // field has value 0x8
TXFNUM_9 = 9, // field has value 0x9
TXFNUM_10 = 10, // field has value 0xa
TXFNUM_11 = 11, // field has value 0xb
TXFNUM_12 = 12, // field has value 0xc
TXFNUM_13 = 13, // field has value 0xd
TXFNUM_14 = 14, // field has value 0xe
TXFNUM_15 = 15, // field has value 0xf
TXFNUM_16 = 16, // field has value 0x10
TXFNUM_17 = 17, // field has value 0x11
TXFNUM_18 = 18, // field has value 0x12
TXFNUM_19 = 19, // field has value 0x13
TXFNUM_20 = 20, // field has value 0x14
TXFNUM_21 = 21, // field has value 0x15
TXFNUM_22 = 22, // field has value 0x16
TXFNUM_23 = 23, // field has value 0x17
TXFNUM_24 = 24, // field has value 0x18
TXFNUM_25 = 25, // field has value 0x19
TXFNUM_26 = 26, // field has value 0x1a
TXFNUM_27 = 27, // field has value 0x1b
TXFNUM_28 = 28, // field has value 0x1c
TXFNUM_29 = 29, // field has value 0x1d
TXFNUM_30 = 30, // field has value 0x1e
TXFNUM_31 = 31, // field has value 0x1f

};
template <uint32_t address>
class GRSTCTL : public ReadableWritable<address> {
   public:
    GRSTCTL() : ReadableWritable<address>() {}
    CSRST_t CSRST(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CSRST_t>(tmp);
}
void CSRST(CSRST_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
HSRST_t HSRST(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<HSRST_t>(tmp);
}
void HSRST(HSRST_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
FCRST_t FCRST(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<FCRST_t>(tmp);
}
void FCRST(FCRST_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
RXFFLSH_t RXFFLSH(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<RXFFLSH_t>(tmp);
}
void RXFFLSH(RXFFLSH_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
TXFFLSH_t TXFFLSH(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<TXFFLSH_t>(tmp);
}
void TXFFLSH(TXFFLSH_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
TXFNUM_t TXFNUM(){
    uint32_t tmp = this->bits_masked(0x7c0) >> 6;
    return reinterpret_cast<TXFNUM_t>(tmp);
}
void TXFNUM(TXFNUM_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x7c0);
}
AHBIDL_t AHBIDL(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<AHBIDL_t>(tmp);
}
};
}
namespace GINTSTS{
enum class HCINT_t : uint32_t {
    HCINT_0 = 0, // field has value 0x0
HCINT_1 = 1, // field has value 0x1

};
enum class ESUSP_t : uint32_t {
    ESUSP_0 = 0, // field has value 0x0
ESUSP_1 = 1, // field has value 0x1

};
enum class SOF_t : uint32_t {
    SOF_0 = 0, // field has value 0x0
SOF_1 = 1, // field has value 0x1

};
enum class IPXFR_INCOMPISOOUT_t : uint32_t {
    IPXFR_INCOMPISOOUT_0 = 0, // field has value 0x0
IPXFR_INCOMPISOOUT_1 = 1, // field has value 0x1

};
enum class OEPINT_t : uint32_t {
    OEPINT_0 = 0, // field has value 0x0
OEPINT_1 = 1, // field has value 0x1

};
enum class RXFLVL_t : uint32_t {
    RXFLVL_0 = 0, // field has value 0x0
RXFLVL_1 = 1, // field has value 0x1

};
enum class SRQINT_t : uint32_t {
    SRQINT_0 = 0, // field has value 0x0
SRQINT_1 = 1, // field has value 0x1

};
enum class GINAKEFF_t : uint32_t {
    GINAKEFF_0 = 0, // field has value 0x0
GINAKEFF_1 = 1, // field has value 0x1

};
enum class USBRST_t : uint32_t {
    USBRST_0 = 0, // field has value 0x0
USBRST_1 = 1, // field has value 0x1

};
enum class WKUPINT_t : uint32_t {
    WKUPINT_0 = 0, // field has value 0x0
WKUPINT_1 = 1, // field has value 0x1

};
enum class DISCINT_t : uint32_t {
    DISCINT_0 = 0, // field has value 0x0
DISCINT_1 = 1, // field has value 0x1

};
enum class EOPF_t : uint32_t {
    EOPF_0 = 0, // field has value 0x0
EOPF_1 = 1, // field has value 0x1

};
enum class HPRTINT_t : uint32_t {
    HPRTINT_0 = 0, // field has value 0x0
HPRTINT_1 = 1, // field has value 0x1

};
enum class OTGINT_t : uint32_t {
    OTGINT_0 = 0, // field has value 0x0
OTGINT_1 = 1, // field has value 0x1

};
enum class NPTXFE_t : uint32_t {
    NPTXFE_0 = 0, // field has value 0x0
NPTXFE_1 = 1, // field has value 0x1

};
enum class IEPINT_t : uint32_t {
    IEPINT_0 = 0, // field has value 0x0
IEPINT_1 = 1, // field has value 0x1

};
enum class IISOIXFR_t : uint32_t {
    IISOIXFR_0 = 0, // field has value 0x0
IISOIXFR_1 = 1, // field has value 0x1

};
enum class CMOD_t : uint32_t {
    CMOD_0 = 0, // field has value 0x0
CMOD_1 = 1, // field has value 0x1

};
enum class GOUTNAKEFF_t : uint32_t {
    GOUTNAKEFF_0 = 0, // field has value 0x0
GOUTNAKEFF_1 = 1, // field has value 0x1

};
enum class ISOODRP_t : uint32_t {
    ISOODRP_0 = 0, // field has value 0x0
ISOODRP_1 = 1, // field has value 0x1

};
enum class ENUMDNE_t : uint32_t {
    ENUMDNE_0 = 0, // field has value 0x0
ENUMDNE_1 = 1, // field has value 0x1

};
enum class MMIS_t : uint32_t {
    MMIS_0 = 0, // field has value 0x0
MMIS_1 = 1, // field has value 0x1

};
enum class PTXFE_t : uint32_t {
    PTXFE_0 = 0, // field has value 0x0
PTXFE_1 = 1, // field has value 0x1

};
enum class CIDSCHG_t : uint32_t {
    CIDSCHG_0 = 0, // field has value 0x0
CIDSCHG_1 = 1, // field has value 0x1

};
enum class USBSUSP_t : uint32_t {
    USBSUSP_0 = 0, // field has value 0x0
USBSUSP_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GINTSTS : public ReadableWritable<address> {
   public:
    GINTSTS() : ReadableWritable<address>() {}
    CMOD_t CMOD(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<CMOD_t>(tmp);
}
MMIS_t MMIS(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<MMIS_t>(tmp);
}
void MMIS(MMIS_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
OTGINT_t OTGINT(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<OTGINT_t>(tmp);
}
SOF_t SOF(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<SOF_t>(tmp);
}
void SOF(SOF_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
RXFLVL_t RXFLVL(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<RXFLVL_t>(tmp);
}
NPTXFE_t NPTXFE(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<NPTXFE_t>(tmp);
}
GINAKEFF_t GINAKEFF(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<GINAKEFF_t>(tmp);
}
GOUTNAKEFF_t GOUTNAKEFF(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<GOUTNAKEFF_t>(tmp);
}
ESUSP_t ESUSP(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<ESUSP_t>(tmp);
}
void ESUSP(ESUSP_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
USBSUSP_t USBSUSP(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<USBSUSP_t>(tmp);
}
void USBSUSP(USBSUSP_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
USBRST_t USBRST(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<USBRST_t>(tmp);
}
void USBRST(USBRST_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
ENUMDNE_t ENUMDNE(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ENUMDNE_t>(tmp);
}
void ENUMDNE(ENUMDNE_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
ISOODRP_t ISOODRP(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<ISOODRP_t>(tmp);
}
void ISOODRP(ISOODRP_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
EOPF_t EOPF(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EOPF_t>(tmp);
}
void EOPF(EOPF_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
IEPINT_t IEPINT(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<IEPINT_t>(tmp);
}
OEPINT_t OEPINT(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<OEPINT_t>(tmp);
}
IISOIXFR_t IISOIXFR(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<IISOIXFR_t>(tmp);
}
void IISOIXFR(IISOIXFR_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
IPXFR_INCOMPISOOUT_t IPXFR_INCOMPISOOUT(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<IPXFR_INCOMPISOOUT_t>(tmp);
}
void IPXFR_INCOMPISOOUT(IPXFR_INCOMPISOOUT_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
HPRTINT_t HPRTINT(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<HPRTINT_t>(tmp);
}
HCINT_t HCINT(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<HCINT_t>(tmp);
}
PTXFE_t PTXFE(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<PTXFE_t>(tmp);
}
CIDSCHG_t CIDSCHG(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<CIDSCHG_t>(tmp);
}
void CIDSCHG(CIDSCHG_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
DISCINT_t DISCINT(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<DISCINT_t>(tmp);
}
void DISCINT(DISCINT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
SRQINT_t SRQINT(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<SRQINT_t>(tmp);
}
void SRQINT(SRQINT_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
WKUPINT_t WKUPINT(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<WKUPINT_t>(tmp);
}
void WKUPINT(WKUPINT_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace GINTMSK{
enum class OEPINT_t : uint32_t {
    OEPINT_0 = 0, // field has value 0x0
OEPINT_1 = 1, // field has value 0x1

};
enum class PTXFEM_t : uint32_t {
    PTXFEM_0 = 0, // field has value 0x0
PTXFEM_1 = 1, // field has value 0x1

};
enum class USBRST_t : uint32_t {
    USBRST_0 = 0, // field has value 0x0
USBRST_1 = 1, // field has value 0x1

};
enum class DISCINT_t : uint32_t {
    DISCINT_0 = 0, // field has value 0x0
DISCINT_1 = 1, // field has value 0x1

};
enum class GINAKEFFM_t : uint32_t {
    GINAKEFFM_0 = 0, // field has value 0x0
GINAKEFFM_1 = 1, // field has value 0x1

};
enum class IISOIXFRM_t : uint32_t {
    IISOIXFRM_0 = 0, // field has value 0x0
IISOIXFRM_1 = 1, // field has value 0x1

};
enum class ISOODRPM_t : uint32_t {
    ISOODRPM_0 = 0, // field has value 0x0
ISOODRPM_1 = 1, // field has value 0x1

};
enum class HCIM_t : uint32_t {
    HCIM_0 = 0, // field has value 0x0
HCIM_1 = 1, // field has value 0x1

};
enum class WUIM_t : uint32_t {
    WUIM_0 = 0, // field has value 0x0
WUIM_1 = 1, // field has value 0x1

};
enum class EOPFM_t : uint32_t {
    EOPFM_0 = 0, // field has value 0x0
EOPFM_1 = 1, // field has value 0x1

};
enum class SRQIM_t : uint32_t {
    SRQIM_0 = 0, // field has value 0x0
SRQIM_1 = 1, // field has value 0x1

};
enum class OTGINT_t : uint32_t {
    OTGINT_0 = 0, // field has value 0x0
OTGINT_1 = 1, // field has value 0x1

};
enum class ENUMDNEM_t : uint32_t {
    ENUMDNEM_0 = 0, // field has value 0x0
ENUMDNEM_1 = 1, // field has value 0x1

};
enum class SOFM_t : uint32_t {
    SOFM_0 = 0, // field has value 0x0
SOFM_1 = 1, // field has value 0x1

};
enum class CIDSCHGM_t : uint32_t {
    CIDSCHGM_0 = 0, // field has value 0x0
CIDSCHGM_1 = 1, // field has value 0x1

};
enum class IEPINT_t : uint32_t {
    IEPINT_0 = 0, // field has value 0x0
IEPINT_1 = 1, // field has value 0x1

};
enum class MMISM_t : uint32_t {
    MMISM_0 = 0, // field has value 0x0
MMISM_1 = 1, // field has value 0x1

};
enum class GONAKEFFM_t : uint32_t {
    GONAKEFFM_0 = 0, // field has value 0x0
GONAKEFFM_1 = 1, // field has value 0x1

};
enum class USBSUSPM_t : uint32_t {
    USBSUSPM_0 = 0, // field has value 0x0
USBSUSPM_1 = 1, // field has value 0x1

};
enum class ESUSPM_t : uint32_t {
    ESUSPM_0 = 0, // field has value 0x0
ESUSPM_1 = 1, // field has value 0x1

};
enum class IPXFRM_IISOOXFRM_t : uint32_t {
    IPXFRM_IISOOXFRM_0 = 0, // field has value 0x0
IPXFRM_IISOOXFRM_1 = 1, // field has value 0x1

};
enum class RXFLVLM_t : uint32_t {
    RXFLVLM_0 = 0, // field has value 0x0
RXFLVLM_1 = 1, // field has value 0x1

};
enum class EPMISM_t : uint32_t {
    EPMISM_0 = 0, // field has value 0x0
EPMISM_1 = 1, // field has value 0x1

};
enum class PRTIM_t : uint32_t {
    PRTIM_0 = 0, // field has value 0x0
PRTIM_1 = 1, // field has value 0x1

};
enum class NPTXFEM_t : uint32_t {
    NPTXFEM_0 = 0, // field has value 0x0
NPTXFEM_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GINTMSK : public ReadableWritable<address> {
   public:
    GINTMSK() : ReadableWritable<address>() {}
    MMISM_t MMISM(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<MMISM_t>(tmp);
}
void MMISM(MMISM_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
OTGINT_t OTGINT(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<OTGINT_t>(tmp);
}
void OTGINT(OTGINT_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
SOFM_t SOFM(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<SOFM_t>(tmp);
}
void SOFM(SOFM_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
RXFLVLM_t RXFLVLM(){
    uint32_t tmp = this->bits_masked(0x10) >> 4;
    return reinterpret_cast<RXFLVLM_t>(tmp);
}
void RXFLVLM(RXFLVLM_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x10);
}
NPTXFEM_t NPTXFEM(){
    uint32_t tmp = this->bits_masked(0x20) >> 5;
    return reinterpret_cast<NPTXFEM_t>(tmp);
}
void NPTXFEM(NPTXFEM_t v){
   uint32_t tmp = v << 5;
   this->bits_masked(v, 0x20);
}
GINAKEFFM_t GINAKEFFM(){
    uint32_t tmp = this->bits_masked(0x40) >> 6;
    return reinterpret_cast<GINAKEFFM_t>(tmp);
}
void GINAKEFFM(GINAKEFFM_t v){
   uint32_t tmp = v << 6;
   this->bits_masked(v, 0x40);
}
GONAKEFFM_t GONAKEFFM(){
    uint32_t tmp = this->bits_masked(0x80) >> 7;
    return reinterpret_cast<GONAKEFFM_t>(tmp);
}
void GONAKEFFM(GONAKEFFM_t v){
   uint32_t tmp = v << 7;
   this->bits_masked(v, 0x80);
}
ESUSPM_t ESUSPM(){
    uint32_t tmp = this->bits_masked(0x400) >> 10;
    return reinterpret_cast<ESUSPM_t>(tmp);
}
void ESUSPM(ESUSPM_t v){
   uint32_t tmp = v << 10;
   this->bits_masked(v, 0x400);
}
USBSUSPM_t USBSUSPM(){
    uint32_t tmp = this->bits_masked(0x800) >> 11;
    return reinterpret_cast<USBSUSPM_t>(tmp);
}
void USBSUSPM(USBSUSPM_t v){
   uint32_t tmp = v << 11;
   this->bits_masked(v, 0x800);
}
USBRST_t USBRST(){
    uint32_t tmp = this->bits_masked(0x1000) >> 12;
    return reinterpret_cast<USBRST_t>(tmp);
}
void USBRST(USBRST_t v){
   uint32_t tmp = v << 12;
   this->bits_masked(v, 0x1000);
}
ENUMDNEM_t ENUMDNEM(){
    uint32_t tmp = this->bits_masked(0x2000) >> 13;
    return reinterpret_cast<ENUMDNEM_t>(tmp);
}
void ENUMDNEM(ENUMDNEM_t v){
   uint32_t tmp = v << 13;
   this->bits_masked(v, 0x2000);
}
ISOODRPM_t ISOODRPM(){
    uint32_t tmp = this->bits_masked(0x4000) >> 14;
    return reinterpret_cast<ISOODRPM_t>(tmp);
}
void ISOODRPM(ISOODRPM_t v){
   uint32_t tmp = v << 14;
   this->bits_masked(v, 0x4000);
}
EOPFM_t EOPFM(){
    uint32_t tmp = this->bits_masked(0x8000) >> 15;
    return reinterpret_cast<EOPFM_t>(tmp);
}
void EOPFM(EOPFM_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x8000);
}
EPMISM_t EPMISM(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<EPMISM_t>(tmp);
}
void EPMISM(EPMISM_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
IEPINT_t IEPINT(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<IEPINT_t>(tmp);
}
void IEPINT(IEPINT_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
OEPINT_t OEPINT(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<OEPINT_t>(tmp);
}
void OEPINT(OEPINT_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
IISOIXFRM_t IISOIXFRM(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<IISOIXFRM_t>(tmp);
}
void IISOIXFRM(IISOIXFRM_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
IPXFRM_IISOOXFRM_t IPXFRM_IISOOXFRM(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<IPXFRM_IISOOXFRM_t>(tmp);
}
void IPXFRM_IISOOXFRM(IPXFRM_IISOOXFRM_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
PRTIM_t PRTIM(){
    uint32_t tmp = this->bits_masked(0x1000000) >> 24;
    return reinterpret_cast<PRTIM_t>(tmp);
}
HCIM_t HCIM(){
    uint32_t tmp = this->bits_masked(0x2000000) >> 25;
    return reinterpret_cast<HCIM_t>(tmp);
}
void HCIM(HCIM_t v){
   uint32_t tmp = v << 25;
   this->bits_masked(v, 0x2000000);
}
PTXFEM_t PTXFEM(){
    uint32_t tmp = this->bits_masked(0x4000000) >> 26;
    return reinterpret_cast<PTXFEM_t>(tmp);
}
void PTXFEM(PTXFEM_t v){
   uint32_t tmp = v << 26;
   this->bits_masked(v, 0x4000000);
}
CIDSCHGM_t CIDSCHGM(){
    uint32_t tmp = this->bits_masked(0x10000000) >> 28;
    return reinterpret_cast<CIDSCHGM_t>(tmp);
}
void CIDSCHGM(CIDSCHGM_t v){
   uint32_t tmp = v << 28;
   this->bits_masked(v, 0x10000000);
}
DISCINT_t DISCINT(){
    uint32_t tmp = this->bits_masked(0x20000000) >> 29;
    return reinterpret_cast<DISCINT_t>(tmp);
}
void DISCINT(DISCINT_t v){
   uint32_t tmp = v << 29;
   this->bits_masked(v, 0x20000000);
}
SRQIM_t SRQIM(){
    uint32_t tmp = this->bits_masked(0x40000000) >> 30;
    return reinterpret_cast<SRQIM_t>(tmp);
}
void SRQIM(SRQIM_t v){
   uint32_t tmp = v << 30;
   this->bits_masked(v, 0x40000000);
}
WUIM_t WUIM(){
    uint32_t tmp = this->bits_masked(0x80000000) >> 31;
    return reinterpret_cast<WUIM_t>(tmp);
}
void WUIM(WUIM_t v){
   uint32_t tmp = v << 31;
   this->bits_masked(v, 0x80000000);
}
};
}
namespace GRXSTSR_Device{

enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
enum class PKTSTS_t : uint32_t {
    PKTSTS_0 = 0, // field has value 0x0
PKTSTS_1 = 1, // field has value 0x1
PKTSTS_2 = 2, // field has value 0x2
PKTSTS_3 = 3, // field has value 0x3
PKTSTS_4 = 4, // field has value 0x4
PKTSTS_5 = 5, // field has value 0x5
PKTSTS_6 = 6, // field has value 0x6
PKTSTS_7 = 7, // field has value 0x7
PKTSTS_8 = 8, // field has value 0x8
PKTSTS_9 = 9, // field has value 0x9
PKTSTS_10 = 10, // field has value 0xa
PKTSTS_11 = 11, // field has value 0xb
PKTSTS_12 = 12, // field has value 0xc
PKTSTS_13 = 13, // field has value 0xd
PKTSTS_14 = 14, // field has value 0xe
PKTSTS_15 = 15, // field has value 0xf

};
enum class FRMNUM_t : uint32_t {
    FRMNUM_0 = 0, // field has value 0x0
FRMNUM_1 = 1, // field has value 0x1
FRMNUM_2 = 2, // field has value 0x2
FRMNUM_3 = 3, // field has value 0x3
FRMNUM_4 = 4, // field has value 0x4
FRMNUM_5 = 5, // field has value 0x5
FRMNUM_6 = 6, // field has value 0x6
FRMNUM_7 = 7, // field has value 0x7
FRMNUM_8 = 8, // field has value 0x8
FRMNUM_9 = 9, // field has value 0x9
FRMNUM_10 = 10, // field has value 0xa
FRMNUM_11 = 11, // field has value 0xb
FRMNUM_12 = 12, // field has value 0xc
FRMNUM_13 = 13, // field has value 0xd
FRMNUM_14 = 14, // field has value 0xe
FRMNUM_15 = 15, // field has value 0xf

};
template <uint32_t address>
class GRXSTSR_Device : public Readable<address> {
   public:
    GRXSTSR_Device() : Readable<address>() {}
    EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
uint16_t BCNT(){
    uint32_t tmp = this->bits_masked(0x7ff0) >> 4;
    return reinterpret_cast<uint16_t>(tmp);
}
void BCNT(uint16_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x7ff0);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x18000) >> 15;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x18000);
}
PKTSTS_t PKTSTS(){
    uint32_t tmp = this->bits_masked(0x1e0000) >> 17;
    return reinterpret_cast<PKTSTS_t>(tmp);
}
void PKTSTS(PKTSTS_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x1e0000);
}
FRMNUM_t FRMNUM(){
    uint32_t tmp = this->bits_masked(0x1e00000) >> 21;
    return reinterpret_cast<FRMNUM_t>(tmp);
}
void FRMNUM(FRMNUM_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x1e00000);
}
};
}
namespace GRXSTSR_Host{

enum class EPNUM_t : uint32_t {
    EPNUM_0 = 0, // field has value 0x0
EPNUM_1 = 1, // field has value 0x1
EPNUM_2 = 2, // field has value 0x2
EPNUM_3 = 3, // field has value 0x3
EPNUM_4 = 4, // field has value 0x4
EPNUM_5 = 5, // field has value 0x5
EPNUM_6 = 6, // field has value 0x6
EPNUM_7 = 7, // field has value 0x7
EPNUM_8 = 8, // field has value 0x8
EPNUM_9 = 9, // field has value 0x9
EPNUM_10 = 10, // field has value 0xa
EPNUM_11 = 11, // field has value 0xb
EPNUM_12 = 12, // field has value 0xc
EPNUM_13 = 13, // field has value 0xd
EPNUM_14 = 14, // field has value 0xe
EPNUM_15 = 15, // field has value 0xf

};
enum class DPID_t : uint32_t {
    DPID_0 = 0, // field has value 0x0
DPID_1 = 1, // field has value 0x1
DPID_2 = 2, // field has value 0x2
DPID_3 = 3, // field has value 0x3

};
enum class PKTSTS_t : uint32_t {
    PKTSTS_0 = 0, // field has value 0x0
PKTSTS_1 = 1, // field has value 0x1
PKTSTS_2 = 2, // field has value 0x2
PKTSTS_3 = 3, // field has value 0x3
PKTSTS_4 = 4, // field has value 0x4
PKTSTS_5 = 5, // field has value 0x5
PKTSTS_6 = 6, // field has value 0x6
PKTSTS_7 = 7, // field has value 0x7
PKTSTS_8 = 8, // field has value 0x8
PKTSTS_9 = 9, // field has value 0x9
PKTSTS_10 = 10, // field has value 0xa
PKTSTS_11 = 11, // field has value 0xb
PKTSTS_12 = 12, // field has value 0xc
PKTSTS_13 = 13, // field has value 0xd
PKTSTS_14 = 14, // field has value 0xe
PKTSTS_15 = 15, // field has value 0xf

};
enum class FRMNUM_t : uint32_t {
    FRMNUM_0 = 0, // field has value 0x0
FRMNUM_1 = 1, // field has value 0x1
FRMNUM_2 = 2, // field has value 0x2
FRMNUM_3 = 3, // field has value 0x3
FRMNUM_4 = 4, // field has value 0x4
FRMNUM_5 = 5, // field has value 0x5
FRMNUM_6 = 6, // field has value 0x6
FRMNUM_7 = 7, // field has value 0x7
FRMNUM_8 = 8, // field has value 0x8
FRMNUM_9 = 9, // field has value 0x9
FRMNUM_10 = 10, // field has value 0xa
FRMNUM_11 = 11, // field has value 0xb
FRMNUM_12 = 12, // field has value 0xc
FRMNUM_13 = 13, // field has value 0xd
FRMNUM_14 = 14, // field has value 0xe
FRMNUM_15 = 15, // field has value 0xf

};
template <uint32_t address>
class GRXSTSR_Host : public Readable<address> {
   public:
    GRXSTSR_Host() : Readable<address>() {}
    EPNUM_t EPNUM(){
    uint32_t tmp = this->bits_masked(0xf) >> 0;
    return reinterpret_cast<EPNUM_t>(tmp);
}
void EPNUM(EPNUM_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xf);
}
uint16_t BCNT(){
    uint32_t tmp = this->bits_masked(0x7ff0) >> 4;
    return reinterpret_cast<uint16_t>(tmp);
}
void BCNT(uint16_t v){
   uint32_t tmp = v << 4;
   this->bits_masked(v, 0x7ff0);
}
DPID_t DPID(){
    uint32_t tmp = this->bits_masked(0x18000) >> 15;
    return reinterpret_cast<DPID_t>(tmp);
}
void DPID(DPID_t v){
   uint32_t tmp = v << 15;
   this->bits_masked(v, 0x18000);
}
PKTSTS_t PKTSTS(){
    uint32_t tmp = this->bits_masked(0x1e0000) >> 17;
    return reinterpret_cast<PKTSTS_t>(tmp);
}
void PKTSTS(PKTSTS_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x1e0000);
}
FRMNUM_t FRMNUM(){
    uint32_t tmp = this->bits_masked(0x1e00000) >> 21;
    return reinterpret_cast<FRMNUM_t>(tmp);
}
void FRMNUM(FRMNUM_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x1e00000);
}
};
}
namespace GRXFSIZ{

template <uint32_t address>
class GRXFSIZ : public ReadableWritable<address> {
   public:
    GRXFSIZ() : ReadableWritable<address>() {}
    uint16_t RXFD(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void RXFD(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
};
}
namespace GNPTXFSIZ_Device{

template <uint32_t address>
class GNPTXFSIZ_Device : public ReadableWritable<address> {
   public:
    GNPTXFSIZ_Device() : ReadableWritable<address>() {}
    uint16_t TX0FSA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void TX0FSA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t TX0FD(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void TX0FD(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace GNPTXFSIZ_Host{

template <uint32_t address>
class GNPTXFSIZ_Host : public ReadableWritable<address> {
   public:
    GNPTXFSIZ_Host() : ReadableWritable<address>() {}
    uint16_t NPTXFSA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void NPTXFSA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t NPTXFD(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void NPTXFD(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace GNPTXSTS{

enum class NPTXQTOP_t : uint32_t {
    NPTXQTOP_0 = 0, // field has value 0x0
NPTXQTOP_1 = 1, // field has value 0x1
NPTXQTOP_2 = 2, // field has value 0x2
NPTXQTOP_3 = 3, // field has value 0x3
NPTXQTOP_4 = 4, // field has value 0x4
NPTXQTOP_5 = 5, // field has value 0x5
NPTXQTOP_6 = 6, // field has value 0x6
NPTXQTOP_7 = 7, // field has value 0x7
NPTXQTOP_8 = 8, // field has value 0x8
NPTXQTOP_9 = 9, // field has value 0x9
NPTXQTOP_10 = 10, // field has value 0xa
NPTXQTOP_11 = 11, // field has value 0xb
NPTXQTOP_12 = 12, // field has value 0xc
NPTXQTOP_13 = 13, // field has value 0xd
NPTXQTOP_14 = 14, // field has value 0xe
NPTXQTOP_15 = 15, // field has value 0xf
NPTXQTOP_16 = 16, // field has value 0x10
NPTXQTOP_17 = 17, // field has value 0x11
NPTXQTOP_18 = 18, // field has value 0x12
NPTXQTOP_19 = 19, // field has value 0x13
NPTXQTOP_20 = 20, // field has value 0x14
NPTXQTOP_21 = 21, // field has value 0x15
NPTXQTOP_22 = 22, // field has value 0x16
NPTXQTOP_23 = 23, // field has value 0x17
NPTXQTOP_24 = 24, // field has value 0x18
NPTXQTOP_25 = 25, // field has value 0x19
NPTXQTOP_26 = 26, // field has value 0x1a
NPTXQTOP_27 = 27, // field has value 0x1b
NPTXQTOP_28 = 28, // field has value 0x1c
NPTXQTOP_29 = 29, // field has value 0x1d
NPTXQTOP_30 = 30, // field has value 0x1e
NPTXQTOP_31 = 31, // field has value 0x1f
NPTXQTOP_32 = 32, // field has value 0x20
NPTXQTOP_33 = 33, // field has value 0x21
NPTXQTOP_34 = 34, // field has value 0x22
NPTXQTOP_35 = 35, // field has value 0x23
NPTXQTOP_36 = 36, // field has value 0x24
NPTXQTOP_37 = 37, // field has value 0x25
NPTXQTOP_38 = 38, // field has value 0x26
NPTXQTOP_39 = 39, // field has value 0x27
NPTXQTOP_40 = 40, // field has value 0x28
NPTXQTOP_41 = 41, // field has value 0x29
NPTXQTOP_42 = 42, // field has value 0x2a
NPTXQTOP_43 = 43, // field has value 0x2b
NPTXQTOP_44 = 44, // field has value 0x2c
NPTXQTOP_45 = 45, // field has value 0x2d
NPTXQTOP_46 = 46, // field has value 0x2e
NPTXQTOP_47 = 47, // field has value 0x2f
NPTXQTOP_48 = 48, // field has value 0x30
NPTXQTOP_49 = 49, // field has value 0x31
NPTXQTOP_50 = 50, // field has value 0x32
NPTXQTOP_51 = 51, // field has value 0x33
NPTXQTOP_52 = 52, // field has value 0x34
NPTXQTOP_53 = 53, // field has value 0x35
NPTXQTOP_54 = 54, // field has value 0x36
NPTXQTOP_55 = 55, // field has value 0x37
NPTXQTOP_56 = 56, // field has value 0x38
NPTXQTOP_57 = 57, // field has value 0x39
NPTXQTOP_58 = 58, // field has value 0x3a
NPTXQTOP_59 = 59, // field has value 0x3b
NPTXQTOP_60 = 60, // field has value 0x3c
NPTXQTOP_61 = 61, // field has value 0x3d
NPTXQTOP_62 = 62, // field has value 0x3e
NPTXQTOP_63 = 63, // field has value 0x3f
NPTXQTOP_64 = 64, // field has value 0x40
NPTXQTOP_65 = 65, // field has value 0x41
NPTXQTOP_66 = 66, // field has value 0x42
NPTXQTOP_67 = 67, // field has value 0x43
NPTXQTOP_68 = 68, // field has value 0x44
NPTXQTOP_69 = 69, // field has value 0x45
NPTXQTOP_70 = 70, // field has value 0x46
NPTXQTOP_71 = 71, // field has value 0x47
NPTXQTOP_72 = 72, // field has value 0x48
NPTXQTOP_73 = 73, // field has value 0x49
NPTXQTOP_74 = 74, // field has value 0x4a
NPTXQTOP_75 = 75, // field has value 0x4b
NPTXQTOP_76 = 76, // field has value 0x4c
NPTXQTOP_77 = 77, // field has value 0x4d
NPTXQTOP_78 = 78, // field has value 0x4e
NPTXQTOP_79 = 79, // field has value 0x4f
NPTXQTOP_80 = 80, // field has value 0x50
NPTXQTOP_81 = 81, // field has value 0x51
NPTXQTOP_82 = 82, // field has value 0x52
NPTXQTOP_83 = 83, // field has value 0x53
NPTXQTOP_84 = 84, // field has value 0x54
NPTXQTOP_85 = 85, // field has value 0x55
NPTXQTOP_86 = 86, // field has value 0x56
NPTXQTOP_87 = 87, // field has value 0x57
NPTXQTOP_88 = 88, // field has value 0x58
NPTXQTOP_89 = 89, // field has value 0x59
NPTXQTOP_90 = 90, // field has value 0x5a
NPTXQTOP_91 = 91, // field has value 0x5b
NPTXQTOP_92 = 92, // field has value 0x5c
NPTXQTOP_93 = 93, // field has value 0x5d
NPTXQTOP_94 = 94, // field has value 0x5e
NPTXQTOP_95 = 95, // field has value 0x5f
NPTXQTOP_96 = 96, // field has value 0x60
NPTXQTOP_97 = 97, // field has value 0x61
NPTXQTOP_98 = 98, // field has value 0x62
NPTXQTOP_99 = 99, // field has value 0x63
NPTXQTOP_100 = 100, // field has value 0x64
NPTXQTOP_101 = 101, // field has value 0x65
NPTXQTOP_102 = 102, // field has value 0x66
NPTXQTOP_103 = 103, // field has value 0x67
NPTXQTOP_104 = 104, // field has value 0x68
NPTXQTOP_105 = 105, // field has value 0x69
NPTXQTOP_106 = 106, // field has value 0x6a
NPTXQTOP_107 = 107, // field has value 0x6b
NPTXQTOP_108 = 108, // field has value 0x6c
NPTXQTOP_109 = 109, // field has value 0x6d
NPTXQTOP_110 = 110, // field has value 0x6e
NPTXQTOP_111 = 111, // field has value 0x6f
NPTXQTOP_112 = 112, // field has value 0x70
NPTXQTOP_113 = 113, // field has value 0x71
NPTXQTOP_114 = 114, // field has value 0x72
NPTXQTOP_115 = 115, // field has value 0x73
NPTXQTOP_116 = 116, // field has value 0x74
NPTXQTOP_117 = 117, // field has value 0x75
NPTXQTOP_118 = 118, // field has value 0x76
NPTXQTOP_119 = 119, // field has value 0x77
NPTXQTOP_120 = 120, // field has value 0x78
NPTXQTOP_121 = 121, // field has value 0x79
NPTXQTOP_122 = 122, // field has value 0x7a
NPTXQTOP_123 = 123, // field has value 0x7b
NPTXQTOP_124 = 124, // field has value 0x7c
NPTXQTOP_125 = 125, // field has value 0x7d
NPTXQTOP_126 = 126, // field has value 0x7e
NPTXQTOP_127 = 127, // field has value 0x7f

};
template <uint32_t address>
class GNPTXSTS : public Readable<address> {
   public:
    GNPTXSTS() : Readable<address>() {}
    uint16_t NPTXFSAV(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void NPTXFSAV(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint8_t NPTQXSAV(){
    uint32_t tmp = this->bits_masked(0xff0000) >> 16;
    return reinterpret_cast<uint8_t>(tmp);
}
void NPTQXSAV(uint8_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xff0000);
}
NPTXQTOP_t NPTXQTOP(){
    uint32_t tmp = this->bits_masked(0x7f000000) >> 24;
    return reinterpret_cast<NPTXQTOP_t>(tmp);
}
void NPTXQTOP(NPTXQTOP_t v){
   uint32_t tmp = v << 24;
   this->bits_masked(v, 0x7f000000);
}
};
}
namespace GCCFG{
enum class SDEN_t : uint32_t {
    SDEN_0 = 0, // field has value 0x0
SDEN_1 = 1, // field has value 0x1

};
enum class PDET_t : uint32_t {
    PDET_0 = 0, // field has value 0x0
PDET_1 = 1, // field has value 0x1

};
enum class PS2DET_t : uint32_t {
    PS2DET_0 = 0, // field has value 0x0
PS2DET_1 = 1, // field has value 0x1

};
enum class BCDEN_t : uint32_t {
    BCDEN_0 = 0, // field has value 0x0
BCDEN_1 = 1, // field has value 0x1

};
enum class PDEN_t : uint32_t {
    PDEN_0 = 0, // field has value 0x0
PDEN_1 = 1, // field has value 0x1

};
enum class DCDET_t : uint32_t {
    DCDET_0 = 0, // field has value 0x0
DCDET_1 = 1, // field has value 0x1

};
enum class PWRDWN_t : uint32_t {
    PWRDWN_0 = 0, // field has value 0x0
PWRDWN_1 = 1, // field has value 0x1

};
enum class VBDEN_t : uint32_t {
    VBDEN_0 = 0, // field has value 0x0
VBDEN_1 = 1, // field has value 0x1

};
enum class SDET_t : uint32_t {
    SDET_0 = 0, // field has value 0x0
SDET_1 = 1, // field has value 0x1

};
enum class DCDEN_t : uint32_t {
    DCDEN_0 = 0, // field has value 0x0
DCDEN_1 = 1, // field has value 0x1

};
template <uint32_t address>
class GCCFG : public ReadableWritable<address> {
   public:
    GCCFG() : ReadableWritable<address>() {}
    DCDET_t DCDET(){
    uint32_t tmp = this->bits_masked(0x1) >> 0;
    return reinterpret_cast<DCDET_t>(tmp);
}
void DCDET(DCDET_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0x1);
}
PDET_t PDET(){
    uint32_t tmp = this->bits_masked(0x2) >> 1;
    return reinterpret_cast<PDET_t>(tmp);
}
void PDET(PDET_t v){
   uint32_t tmp = v << 1;
   this->bits_masked(v, 0x2);
}
SDET_t SDET(){
    uint32_t tmp = this->bits_masked(0x4) >> 2;
    return reinterpret_cast<SDET_t>(tmp);
}
void SDET(SDET_t v){
   uint32_t tmp = v << 2;
   this->bits_masked(v, 0x4);
}
PS2DET_t PS2DET(){
    uint32_t tmp = this->bits_masked(0x8) >> 3;
    return reinterpret_cast<PS2DET_t>(tmp);
}
void PS2DET(PS2DET_t v){
   uint32_t tmp = v << 3;
   this->bits_masked(v, 0x8);
}
PWRDWN_t PWRDWN(){
    uint32_t tmp = this->bits_masked(0x10000) >> 16;
    return reinterpret_cast<PWRDWN_t>(tmp);
}
void PWRDWN(PWRDWN_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0x10000);
}
BCDEN_t BCDEN(){
    uint32_t tmp = this->bits_masked(0x20000) >> 17;
    return reinterpret_cast<BCDEN_t>(tmp);
}
void BCDEN(BCDEN_t v){
   uint32_t tmp = v << 17;
   this->bits_masked(v, 0x20000);
}
DCDEN_t DCDEN(){
    uint32_t tmp = this->bits_masked(0x40000) >> 18;
    return reinterpret_cast<DCDEN_t>(tmp);
}
void DCDEN(DCDEN_t v){
   uint32_t tmp = v << 18;
   this->bits_masked(v, 0x40000);
}
PDEN_t PDEN(){
    uint32_t tmp = this->bits_masked(0x80000) >> 19;
    return reinterpret_cast<PDEN_t>(tmp);
}
void PDEN(PDEN_t v){
   uint32_t tmp = v << 19;
   this->bits_masked(v, 0x80000);
}
SDEN_t SDEN(){
    uint32_t tmp = this->bits_masked(0x100000) >> 20;
    return reinterpret_cast<SDEN_t>(tmp);
}
void SDEN(SDEN_t v){
   uint32_t tmp = v << 20;
   this->bits_masked(v, 0x100000);
}
VBDEN_t VBDEN(){
    uint32_t tmp = this->bits_masked(0x200000) >> 21;
    return reinterpret_cast<VBDEN_t>(tmp);
}
void VBDEN(VBDEN_t v){
   uint32_t tmp = v << 21;
   this->bits_masked(v, 0x200000);
}
};
}
namespace CID{

template <uint32_t address>
class CID : public ReadableWritable<address> {
   public:
    CID() : ReadableWritable<address>() {}
    uint32_t PRODUCT_ID(){
    uint32_t tmp = this->bits_masked(0xffffffff) >> 0;
    return reinterpret_cast<uint32_t>(tmp);
}
void PRODUCT_ID(uint32_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffffffff);
}
};
}
namespace HPTXFSIZ{

template <uint32_t address>
class HPTXFSIZ : public ReadableWritable<address> {
   public:
    HPTXFSIZ() : ReadableWritable<address>() {}
    uint16_t PTXSA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void PTXSA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t PTXFSIZ(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void PTXFSIZ(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace DIEPTXF1{

template <uint32_t address>
class DIEPTXF1 : public ReadableWritable<address> {
   public:
    DIEPTXF1() : ReadableWritable<address>() {}
    uint16_t INEPTXSA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXSA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t INEPTXFD(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXFD(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace DIEPTXF2{

template <uint32_t address>
class DIEPTXF2 : public ReadableWritable<address> {
   public:
    DIEPTXF2() : ReadableWritable<address>() {}
    uint16_t INEPTXSA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXSA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t INEPTXFD(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXFD(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
namespace DIEPTXF3{

template <uint32_t address>
class DIEPTXF3 : public ReadableWritable<address> {
   public:
    DIEPTXF3() : ReadableWritable<address>() {}
    uint16_t INEPTXSA(){
    uint32_t tmp = this->bits_masked(0xffff) >> 0;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXSA(uint16_t v){
   uint32_t tmp = v << 0;
   this->bits_masked(v, 0xffff);
}
uint16_t INEPTXFD(){
    uint32_t tmp = this->bits_masked(0xffff0000) >> 16;
    return reinterpret_cast<uint16_t>(tmp);
}
void INEPTXFD(uint16_t v){
   uint32_t tmp = v << 16;
   this->bits_masked(v, 0xffff0000);
}
};
}
template<uint32_t base_address>
class USB_OTG_FS{
    public:
    // OTG_FS control and status register(OTG_FS_GOTGCTL)
GOTGCTL<base_address + 0> GOTGCTL; 
// OTG_FS interrupt register(OTG_FS_GOTGINT)
GOTGINT<base_address + 4> GOTGINT; 
// OTG_FS AHB configuration register(OTG_FS_GAHBCFG)
GAHBCFG<base_address + 8> GAHBCFG; 
// OTG_FS USB configuration register(OTG_FS_GUSBCFG)
GUSBCFG<base_address + 12> GUSBCFG; 
// OTG_FS reset register(OTG_FS_GRSTCTL)
GRSTCTL<base_address + 16> GRSTCTL; 
// OTG_FS core interrupt register(OTG_FS_GINTSTS)
GINTSTS<base_address + 20> GINTSTS; 
// OTG_FS interrupt mask register(OTG_FS_GINTMSK)
GINTMSK<base_address + 24> GINTMSK; 
// OTG_FS Receive status debug read(Devicemode)
GRXSTSR_Device<base_address + 28> GRXSTSR_Device; 
// OTG_FS Receive status debug read(Hostmode)
GRXSTSR_Host<base_address + 28> GRXSTSR_Host; 
// OTG_FS Receive FIFO size register(OTG_FS_GRXFSIZ)
GRXFSIZ<base_address + 36> GRXFSIZ; 
// OTG_FS non-periodic transmit FIFO sizeregister (Device mode)
GNPTXFSIZ_Device<base_address + 40> GNPTXFSIZ_Device; 
// OTG_FS non-periodic transmit FIFO sizeregister (Host mode)
GNPTXFSIZ_Host<base_address + 40> GNPTXFSIZ_Host; 
// OTG_FS non-periodic transmit FIFO/queuestatus register (OTG_FS_GNPTXSTS)
GNPTXSTS<base_address + 44> GNPTXSTS; 
// OTG_FS general core configuration register(OTG_FS_GCCFG)
GCCFG<base_address + 56> GCCFG; 
// core ID register
CID<base_address + 60> CID; 
// OTG_FS Host periodic transmit FIFO sizeregister (OTG_FS_HPTXFSIZ)
HPTXFSIZ<base_address + 256> HPTXFSIZ; 
// OTG_FS device IN endpoint transmit FIFO sizeregister (OTG_FS_DIEPTXF2)
DIEPTXF1<base_address + 260> DIEPTXF1; 
// OTG_FS device IN endpoint transmit FIFO sizeregister (OTG_FS_DIEPTXF3)
DIEPTXF2<base_address + 264> DIEPTXF2; 
// OTG_FS device IN endpoint transmit FIFO sizeregister (OTG_FS_DIEPTXF4)
DIEPTXF3<base_address + 268> DIEPTXF3; 
};
}

#ifndef IOSTM8S003K3_H
#define IOSTM8S003K3_H

//Generated from ddf/iostm8s003k3.sfr

volatile unsigned char __at(0x5000) PA_ODR; // Port A data output latch register
typedef struct
{
    unsigned char ODR0                  : 1;
    unsigned char ODR1                  : 1;
    unsigned char ODR2                  : 1;
    unsigned char ODR3                  : 1;
    unsigned char ODR4                  : 1;
    unsigned char ODR5                  : 1;
    unsigned char ODR6                  : 1;
    unsigned char ODR7                  : 1;
} __BITS_PA_ODR;
volatile __BITS_PA_ODR __at(0x5000) PA_ODR_bits;


volatile unsigned char __at(0x5001) PA_IDR; // Port A input pin value register
typedef struct
{
    unsigned char IDR0                  : 1;
    unsigned char IDR1                  : 1;
    unsigned char IDR2                  : 1;
    unsigned char IDR3                  : 1;
    unsigned char IDR4                  : 1;
    unsigned char IDR5                  : 1;
    unsigned char IDR6                  : 1;
    unsigned char IDR7                  : 1;
} __BITS_PA_IDR;
volatile __BITS_PA_IDR __at(0x5001) PA_IDR_bits;


volatile unsigned char __at(0x5002) PA_DDR; // Port A data direction register
typedef struct
{
    unsigned char DDR0                  : 1;
    unsigned char DDR1                  : 1;
    unsigned char DDR2                  : 1;
    unsigned char DDR3                  : 1;
    unsigned char DDR4                  : 1;
    unsigned char DDR5                  : 1;
    unsigned char DDR6                  : 1;
    unsigned char DDR7                  : 1;
} __BITS_PA_DDR;
volatile __BITS_PA_DDR __at(0x5002) PA_DDR_bits;


volatile unsigned char __at(0x5003) PA_CR1; // Port A control register 1
typedef struct
{
    unsigned char C10                   : 1;
    unsigned char C11                   : 1;
    unsigned char C12                   : 1;
    unsigned char C13                   : 1;
    unsigned char C14                   : 1;
    unsigned char C15                   : 1;
    unsigned char C16                   : 1;
    unsigned char C17                   : 1;
} __BITS_PA_CR1;
volatile __BITS_PA_CR1 __at(0x5003) PA_CR1_bits;


volatile unsigned char __at(0x5004) PA_CR2; // Port A control register 2
typedef struct
{
    unsigned char C20                   : 1;
    unsigned char C21                   : 1;
    unsigned char C22                   : 1;
    unsigned char C23                   : 1;
    unsigned char C24                   : 1;
    unsigned char C25                   : 1;
    unsigned char C26                   : 1;
    unsigned char C27                   : 1;
} __BITS_PA_CR2;
volatile __BITS_PA_CR2 __at(0x5004) PA_CR2_bits;


volatile unsigned char __at(0x5005) PB_ODR; // Port B data output latch register
typedef struct
{
    unsigned char ODR0                  : 1;
    unsigned char ODR1                  : 1;
    unsigned char ODR2                  : 1;
    unsigned char ODR3                  : 1;
    unsigned char ODR4                  : 1;
    unsigned char ODR5                  : 1;
    unsigned char ODR6                  : 1;
    unsigned char ODR7                  : 1;
} __BITS_PB_ODR;
volatile __BITS_PB_ODR __at(0x5005) PB_ODR_bits;


volatile unsigned char __at(0x5006) PB_IDR; // Port B input pin value register
typedef struct
{
    unsigned char IDR0                  : 1;
    unsigned char IDR1                  : 1;
    unsigned char IDR2                  : 1;
    unsigned char IDR3                  : 1;
    unsigned char IDR4                  : 1;
    unsigned char IDR5                  : 1;
    unsigned char IDR6                  : 1;
    unsigned char IDR7                  : 1;
} __BITS_PB_IDR;
volatile __BITS_PB_IDR __at(0x5006) PB_IDR_bits;


volatile unsigned char __at(0x5007) PB_DDR; // Port B data direction register
typedef struct
{
    unsigned char DDR0                  : 1;
    unsigned char DDR1                  : 1;
    unsigned char DDR2                  : 1;
    unsigned char DDR3                  : 1;
    unsigned char DDR4                  : 1;
    unsigned char DDR5                  : 1;
    unsigned char DDR6                  : 1;
    unsigned char DDR7                  : 1;
} __BITS_PB_DDR;
volatile __BITS_PB_DDR __at(0x5007) PB_DDR_bits;


volatile unsigned char __at(0x5008) PB_CR1; // Port B control register 1
typedef struct
{
    unsigned char C10                   : 1;
    unsigned char C11                   : 1;
    unsigned char C12                   : 1;
    unsigned char C13                   : 1;
    unsigned char C14                   : 1;
    unsigned char C15                   : 1;
    unsigned char C16                   : 1;
    unsigned char C17                   : 1;
} __BITS_PB_CR1;
volatile __BITS_PB_CR1 __at(0x5008) PB_CR1_bits;


volatile unsigned char __at(0x5009) PB_CR2; // Port B control register 2
typedef struct
{
    unsigned char C20                   : 1;
    unsigned char C21                   : 1;
    unsigned char C22                   : 1;
    unsigned char C23                   : 1;
    unsigned char C24                   : 1;
    unsigned char C25                   : 1;
    unsigned char C26                   : 1;
    unsigned char C27                   : 1;
} __BITS_PB_CR2;
volatile __BITS_PB_CR2 __at(0x5009) PB_CR2_bits;


volatile unsigned char __at(0x500A) PC_ODR; // Port C data output latch register
typedef struct
{
    unsigned char ODR0                  : 1;
    unsigned char ODR1                  : 1;
    unsigned char ODR2                  : 1;
    unsigned char ODR3                  : 1;
    unsigned char ODR4                  : 1;
    unsigned char ODR5                  : 1;
    unsigned char ODR6                  : 1;
    unsigned char ODR7                  : 1;
} __BITS_PC_ODR;
volatile __BITS_PC_ODR __at(0x500A) PC_ODR_bits;


volatile unsigned char __at(0x500B) PC_IDR; // Port C input pin value register
typedef struct
{
    unsigned char IDR0                  : 1;
    unsigned char IDR1                  : 1;
    unsigned char IDR2                  : 1;
    unsigned char IDR3                  : 1;
    unsigned char IDR4                  : 1;
    unsigned char IDR5                  : 1;
    unsigned char IDR6                  : 1;
    unsigned char IDR7                  : 1;
} __BITS_PC_IDR;
volatile __BITS_PC_IDR __at(0x500B) PC_IDR_bits;


volatile unsigned char __at(0x500C) PC_DDR; // Port C data direction register
typedef struct
{
    unsigned char DDR0                  : 1;
    unsigned char DDR1                  : 1;
    unsigned char DDR2                  : 1;
    unsigned char DDR3                  : 1;
    unsigned char DDR4                  : 1;
    unsigned char DDR5                  : 1;
    unsigned char DDR6                  : 1;
    unsigned char DDR7                  : 1;
} __BITS_PC_DDR;
volatile __BITS_PC_DDR __at(0x500C) PC_DDR_bits;


volatile unsigned char __at(0x500D) PC_CR1; // Port C control register 1
typedef struct
{
    unsigned char C10                   : 1;
    unsigned char C11                   : 1;
    unsigned char C12                   : 1;
    unsigned char C13                   : 1;
    unsigned char C14                   : 1;
    unsigned char C15                   : 1;
    unsigned char C16                   : 1;
    unsigned char C17                   : 1;
} __BITS_PC_CR1;
volatile __BITS_PC_CR1 __at(0x500D) PC_CR1_bits;


volatile unsigned char __at(0x500E) PC_CR2; // Port C control register 2
typedef struct
{
    unsigned char C20                   : 1;
    unsigned char C21                   : 1;
    unsigned char C22                   : 1;
    unsigned char C23                   : 1;
    unsigned char C24                   : 1;
    unsigned char C25                   : 1;
    unsigned char C26                   : 1;
    unsigned char C27                   : 1;
} __BITS_PC_CR2;
volatile __BITS_PC_CR2 __at(0x500E) PC_CR2_bits;


volatile unsigned char __at(0x500F) PD_ODR; // Port D data output latch register
typedef struct
{
    unsigned char ODR0                  : 1;
    unsigned char ODR1                  : 1;
    unsigned char ODR2                  : 1;
    unsigned char ODR3                  : 1;
    unsigned char ODR4                  : 1;
    unsigned char ODR5                  : 1;
    unsigned char ODR6                  : 1;
    unsigned char ODR7                  : 1;
} __BITS_PD_ODR;
volatile __BITS_PD_ODR __at(0x500F) PD_ODR_bits;


volatile unsigned char __at(0x5010) PD_IDR; // Port D input pin value register
typedef struct
{
    unsigned char IDR0                  : 1;
    unsigned char IDR1                  : 1;
    unsigned char IDR2                  : 1;
    unsigned char IDR3                  : 1;
    unsigned char IDR4                  : 1;
    unsigned char IDR5                  : 1;
    unsigned char IDR6                  : 1;
    unsigned char IDR7                  : 1;
} __BITS_PD_IDR;
volatile __BITS_PD_IDR __at(0x5010) PD_IDR_bits;


volatile unsigned char __at(0x5011) PD_DDR; // Port D data direction register
typedef struct
{
    unsigned char DDR0                  : 1;
    unsigned char DDR1                  : 1;
    unsigned char DDR2                  : 1;
    unsigned char DDR3                  : 1;
    unsigned char DDR4                  : 1;
    unsigned char DDR5                  : 1;
    unsigned char DDR6                  : 1;
    unsigned char DDR7                  : 1;
} __BITS_PD_DDR;
volatile __BITS_PD_DDR __at(0x5011) PD_DDR_bits;


volatile unsigned char __at(0x5012) PD_CR1; // Port D control register 1
typedef struct
{
    unsigned char C10                   : 1;
    unsigned char C11                   : 1;
    unsigned char C12                   : 1;
    unsigned char C13                   : 1;
    unsigned char C14                   : 1;
    unsigned char C15                   : 1;
    unsigned char C16                   : 1;
    unsigned char C17                   : 1;
} __BITS_PD_CR1;
volatile __BITS_PD_CR1 __at(0x5012) PD_CR1_bits;


volatile unsigned char __at(0x5013) PD_CR2; // Port D control register 2
typedef struct
{
    unsigned char C20                   : 1;
    unsigned char C21                   : 1;
    unsigned char C22                   : 1;
    unsigned char C23                   : 1;
    unsigned char C24                   : 1;
    unsigned char C25                   : 1;
    unsigned char C26                   : 1;
    unsigned char C27                   : 1;
} __BITS_PD_CR2;
volatile __BITS_PD_CR2 __at(0x5013) PD_CR2_bits;


volatile unsigned char __at(0x5014) PE_ODR; // Port E data output latch register
typedef struct
{
    unsigned char ODR0                  : 1;
    unsigned char ODR1                  : 1;
    unsigned char ODR2                  : 1;
    unsigned char ODR3                  : 1;
    unsigned char ODR4                  : 1;
    unsigned char ODR5                  : 1;
    unsigned char ODR6                  : 1;
    unsigned char ODR7                  : 1;
} __BITS_PE_ODR;
volatile __BITS_PE_ODR __at(0x5014) PE_ODR_bits;


volatile unsigned char __at(0x5015) PE_IDR; // Port E input pin value register
typedef struct
{
    unsigned char IDR0                  : 1;
    unsigned char IDR1                  : 1;
    unsigned char IDR2                  : 1;
    unsigned char IDR3                  : 1;
    unsigned char IDR4                  : 1;
    unsigned char IDR5                  : 1;
    unsigned char IDR6                  : 1;
    unsigned char IDR7                  : 1;
} __BITS_PE_IDR;
volatile __BITS_PE_IDR __at(0x5015) PE_IDR_bits;


volatile unsigned char __at(0x5016) PE_DDR; // Port E data direction register
typedef struct
{
    unsigned char DDR0                  : 1;
    unsigned char DDR1                  : 1;
    unsigned char DDR2                  : 1;
    unsigned char DDR3                  : 1;
    unsigned char DDR4                  : 1;
    unsigned char DDR5                  : 1;
    unsigned char DDR6                  : 1;
    unsigned char DDR7                  : 1;
} __BITS_PE_DDR;
volatile __BITS_PE_DDR __at(0x5016) PE_DDR_bits;


volatile unsigned char __at(0x5017) PE_CR1; // Port E control register 1
typedef struct
{
    unsigned char C10                   : 1;
    unsigned char C11                   : 1;
    unsigned char C12                   : 1;
    unsigned char C13                   : 1;
    unsigned char C14                   : 1;
    unsigned char C15                   : 1;
    unsigned char C16                   : 1;
    unsigned char C17                   : 1;
} __BITS_PE_CR1;
volatile __BITS_PE_CR1 __at(0x5017) PE_CR1_bits;


volatile unsigned char __at(0x5018) PE_CR2; // Port E control register 2
typedef struct
{
    unsigned char C20                   : 1;
    unsigned char C21                   : 1;
    unsigned char C22                   : 1;
    unsigned char C23                   : 1;
    unsigned char C24                   : 1;
    unsigned char C25                   : 1;
    unsigned char C26                   : 1;
    unsigned char C27                   : 1;
} __BITS_PE_CR2;
volatile __BITS_PE_CR2 __at(0x5018) PE_CR2_bits;


volatile unsigned char __at(0x5019) PF_ODR; // Port F data output latch register
typedef struct
{
    unsigned char ODR0                  : 1;
    unsigned char ODR1                  : 1;
    unsigned char ODR2                  : 1;
    unsigned char ODR3                  : 1;
    unsigned char ODR4                  : 1;
    unsigned char ODR5                  : 1;
    unsigned char ODR6                  : 1;
    unsigned char ODR7                  : 1;
} __BITS_PF_ODR;
volatile __BITS_PF_ODR __at(0x5019) PF_ODR_bits;


volatile unsigned char __at(0x501A) PF_IDR; // Port F input pin value register
typedef struct
{
    unsigned char IDR0                  : 1;
    unsigned char IDR1                  : 1;
    unsigned char IDR2                  : 1;
    unsigned char IDR3                  : 1;
    unsigned char IDR4                  : 1;
    unsigned char IDR5                  : 1;
    unsigned char IDR6                  : 1;
    unsigned char IDR7                  : 1;
} __BITS_PF_IDR;
volatile __BITS_PF_IDR __at(0x501A) PF_IDR_bits;


volatile unsigned char __at(0x501B) PF_DDR; // Port F data direction register
typedef struct
{
    unsigned char DDR0                  : 1;
    unsigned char DDR1                  : 1;
    unsigned char DDR2                  : 1;
    unsigned char DDR3                  : 1;
    unsigned char DDR4                  : 1;
    unsigned char DDR5                  : 1;
    unsigned char DDR6                  : 1;
    unsigned char DDR7                  : 1;
} __BITS_PF_DDR;
volatile __BITS_PF_DDR __at(0x501B) PF_DDR_bits;


volatile unsigned char __at(0x501C) PF_CR1; // Port F control register 1
typedef struct
{
    unsigned char C10                   : 1;
    unsigned char C11                   : 1;
    unsigned char C12                   : 1;
    unsigned char C13                   : 1;
    unsigned char C14                   : 1;
    unsigned char C15                   : 1;
    unsigned char C16                   : 1;
    unsigned char C17                   : 1;
} __BITS_PF_CR1;
volatile __BITS_PF_CR1 __at(0x501C) PF_CR1_bits;


volatile unsigned char __at(0x501D) PF_CR2; // Port F control register 2
typedef struct
{
    unsigned char C20                   : 1;
    unsigned char C21                   : 1;
    unsigned char C22                   : 1;
    unsigned char C23                   : 1;
    unsigned char C24                   : 1;
    unsigned char C25                   : 1;
    unsigned char C26                   : 1;
    unsigned char C27                   : 1;
} __BITS_PF_CR2;
volatile __BITS_PF_CR2 __at(0x501D) PF_CR2_bits;


volatile unsigned char __at(0x505A) FLASH_CR1; // Flash control register 1
typedef struct
{
    unsigned char FIX                   : 1;
    unsigned char IE                    : 1;
    unsigned char AHALT                 : 1;
    unsigned char HALT                  : 1;
} __BITS_FLASH_CR1;
volatile __BITS_FLASH_CR1 __at(0x505A) FLASH_CR1_bits;


volatile unsigned char __at(0x505B) FLASH_CR2; // Flash control register 2
typedef struct
{
    unsigned char PRG                   : 1;
    unsigned char FPRG                  : 1;
    unsigned char ERASE                 : 1;
    unsigned char WPRG                  : 1;
    unsigned char OPT                   : 1;
} __BITS_FLASH_CR2;
volatile __BITS_FLASH_CR2 __at(0x505B) FLASH_CR2_bits;


volatile unsigned char __at(0x505C) FLASH_NCR2; // Flash complementary control register 2
typedef struct
{
    unsigned char NPRG                  : 1;
    unsigned char NFPRG                 : 1;
    unsigned char NERASE                : 1;
    unsigned char NWPRG                 : 1;
    unsigned char NOPT                  : 1;
} __BITS_FLASH_NCR2;
volatile __BITS_FLASH_NCR2 __at(0x505C) FLASH_NCR2_bits;


volatile unsigned char __at(0x505D) FLASH_FPR; // Flash protection register
typedef struct
{
    unsigned char WPB0                  : 1;
    unsigned char WPB1                  : 1;
    unsigned char WPB2                  : 1;
    unsigned char WPB3                  : 1;
    unsigned char WPB4                  : 1;
    unsigned char WPB5                  : 1;
} __BITS_FLASH_FPR;
volatile __BITS_FLASH_FPR __at(0x505D) FLASH_FPR_bits;


volatile unsigned char __at(0x505E) FLASH_NFPR; // Flash complementary protection register
typedef struct
{
    unsigned char NWPB0                 : 1;
    unsigned char NWPB1                 : 1;
    unsigned char NWPB2                 : 1;
    unsigned char NWPB3                 : 1;
    unsigned char NWPB4                 : 1;
    unsigned char NWPB5                 : 1;
} __BITS_FLASH_NFPR;
volatile __BITS_FLASH_NFPR __at(0x505E) FLASH_NFPR_bits;


volatile unsigned char __at(0x505F) FLASH_IAPSR; // Flash in-application programming status register
typedef struct
{
    unsigned char WR_PG_DIS             : 1;
    unsigned char PUL                   : 1;
    unsigned char EOP                   : 1;
    unsigned char DUL                   : 1;
    unsigned char HVOFF                 : 1;
} __BITS_FLASH_IAPSR;
volatile __BITS_FLASH_IAPSR __at(0x505F) FLASH_IAPSR_bits;


volatile unsigned char __at(0x5062) FLASH_PUKR; // Flash program memory unprotection register
typedef struct
{
    unsigned char MASS_PRG              : 8;
} __BITS_FLASH_PUKR;
volatile __BITS_FLASH_PUKR __at(0x5062) FLASH_PUKR_bits;


volatile unsigned char __at(0x5064) FLASH_DUKR; // Data EEPROM unprotection register
typedef struct
{
    unsigned char MASS_DATA             : 8;
} __BITS_FLASH_DUKR;
volatile __BITS_FLASH_DUKR __at(0x5064) FLASH_DUKR_bits;


volatile unsigned char __at(0x50A0) EXTI_CR1; // External interrupt control register 1
typedef struct
{
    unsigned char PAIS                  : 2;
    unsigned char PBIS                  : 2;
    unsigned char PCIS                  : 2;
    unsigned char PDIS                  : 2;
} __BITS_EXTI_CR1;
volatile __BITS_EXTI_CR1 __at(0x50A0) EXTI_CR1_bits;


volatile unsigned char __at(0x50A1) EXTI_CR2; // External interrupt control register 2
typedef struct
{
    unsigned char PEIS                  : 2;
    unsigned char TLIS                  : 1;
} __BITS_EXTI_CR2;
volatile __BITS_EXTI_CR2 __at(0x50A1) EXTI_CR2_bits;


volatile unsigned char __at(0x50B3) RST_SR; // Reset status register
typedef struct
{
    unsigned char WWDGF                 : 1;
    unsigned char IWDGF                 : 1;
    unsigned char ILLOPF                : 1;
    unsigned char SWIMF                 : 1;
    unsigned char EMCF                  : 1;
} __BITS_RST_SR;
volatile __BITS_RST_SR __at(0x50B3) RST_SR_bits;


volatile unsigned char __at(0x7F70) ITC_SPR1; // Interrupt software priority register 1
typedef struct
{
    unsigned char VECT0SPR              : 2;
    unsigned char VECT1SPR              : 2;
    unsigned char VECT2SPR              : 2;
    unsigned char VECT3SPR              : 2;
} __BITS_ITC_SPR1;
volatile __BITS_ITC_SPR1 __at(0x7F70) ITC_SPR1_bits;


volatile unsigned char __at(0x7F71) ITC_SPR2; // Interrupt software priority register 2
typedef struct
{
    unsigned char VECT4SPR              : 2;
    unsigned char VECT5SPR              : 2;
    unsigned char VECT6SPR              : 2;
    unsigned char VECT7SPR              : 2;
} __BITS_ITC_SPR2;
volatile __BITS_ITC_SPR2 __at(0x7F71) ITC_SPR2_bits;


volatile unsigned char __at(0x7F72) ITC_SPR3; // Interrupt software priority register 3
typedef struct
{
    unsigned char VECT8SPR              : 2;
    unsigned char VECT9SPR              : 2;
    unsigned char VECT10SPR             : 2;
    unsigned char VECT11SPR             : 2;
} __BITS_ITC_SPR3;
volatile __BITS_ITC_SPR3 __at(0x7F72) ITC_SPR3_bits;


volatile unsigned char __at(0x7F73) ITC_SPR4; // Interrupt software priority register 4
typedef struct
{
    unsigned char VECT12SPR             : 2;
    unsigned char VECT13SPR             : 2;
    unsigned char VECT14SPR             : 2;
    unsigned char VECT15SPR             : 2;
} __BITS_ITC_SPR4;
volatile __BITS_ITC_SPR4 __at(0x7F73) ITC_SPR4_bits;


volatile unsigned char __at(0x7F74) ITC_SPR5; // Interrupt software priority register 5
typedef struct
{
    unsigned char VECT16SPR             : 2;
    unsigned char VECT17SPR             : 2;
    unsigned char VECT18SPR             : 2;
    unsigned char VECT19SPR             : 2;
} __BITS_ITC_SPR5;
volatile __BITS_ITC_SPR5 __at(0x7F74) ITC_SPR5_bits;


volatile unsigned char __at(0x7F75) ITC_SPR6; // Interrupt software priority register 6
typedef struct
{
    unsigned char VECT20SPR             : 2;
    unsigned char VECT21SPR             : 2;
    unsigned char VECT22SPR             : 2;
    unsigned char VECT23SPR             : 2;
} __BITS_ITC_SPR6;
volatile __BITS_ITC_SPR6 __at(0x7F75) ITC_SPR6_bits;


volatile unsigned char __at(0x7F76) ITC_SPR7; // Interrupt software priority register 7
typedef struct
{
    unsigned char VECT24SPR             : 2;
    unsigned char VECT25SPR             : 2;
    unsigned char VECT26SPR             : 2;
    unsigned char VECT27SPR             : 2;
} __BITS_ITC_SPR7;
volatile __BITS_ITC_SPR7 __at(0x7F76) ITC_SPR7_bits;


volatile unsigned char __at(0x7F77) ITC_SPR8; // Interrupt software priority register 8
typedef struct
{
    unsigned char VECT28SPR             : 2;
    unsigned char VECT29SPR             : 2;
} __BITS_ITC_SPR8;
volatile __BITS_ITC_SPR8 __at(0x7F77) ITC_SPR8_bits;


volatile unsigned char __at(0x50C0) CLK_ICKR; // Internal clock control register
typedef struct
{
    unsigned char HSIEN                 : 1;
    unsigned char HSIRDY                : 1;
    unsigned char FHW                   : 1;
    unsigned char LSIEN                 : 1;
    unsigned char LSIRDY                : 1;
    unsigned char REGAH                 : 1;
} __BITS_CLK_ICKR;
volatile __BITS_CLK_ICKR __at(0x50C0) CLK_ICKR_bits;


volatile unsigned char __at(0x50C1) CLK_ECKR; // External clock control register
typedef struct
{
    unsigned char HSEEN                 : 1;
    unsigned char HSERDY                : 1;
} __BITS_CLK_ECKR;
volatile __BITS_CLK_ECKR __at(0x50C1) CLK_ECKR_bits;


volatile unsigned char __at(0x50C3) CLK_CMSR; // Clock master status register
typedef struct
{
    unsigned char CKM                   : 1;
} __BITS_CLK_CMSR;
volatile __BITS_CLK_CMSR __at(0x50C3) CLK_CMSR_bits;


volatile unsigned char __at(0x50C4) CLK_SWR; // Clock master switch register
typedef struct
{
    unsigned char SWI                   : 8;
} __BITS_CLK_SWR;
volatile __BITS_CLK_SWR __at(0x50C4) CLK_SWR_bits;


volatile unsigned char __at(0x50C5) CLK_SWCR; // Clock switch control register
typedef struct
{
    unsigned char SWBSY                 : 1;
    unsigned char SWEN                  : 1;
    unsigned char SWIEN                 : 1;
    unsigned char SWIF                  : 1;
} __BITS_CLK_SWCR;
volatile __BITS_CLK_SWCR __at(0x50C5) CLK_SWCR_bits;


volatile unsigned char __at(0x50C6) CLK_CKDIVR; // Clock divider register
typedef struct
{
    unsigned char CPUDIV                : 3;
    unsigned char HSIDIV                : 2;
} __BITS_CLK_CKDIVR;
volatile __BITS_CLK_CKDIVR __at(0x50C6) CLK_CKDIVR_bits;


volatile unsigned char __at(0x50C7) CLK_PCKENR1; // Peripheral clock gating register 1
typedef struct
{
    unsigned char PCKEN                 : 8;
} __BITS_CLK_PCKENR1;
volatile __BITS_CLK_PCKENR1 __at(0x50C7) CLK_PCKENR1_bits;


volatile unsigned char __at(0x50C8) CLK_CSSR; // Clock security system register
typedef struct
{
    unsigned char CSSEN                 : 1;
    unsigned char AUX                   : 1;
    unsigned char CSSDIE                : 1;
    unsigned char CSSD                  : 1;
} __BITS_CLK_CSSR;
volatile __BITS_CLK_CSSR __at(0x50C8) CLK_CSSR_bits;


volatile unsigned char __at(0x50C9) CLK_CCOR; // Configurable clock control register
typedef struct
{
    unsigned char CCOEN                 : 1;
    unsigned char CCOSEL                : 4;
    unsigned char CCORDY                : 1;
    unsigned char CC0BSY                : 1;
} __BITS_CLK_CCOR;
volatile __BITS_CLK_CCOR __at(0x50C9) CLK_CCOR_bits;


volatile unsigned char __at(0x50CA) CLK_PCKENR2; // Peripheral clock gating register 2
typedef struct
{
    unsigned char PCKEN2                : 8;
} __BITS_CLK_PCKENR2;
volatile __BITS_CLK_PCKENR2 __at(0x50CA) CLK_PCKENR2_bits;


volatile unsigned char __at(0x50CC) CLK_HSITRIMR; // HSI clock calibration trimming register
typedef struct
{
    unsigned char HSITRIM               : 4;
} __BITS_CLK_HSITRIMR;
volatile __BITS_CLK_HSITRIMR __at(0x50CC) CLK_HSITRIMR_bits;


volatile unsigned char __at(0x50CD) CLK_SWIMCCR; // SWIM clock control register
typedef struct
{
    unsigned char SWIMCLK               : 1;
} __BITS_CLK_SWIMCCR;
volatile __BITS_CLK_SWIMCCR __at(0x50CD) CLK_SWIMCCR_bits;


volatile unsigned char __at(0x50D1) WWDG_CR; // WWDG control register
typedef struct
{
    unsigned char T0                    : 1;
    unsigned char T1                    : 1;
    unsigned char T2                    : 1;
    unsigned char T3                    : 1;
    unsigned char T4                    : 1;
    unsigned char T5                    : 1;
    unsigned char T6                    : 1;
    unsigned char WDGA                  : 1;
} __BITS_WWDG_CR;
volatile __BITS_WWDG_CR __at(0x50D1) WWDG_CR_bits;


volatile unsigned char __at(0x50D2) WWDG_WR; // WWDR window register
typedef struct
{
    unsigned char W0                    : 1;
    unsigned char W1                    : 1;
    unsigned char W2                    : 1;
    unsigned char W3                    : 1;
    unsigned char W4                    : 1;
    unsigned char W5                    : 1;
    unsigned char W6                    : 1;
} __BITS_WWDG_WR;
volatile __BITS_WWDG_WR __at(0x50D2) WWDG_WR_bits;


volatile unsigned char __at(0x50E0) IWDG_KR; // IWDG key register
typedef struct
{
    unsigned char KEY                   : 1;
} __BITS_IWDG_KR;
volatile __BITS_IWDG_KR __at(0x50E0) IWDG_KR_bits;


volatile unsigned char __at(0x50E1) IWDG_PR; // IWDG prescaler register
typedef struct
{
    unsigned char PR                    : 3;
} __BITS_IWDG_PR;
volatile __BITS_IWDG_PR __at(0x50E1) IWDG_PR_bits;


volatile unsigned char __at(0x50E2) IWDG_RLR; // IWDG reload register
typedef struct
{
    unsigned char RL                    : 8;
} __BITS_IWDG_RLR;
volatile __BITS_IWDG_RLR __at(0x50E2) IWDG_RLR_bits;


volatile unsigned char __at(0x50F0) AWU_CSR1; // AWU control/status register 1
typedef struct
{
    unsigned char MSR                   : 1;
    unsigned char AWUEN                 : 1;
    unsigned char AWUF                  : 1;
} __BITS_AWU_CSR1;
volatile __BITS_AWU_CSR1 __at(0x50F0) AWU_CSR1_bits;


volatile unsigned char __at(0x50F1) AWU_APR; // AWU asynchronous prescaler buffer register
typedef struct
{
    unsigned char APR                   : 6;
} __BITS_AWU_APR;
volatile __BITS_AWU_APR __at(0x50F1) AWU_APR_bits;


volatile unsigned char __at(0x50F2) AWU_TBR; // AWU timebase selection register
typedef struct
{
    unsigned char AWUTB                 : 4;
} __BITS_AWU_TBR;
volatile __BITS_AWU_TBR __at(0x50F2) AWU_TBR_bits;


volatile unsigned char __at(0x50F3) BEEP_CSR; // BEEP control/status register
typedef struct
{
    unsigned char BEEPDIV               : 5;
    unsigned char BEEPEN                : 1;
    unsigned char BEEPSEL               : 2;
} __BITS_BEEP_CSR;
volatile __BITS_BEEP_CSR __at(0x50F3) BEEP_CSR_bits;


volatile unsigned char __at(0x5200) SPI_CR1; // SPI control register 1
typedef struct
{
    unsigned char CPHA                  : 1;
    unsigned char CPOL                  : 1;
    unsigned char MSTR                  : 1;
    unsigned char BR                    : 3;
    unsigned char SPE                   : 1;
    unsigned char LSBFIRST              : 1;
} __BITS_SPI_CR1;
volatile __BITS_SPI_CR1 __at(0x5200) SPI_CR1_bits;


volatile unsigned char __at(0x5201) SPI_CR2; // SPI control register 2
typedef struct
{
    unsigned char SSI                   : 1;
    unsigned char SSM                   : 1;
    unsigned char RXONLY                : 1;
    unsigned char CRCNEXT               : 1;
    unsigned char CECEN                 : 1;
    unsigned char BDOE                  : 1;
    unsigned char BDM                   : 1;
} __BITS_SPI_CR2;
volatile __BITS_SPI_CR2 __at(0x5201) SPI_CR2_bits;


volatile unsigned char __at(0x5202) SPI_ICR; // SPI interrupt control register
typedef struct
{
    unsigned char WKIE                  : 1;
    unsigned char ERRIE                 : 1;
    unsigned char RXIE                  : 1;
    unsigned char TXIE                  : 1;
} __BITS_SPI_ICR;
volatile __BITS_SPI_ICR __at(0x5202) SPI_ICR_bits;


volatile unsigned char __at(0x5203) SPI_SR; // SPI status register
typedef struct
{
    unsigned char RXNE                  : 1;
    unsigned char TXE                   : 1;
    unsigned char WKUP                  : 1;
    unsigned char CRCERR                : 1;
    unsigned char MODF                  : 1;
    unsigned char OVR                   : 1;
    unsigned char BSY                   : 1;
} __BITS_SPI_SR;
volatile __BITS_SPI_SR __at(0x5203) SPI_SR_bits;


volatile unsigned char __at(0x5204) SPI_DR; // SPI data register
typedef struct
{
    unsigned char DR                    : 8;
} __BITS_SPI_DR;
volatile __BITS_SPI_DR __at(0x5204) SPI_DR_bits;


volatile unsigned char __at(0x5205) SPI_CRCPR; // SPI CRC polynomial register
typedef struct
{
    unsigned char CRCPOLY               : 8;
} __BITS_SPI_CRCPR;
volatile __BITS_SPI_CRCPR __at(0x5205) SPI_CRCPR_bits;


volatile unsigned char __at(0x5206) SPI_RXCRCR; // SPI Rx CRC register
typedef struct
{
    unsigned char RXCRC                 : 1;
} __BITS_SPI_RXCRCR;
volatile __BITS_SPI_RXCRCR __at(0x5206) SPI_RXCRCR_bits;


volatile unsigned char __at(0x5207) SPI_TXCRCR; // SPI Tx CRC register
typedef struct
{
    unsigned char TXCRC                 : 1;
} __BITS_SPI_TXCRCR;
volatile __BITS_SPI_TXCRCR __at(0x5207) SPI_TXCRCR_bits;


volatile unsigned char __at(0x5210) I2C_CR1; // I2C control register 1
typedef struct
{
    unsigned char PE                    : 1;
    unsigned char ENGC                  : 1;
    unsigned char NOSTRETCH             : 1;
} __BITS_I2C_CR1;
volatile __BITS_I2C_CR1 __at(0x5210) I2C_CR1_bits;


volatile unsigned char __at(0x5211) I2C_CR2; // I2C control register 2
typedef struct
{
    unsigned char START                 : 1;
    unsigned char STOP                  : 1;
    unsigned char ACK                   : 1;
    unsigned char POS                   : 1;
    unsigned char SWRST                 : 1;
} __BITS_I2C_CR2;
volatile __BITS_I2C_CR2 __at(0x5211) I2C_CR2_bits;


volatile unsigned char __at(0x5212) I2C_FREQR; // I2C frequency register
typedef struct
{
    unsigned char FREQ                  : 6;
} __BITS_I2C_FREQR;
volatile __BITS_I2C_FREQR __at(0x5212) I2C_FREQR_bits;


volatile unsigned char __at(0x5213) I2C_OARL; // I2C Own address register low
typedef struct
{
    unsigned char ADD0                  : 1;
    unsigned char ADD                   : 7;
} __BITS_I2C_OARL;
volatile __BITS_I2C_OARL __at(0x5213) I2C_OARL_bits;


volatile unsigned char __at(0x5214) I2C_OARH; // I2C Own address register high
typedef struct
{
    unsigned char ADD                   : 2;
    unsigned char ADDCONF               : 1;
    unsigned char ADDMODE               : 1;
} __BITS_I2C_OARH;
volatile __BITS_I2C_OARH __at(0x5214) I2C_OARH_bits;


volatile unsigned char __at(0x5216) I2C_DR; // I2C data register
typedef struct
{
    unsigned char DR                    : 8;
} __BITS_I2C_DR;
volatile __BITS_I2C_DR __at(0x5216) I2C_DR_bits;


volatile unsigned char __at(0x5217) I2C_SR1; // I2C status register 1
typedef struct
{
    unsigned char SB                    : 1;
    unsigned char ADDR                  : 1;
    unsigned char BTF                   : 1;
    unsigned char ADD10                 : 1;
    unsigned char STOPF                 : 1;
    unsigned char RXNE                  : 1;
    unsigned char TXE                   : 1;
} __BITS_I2C_SR1;
volatile __BITS_I2C_SR1 __at(0x5217) I2C_SR1_bits;


volatile unsigned char __at(0x5218) I2C_SR2; // I2C status register 2
typedef struct
{
    unsigned char BERR                  : 1;
    unsigned char ARLO                  : 1;
    unsigned char AF                    : 1;
    unsigned char OVR                   : 1;
    unsigned char WUFH                  : 1;
} __BITS_I2C_SR2;
volatile __BITS_I2C_SR2 __at(0x5218) I2C_SR2_bits;


volatile unsigned char __at(0x5219) I2C_SR3; // I2C status register 3
typedef struct
{
    unsigned char MSL                   : 1;
    unsigned char BUSY                  : 1;
    unsigned char TRA                   : 1;
    unsigned char GENCALL               : 1;
} __BITS_I2C_SR3;
volatile __BITS_I2C_SR3 __at(0x5219) I2C_SR3_bits;


volatile unsigned char __at(0x521A) I2C_ITR; // I2C interrupt control register
typedef struct
{
    unsigned char ITERREN               : 1;
    unsigned char ITEVTEN               : 1;
    unsigned char ITBUFEN               : 1;
} __BITS_I2C_ITR;
volatile __BITS_I2C_ITR __at(0x521A) I2C_ITR_bits;


volatile unsigned char __at(0x521B) I2C_CCRL; // I2C Clock control register low
typedef struct
{
    unsigned char CCR                   : 8;
} __BITS_I2C_CCRL;
volatile __BITS_I2C_CCRL __at(0x521B) I2C_CCRL_bits;


volatile unsigned char __at(0x521C) I2C_CCRH; // I2C Clock control register high
typedef struct
{
    unsigned char CCR                   : 4;
    unsigned char DUTY                  : 1;
    unsigned char F_S                   : 1;
} __BITS_I2C_CCRH;
volatile __BITS_I2C_CCRH __at(0x521C) I2C_CCRH_bits;


volatile unsigned char __at(0x521D) I2C_TRISER; // I2C TRISE register
typedef struct
{
    unsigned char TRISE                 : 6;
} __BITS_I2C_TRISER;
volatile __BITS_I2C_TRISER __at(0x521D) I2C_TRISER_bits;


volatile unsigned char __at(0x521E) I2C_PECR; // I2C packet error checking register
typedef struct
{
    unsigned char PEC                   : 8;
} __BITS_I2C_PECR;
volatile __BITS_I2C_PECR __at(0x521E) I2C_PECR_bits;


volatile unsigned char __at(0x5230) UART1_SR; // UART1 status register
typedef struct
{
    unsigned char PE                    : 1;
    unsigned char FE                    : 1;
    unsigned char NF                    : 1;
    unsigned char OR_LHE                : 1;
    unsigned char IDLE                  : 1;
    unsigned char RXNE                  : 1;
    unsigned char TC                    : 1;
    unsigned char TXE                   : 1;
} __BITS_UART1_SR;
volatile __BITS_UART1_SR __at(0x5230) UART1_SR_bits;


volatile unsigned char __at(0x5231) UART1_DR; // UART1 data register
typedef struct
{
    unsigned char DR                    : 8;
} __BITS_UART1_DR;
volatile __BITS_UART1_DR __at(0x5231) UART1_DR_bits;


volatile unsigned char __at(0x5232) UART1_BRR1; // UART1 baud rate register 1
typedef struct
{
    unsigned char UART_DIV              : 8;
} __BITS_UART1_BRR1;
volatile __BITS_UART1_BRR1 __at(0x5232) UART1_BRR1_bits;


volatile unsigned char __at(0x5233) UART1_BRR2; // UART1 baud rate register 2
typedef struct
{
    unsigned char UART_DIV              : 8;
} __BITS_UART1_BRR2;
volatile __BITS_UART1_BRR2 __at(0x5233) UART1_BRR2_bits;


volatile unsigned char __at(0x5234) UART1_CR1; // UART1 control register 1
typedef struct
{
    unsigned char PIEN                  : 1;
    unsigned char PS                    : 1;
    unsigned char PCEN                  : 1;
    unsigned char WAKE                  : 1;
    unsigned char M                     : 1;
    unsigned char UART0                 : 1;
    unsigned char T8                    : 1;
    unsigned char R8                    : 1;
} __BITS_UART1_CR1;
volatile __BITS_UART1_CR1 __at(0x5234) UART1_CR1_bits;


volatile unsigned char __at(0x5235) UART1_CR2; // UART1 control register 2
typedef struct
{
    unsigned char SBK                   : 1;
    unsigned char RWU                   : 1;
    unsigned char REN                   : 1;
    unsigned char TEN                   : 1;
    unsigned char ILIEN                 : 1;
    unsigned char RIEN                  : 1;
    unsigned char TCIEN                 : 1;
    unsigned char TIEN                  : 1;
} __BITS_UART1_CR2;
volatile __BITS_UART1_CR2 __at(0x5235) UART1_CR2_bits;


volatile unsigned char __at(0x5236) UART1_CR3; // UART1 control register 3
typedef struct
{
    unsigned char LBCL                  : 1;
    unsigned char CPHA                  : 1;
    unsigned char CPOL                  : 1;
    unsigned char CKEN                  : 1;
    unsigned char STOP                  : 2;
    unsigned char LINEN                 : 1;
} __BITS_UART1_CR3;
volatile __BITS_UART1_CR3 __at(0x5236) UART1_CR3_bits;


volatile unsigned char __at(0x5237) UART1_CR4; // UART1 control register 4
typedef struct
{
    unsigned char ADD                   : 4;
    unsigned char LBDF                  : 1;
    unsigned char LBDL                  : 1;
    unsigned char LBDIEN                : 1;
} __BITS_UART1_CR4;
volatile __BITS_UART1_CR4 __at(0x5237) UART1_CR4_bits;


volatile unsigned char __at(0x5238) UART1_CR5; // UART1 control register 5
typedef struct
{
    unsigned char IREN                  : 1;
    unsigned char IRLP                  : 1;
    unsigned char HDSEL                 : 1;
    unsigned char NACK                  : 1;
    unsigned char SCEN                  : 1;
} __BITS_UART1_CR5;
volatile __BITS_UART1_CR5 __at(0x5238) UART1_CR5_bits;


volatile unsigned char __at(0x5239) UART1_GTR; // UART1 guard time register
typedef struct
{
    unsigned char GT                    : 8;
} __BITS_UART1_GTR;
volatile __BITS_UART1_GTR __at(0x5239) UART1_GTR_bits;


volatile unsigned char __at(0x523A) UART1_PSCR; // UART1 prescaler register
typedef struct
{
    unsigned char PSC                   : 8;
} __BITS_UART1_PSCR;
volatile __BITS_UART1_PSCR __at(0x523A) UART1_PSCR_bits;


volatile unsigned char __at(0x5250) TIM1_CR1; // TIM1 control register 1
typedef struct
{
    unsigned char CEN                   : 1;
    unsigned char UDIS                  : 1;
    unsigned char URS                   : 1;
    unsigned char OPM                   : 1;
    unsigned char DIR                   : 1;
    unsigned char CMS                   : 2;
    unsigned char ARPE                  : 1;
} __BITS_TIM1_CR1;
volatile __BITS_TIM1_CR1 __at(0x5250) TIM1_CR1_bits;


volatile unsigned char __at(0x5251) TIM1_CR2; // TIM1 control register 2
typedef struct
{
    unsigned char CCPG                  : 1;
    unsigned char COMS                  : 1;
    unsigned char MMS                   : 3;
} __BITS_TIM1_CR2;
volatile __BITS_TIM1_CR2 __at(0x5251) TIM1_CR2_bits;


volatile unsigned char __at(0x5252) TIM1_SMCR; // TIM1 slave mode control register
typedef struct
{
    unsigned char SMS                   : 3;
    unsigned char TS                    : 3;
    unsigned char MSM                   : 1;
} __BITS_TIM1_SMCR;
volatile __BITS_TIM1_SMCR __at(0x5252) TIM1_SMCR_bits;


volatile unsigned char __at(0x5253) TIM1_ETR; // TIM1 external trigger register
typedef struct
{
    unsigned char ETF                   : 4;
    unsigned char ETPS                  : 2;
    unsigned char ECE                   : 1;
    unsigned char ETP                   : 1;
} __BITS_TIM1_ETR;
volatile __BITS_TIM1_ETR __at(0x5253) TIM1_ETR_bits;


volatile unsigned char __at(0x5254) TIM1_IER; // TIM1 interrupt enable register
typedef struct
{
    unsigned char UIE                   : 1;
    unsigned char CC1IE                 : 1;
    unsigned char CC2IE                 : 1;
    unsigned char CC3IE                 : 1;
    unsigned char CC4IE                 : 1;
    unsigned char COMIE                 : 1;
    unsigned char TIE                   : 1;
    unsigned char BIE                   : 1;
} __BITS_TIM1_IER;
volatile __BITS_TIM1_IER __at(0x5254) TIM1_IER_bits;


volatile unsigned char __at(0x5255) TIM1_SR1; // TIM1 status register 1
typedef struct
{
    unsigned char UIF                   : 1;
    unsigned char CC1IF                 : 1;
    unsigned char CC2IF                 : 1;
    unsigned char CC3IF                 : 1;
    unsigned char CC4IF                 : 1;
    unsigned char COMIF                 : 1;
    unsigned char TIF                   : 1;
    unsigned char BIF                   : 1;
} __BITS_TIM1_SR1;
volatile __BITS_TIM1_SR1 __at(0x5255) TIM1_SR1_bits;


volatile unsigned char __at(0x5256) TIM1_SR2; // TIM1 status register 2
typedef struct
{
    unsigned char CC1OF                 : 1;
    unsigned char CC2OF                 : 1;
    unsigned char CC3OF                 : 1;
    unsigned char CC4OF                 : 1;
} __BITS_TIM1_SR2;
volatile __BITS_TIM1_SR2 __at(0x5256) TIM1_SR2_bits;


volatile unsigned char __at(0x5257) TIM1_EGR; // TIM1 event generation register
typedef struct
{
    unsigned char UG                    : 1;
    unsigned char CC1G                  : 1;
    unsigned char CC2G                  : 1;
    unsigned char CC3G                  : 1;
    unsigned char CC4G                  : 1;
    unsigned char COMG                  : 1;
    unsigned char TG                    : 1;
    unsigned char BG                    : 1;
} __BITS_TIM1_EGR;
volatile __BITS_TIM1_EGR __at(0x5257) TIM1_EGR_bits;


volatile unsigned char __at(0x5258) TIM1_CCMR1; // TIM1 capture/compare mode register 1
typedef struct
{
    unsigned char CC1S                  : 2;
    unsigned char OC1FE                 : 1;
    unsigned char OC1PE                 : 1;
    unsigned char OC1M                  : 3;
    unsigned char OC1CE                 : 1;
} __BITS_TIM1_CCMR1;
volatile __BITS_TIM1_CCMR1 __at(0x5258) TIM1_CCMR1_bits;


volatile unsigned char __at(0x5259) TIM1_CCMR2; // TIM1 capture/compare mode register 2
typedef struct
{
    unsigned char CC2S                  : 2;
    unsigned char OC2FE                 : 1;
    unsigned char OC2PE                 : 1;
    unsigned char OC2M                  : 3;
    unsigned char OC2CE                 : 1;
} __BITS_TIM1_CCMR2;
volatile __BITS_TIM1_CCMR2 __at(0x5259) TIM1_CCMR2_bits;


volatile unsigned char __at(0x525A) TIM1_CCMR3; // TIM1 capture/compare mode register 3
typedef struct
{
    unsigned char CC3S                  : 2;
    unsigned char OC3FE                 : 1;
    unsigned char OC3PE                 : 1;
    unsigned char OC3M                  : 3;
    unsigned char OC3CE                 : 1;
} __BITS_TIM1_CCMR3;
volatile __BITS_TIM1_CCMR3 __at(0x525A) TIM1_CCMR3_bits;


volatile unsigned char __at(0x525B) TIM1_CCMR4; // TIM1 capture/compare mode register 4
typedef struct
{
    unsigned char CC4S                  : 2;
    unsigned char OC4FE                 : 1;
    unsigned char OC4PE                 : 1;
    unsigned char OC4M                  : 3;
    unsigned char OC4CE                 : 1;
} __BITS_TIM1_CCMR4;
volatile __BITS_TIM1_CCMR4 __at(0x525B) TIM1_CCMR4_bits;


volatile unsigned char __at(0x525C) TIM1_CCER1; // TIM1 capture/compare enable register 1
typedef struct
{
    unsigned char CC1E                  : 1;
    unsigned char CC1P                  : 1;
    unsigned char CC1NE                 : 1;
    unsigned char CC1NP                 : 1;
    unsigned char CC2E                  : 1;
    unsigned char CC2P                  : 1;
    unsigned char CC2NE                 : 1;
    unsigned char CC2NP                 : 1;
} __BITS_TIM1_CCER1;
volatile __BITS_TIM1_CCER1 __at(0x525C) TIM1_CCER1_bits;


volatile unsigned char __at(0x525D) TIM1_CCER2; // TIM1 capture/compare enable register 2
typedef struct
{
    unsigned char CC3E                  : 1;
    unsigned char CC3P                  : 1;
    unsigned char CC3NE                 : 1;
    unsigned char CC3NP                 : 1;
    unsigned char CC4E                  : 1;
    unsigned char CC4P                  : 1;
} __BITS_TIM1_CCER2;
volatile __BITS_TIM1_CCER2 __at(0x525D) TIM1_CCER2_bits;


volatile unsigned char __at(0x525E) TIM1_CNTRH; // TIM1 counter high
typedef struct
{
    unsigned char CNT                   : 8;
} __BITS_TIM1_CNTRH;
volatile __BITS_TIM1_CNTRH __at(0x525E) TIM1_CNTRH_bits;


volatile unsigned char __at(0x525F) TIM1_CNTRL; // TIM1 counter low
typedef struct
{
    unsigned char CNT                   : 8;
} __BITS_TIM1_CNTRL;
volatile __BITS_TIM1_CNTRL __at(0x525F) TIM1_CNTRL_bits;


volatile unsigned char __at(0x5260) TIM1_PSCRH; // TIM1 prescaler register high
typedef struct
{
    unsigned char PSC                   : 8;
} __BITS_TIM1_PSCRH;
volatile __BITS_TIM1_PSCRH __at(0x5260) TIM1_PSCRH_bits;


volatile unsigned char __at(0x5261) TIM1_PSCRL; // TIM1 prescaler register low
typedef struct
{
    unsigned char PSC                   : 8;
} __BITS_TIM1_PSCRL;
volatile __BITS_TIM1_PSCRL __at(0x5261) TIM1_PSCRL_bits;


volatile unsigned char __at(0x5262) TIM1_ARRH; // TIM1 auto-reload register high
typedef struct
{
    unsigned char ARR                   : 8;
} __BITS_TIM1_ARRH;
volatile __BITS_TIM1_ARRH __at(0x5262) TIM1_ARRH_bits;


volatile unsigned char __at(0x5263) TIM1_ARRL; // TIM1 auto-reload register low
typedef struct
{
    unsigned char ARR                   : 8;
} __BITS_TIM1_ARRL;
volatile __BITS_TIM1_ARRL __at(0x5263) TIM1_ARRL_bits;


volatile unsigned char __at(0x5264) TIM1_RCR; // TIM1 repetition counter register
typedef struct
{
    unsigned char REP                   : 8;
} __BITS_TIM1_RCR;
volatile __BITS_TIM1_RCR __at(0x5264) TIM1_RCR_bits;


volatile unsigned char __at(0x5265) TIM1_CCR1H; // TIM1 capture/compare register 1 high
typedef struct
{
    unsigned char CCR1                  : 8;
} __BITS_TIM1_CCR1H;
volatile __BITS_TIM1_CCR1H __at(0x5265) TIM1_CCR1H_bits;


volatile unsigned char __at(0x5266) TIM1_CCR1L; // TIM1 capture/compare register 1 low
typedef struct
{
    unsigned char CCR1                  : 8;
} __BITS_TIM1_CCR1L;
volatile __BITS_TIM1_CCR1L __at(0x5266) TIM1_CCR1L_bits;


volatile unsigned char __at(0x5267) TIM1_CCR2H; // TIM1 capture/compare register 2 high
typedef struct
{
    unsigned char CCR2                  : 8;
} __BITS_TIM1_CCR2H;
volatile __BITS_TIM1_CCR2H __at(0x5267) TIM1_CCR2H_bits;


volatile unsigned char __at(0x5268) TIM1_CCR2L; // TIM1 capture/compare register 2 low
typedef struct
{
    unsigned char CCR2                  : 8;
} __BITS_TIM1_CCR2L;
volatile __BITS_TIM1_CCR2L __at(0x5268) TIM1_CCR2L_bits;


volatile unsigned char __at(0x5269) TIM1_CCR3H; // TIM1 capture/compare register 3 high
typedef struct
{
    unsigned char CCR3                  : 8;
} __BITS_TIM1_CCR3H;
volatile __BITS_TIM1_CCR3H __at(0x5269) TIM1_CCR3H_bits;


volatile unsigned char __at(0x526A) TIM1_CCR3L; // TIM1 capture/compare register 3 low
typedef struct
{
    unsigned char CCR3                  : 8;
} __BITS_TIM1_CCR3L;
volatile __BITS_TIM1_CCR3L __at(0x526A) TIM1_CCR3L_bits;


volatile unsigned char __at(0x526B) TIM1_CCR4H; // TIM1 capture/compare register 4 high
typedef struct
{
    unsigned char CCR4                  : 8;
} __BITS_TIM1_CCR4H;
volatile __BITS_TIM1_CCR4H __at(0x526B) TIM1_CCR4H_bits;


volatile unsigned char __at(0x526C) TIM1_CCR4L; // TIM1 capture/compare register 4 low
typedef struct
{
    unsigned char CCR4                  : 8;
} __BITS_TIM1_CCR4L;
volatile __BITS_TIM1_CCR4L __at(0x526C) TIM1_CCR4L_bits;


volatile unsigned char __at(0x526D) TIM1_BKR; // TIM1 break register
typedef struct
{
    unsigned char LOCK                  : 2;
    unsigned char OSSI                  : 1;
    unsigned char OSSR                  : 1;
    unsigned char BKE                   : 1;
    unsigned char BKP                   : 1;
    unsigned char AOE                   : 1;
    unsigned char MOE                   : 1;
} __BITS_TIM1_BKR;
volatile __BITS_TIM1_BKR __at(0x526D) TIM1_BKR_bits;


volatile unsigned char __at(0x526E) TIM1_DTR; // TIM1 dead-time register
typedef struct
{
    unsigned char DTG                   : 8;
} __BITS_TIM1_DTR;
volatile __BITS_TIM1_DTR __at(0x526E) TIM1_DTR_bits;


volatile unsigned char __at(0x526F) TIM1_OISR; // TIM1 output idle state register
typedef struct
{
    unsigned char OIS1                  : 1;
    unsigned char OIS1N                 : 1;
    unsigned char OIS2                  : 1;
    unsigned char OIS2N                 : 1;
    unsigned char OIS3                  : 1;
    unsigned char OIS3N                 : 1;
    unsigned char OIS4                  : 1;
} __BITS_TIM1_OISR;
volatile __BITS_TIM1_OISR __at(0x526F) TIM1_OISR_bits;


volatile unsigned char __at(0x5300) TIM2_CR1; // TIM2 control register 1
typedef struct
{
    unsigned char CEN                   : 1;
    unsigned char UDIS                  : 1;
    unsigned char URS                   : 1;
    unsigned char OPM                   : 1;
    unsigned char ARPE                  : 1;
} __BITS_TIM2_CR1;
volatile __BITS_TIM2_CR1 __at(0x5300) TIM2_CR1_bits;


volatile unsigned char __at(0x5303) TIM2_IER; // TIM2 Interrupt enable register
typedef struct
{
    unsigned char UIE                   : 1;
    unsigned char CC1IE                 : 1;
    unsigned char CC2IE                 : 1;
    unsigned char CC3IE                 : 1;
    unsigned char TIE                   : 1;
} __BITS_TIM2_IER;
volatile __BITS_TIM2_IER __at(0x5303) TIM2_IER_bits;


volatile unsigned char __at(0x5304) TIM2_SR1; // TIM2 status register 1
typedef struct
{
    unsigned char UIF                   : 1;
    unsigned char CC1IF                 : 1;
    unsigned char CC2IF                 : 1;
    unsigned char CC3IF                 : 1;
    unsigned char TIF                   : 1;
} __BITS_TIM2_SR1;
volatile __BITS_TIM2_SR1 __at(0x5304) TIM2_SR1_bits;


volatile unsigned char __at(0x5305) TIM2_SR2; // TIM2 status register 2
typedef struct
{
    unsigned char CC1OF                 : 1;
    unsigned char CC2OF                 : 1;
    unsigned char CC3OF                 : 1;
} __BITS_TIM2_SR2;
volatile __BITS_TIM2_SR2 __at(0x5305) TIM2_SR2_bits;


volatile unsigned char __at(0x5306) TIM2_EGR; // TIM2 event generation register
typedef struct
{
    unsigned char UG                    : 1;
    unsigned char CC1G                  : 1;
    unsigned char CC2G                  : 1;
    unsigned char CC3G                  : 1;
    unsigned char TG                    : 1;
} __BITS_TIM2_EGR;
volatile __BITS_TIM2_EGR __at(0x5306) TIM2_EGR_bits;


volatile unsigned char __at(0x5307) TIM2_CCMR1; // TIM2 capture/compare mode register 1
typedef struct
{
    unsigned char CC1S                  : 2;
    unsigned char OC1PE                 : 1;
    unsigned char OC1M                  : 3;
} __BITS_TIM2_CCMR1;
volatile __BITS_TIM2_CCMR1 __at(0x5307) TIM2_CCMR1_bits;


volatile unsigned char __at(0x5308) TIM2_CCMR2; // TIM2 capture/compare mode register 2
typedef struct
{
    unsigned char CC2S                  : 2;
    unsigned char OC2PE                 : 1;
    unsigned char OC2M                  : 3;
} __BITS_TIM2_CCMR2;
volatile __BITS_TIM2_CCMR2 __at(0x5308) TIM2_CCMR2_bits;


volatile unsigned char __at(0x5309) TIM2_CCMR3; // TIM2 capture/compare mode register 3
typedef struct
{
    unsigned char CC3S                  : 2;
    unsigned char OC3PE                 : 1;
    unsigned char OC3M                  : 3;
} __BITS_TIM2_CCMR3;
volatile __BITS_TIM2_CCMR3 __at(0x5309) TIM2_CCMR3_bits;


volatile unsigned char __at(0x530A) TIM2_CCER1; // TIM2 capture/compare enable register 1
typedef struct
{
    unsigned char CC1E                  : 1;
    unsigned char CC1P                  : 1;
    unsigned char CC2E                  : 1;
    unsigned char CC2P                  : 1;
} __BITS_TIM2_CCER1;
volatile __BITS_TIM2_CCER1 __at(0x530A) TIM2_CCER1_bits;


volatile unsigned char __at(0x530B) TIM2_CCER2; // TIM2 capture/compare enable register 2
typedef struct
{
    unsigned char CC3E                  : 1;
    unsigned char CC3P                  : 1;
} __BITS_TIM2_CCER2;
volatile __BITS_TIM2_CCER2 __at(0x530B) TIM2_CCER2_bits;


volatile unsigned char __at(0x530C) TIM2_CNTRH; // TIM2 counter high
typedef struct
{
    unsigned char CNT                   : 8;
} __BITS_TIM2_CNTRH;
volatile __BITS_TIM2_CNTRH __at(0x530C) TIM2_CNTRH_bits;


volatile unsigned char __at(0x530D) TIM2_CNTRL; // TIM2 counter low
typedef struct
{
    unsigned char CNT                   : 8;
} __BITS_TIM2_CNTRL;
volatile __BITS_TIM2_CNTRL __at(0x530D) TIM2_CNTRL_bits;


volatile unsigned char __at(0x530E) TIM2_PSCR; // TIM2 prescaler register
typedef struct
{
    unsigned char PSC                   : 4;
} __BITS_TIM2_PSCR;
volatile __BITS_TIM2_PSCR __at(0x530E) TIM2_PSCR_bits;


volatile unsigned char __at(0x530F) TIM2_ARRH; // TIM2 auto-reload register high
typedef struct
{
    unsigned char ARR                   : 8;
} __BITS_TIM2_ARRH;
volatile __BITS_TIM2_ARRH __at(0x530F) TIM2_ARRH_bits;


volatile unsigned char __at(0x5310) TIM2_ARRL; // TIM2 auto-reload register low
typedef struct
{
    unsigned char ARR                   : 8;
} __BITS_TIM2_ARRL;
volatile __BITS_TIM2_ARRL __at(0x5310) TIM2_ARRL_bits;


volatile unsigned char __at(0x5311) TIM2_CCR1H; // TIM2 capture/compare register 1 high
typedef struct
{
    unsigned char CCR1                  : 8;
} __BITS_TIM2_CCR1H;
volatile __BITS_TIM2_CCR1H __at(0x5311) TIM2_CCR1H_bits;


volatile unsigned char __at(0x5312) TIM2_CCR1L; // TIM2 capture/compare register 1 low
typedef struct
{
    unsigned char CCR1                  : 8;
} __BITS_TIM2_CCR1L;
volatile __BITS_TIM2_CCR1L __at(0x5312) TIM2_CCR1L_bits;


volatile unsigned char __at(0x5313) TIM2_CCR2H; // TIM2 capture/compare reg
typedef struct
{
    unsigned char CCR2                  : 8;
} __BITS_TIM2_CCR2H;
volatile __BITS_TIM2_CCR2H __at(0x5313) TIM2_CCR2H_bits;


volatile unsigned char __at(0x5314) TIM2_CCR2L; // TIM2 capture/compare register 2 low
typedef struct
{
    unsigned char CCR2                  : 8;
} __BITS_TIM2_CCR2L;
volatile __BITS_TIM2_CCR2L __at(0x5314) TIM2_CCR2L_bits;


volatile unsigned char __at(0x5315) TIM2_CCR3H; // TIM2 capture/compare register 3 high
typedef struct
{
    unsigned char CCR3                  : 8;
} __BITS_TIM2_CCR3H;
volatile __BITS_TIM2_CCR3H __at(0x5315) TIM2_CCR3H_bits;


volatile unsigned char __at(0x5316) TIM2_CCR3L; // TIM2 capture/compare register 3 low
typedef struct
{
    unsigned char CCR3                  : 8;
} __BITS_TIM2_CCR3L;
volatile __BITS_TIM2_CCR3L __at(0x5316) TIM2_CCR3L_bits;


volatile unsigned char __at(0x5340) TIM4_CR1; // TIM4 control register 1
typedef struct
{
    unsigned char CEN                   : 1;
    unsigned char UDIS                  : 1;
    unsigned char URS                   : 1;
    unsigned char OPM                   : 1;
    unsigned char ARPE                  : 1;
} __BITS_TIM4_CR1;
volatile __BITS_TIM4_CR1 __at(0x5340) TIM4_CR1_bits;


volatile unsigned char __at(0x5343) TIM4_IER; // TIM4 interrupt enable register
typedef struct
{
    unsigned char UIE                   : 1;
    unsigned char TIE                   : 1;
} __BITS_TIM4_IER;
volatile __BITS_TIM4_IER __at(0x5343) TIM4_IER_bits;


volatile unsigned char __at(0x5344) TIM4_SR; // TIM4 status register
typedef struct
{
    unsigned char UIF                   : 1;
    unsigned char TIF                   : 1;
} __BITS_TIM4_SR;
volatile __BITS_TIM4_SR __at(0x5344) TIM4_SR_bits;


volatile unsigned char __at(0x5345) TIM4_EGR; // TIM4 event generation register
typedef struct
{
    unsigned char UG                    : 1;
    unsigned char TG                    : 1;
} __BITS_TIM4_EGR;
volatile __BITS_TIM4_EGR __at(0x5345) TIM4_EGR_bits;


volatile unsigned char __at(0x5346) TIM4_CNTR; // TIM4 counter
typedef struct
{
    unsigned char CNT                   : 8;
} __BITS_TIM4_CNTR;
volatile __BITS_TIM4_CNTR __at(0x5346) TIM4_CNTR_bits;


volatile unsigned char __at(0x5347) TIM4_PSCR; // TIM4 prescaler register
typedef struct
{
    unsigned char PSC                   : 3;
} __BITS_TIM4_PSCR;
volatile __BITS_TIM4_PSCR __at(0x5347) TIM4_PSCR_bits;


volatile unsigned char __at(0x5348) TIM4_ARR; // TIM4 auto-reload register
typedef struct
{
    unsigned char ARR                   : 8;
} __BITS_TIM4_ARR;
volatile __BITS_TIM4_ARR __at(0x5348) TIM4_ARR_bits;


volatile unsigned char __at(0x53E0) ADC_DB0RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB0RH;
volatile __BITS_ADC_DB0RH __at(0x53E0) ADC_DB0RH_bits;


volatile unsigned char __at(0x53E1) ADC_DB0RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB0RL;
volatile __BITS_ADC_DB0RL __at(0x53E1) ADC_DB0RL_bits;


volatile unsigned char __at(0x53E2) ADC_DB1RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB1RH;
volatile __BITS_ADC_DB1RH __at(0x53E2) ADC_DB1RH_bits;


volatile unsigned char __at(0x53E3) ADC_DB1RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB1RL;
volatile __BITS_ADC_DB1RL __at(0x53E3) ADC_DB1RL_bits;


volatile unsigned char __at(0x53E4) ADC_DB2RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB2RH;
volatile __BITS_ADC_DB2RH __at(0x53E4) ADC_DB2RH_bits;


volatile unsigned char __at(0x53E5) ADC_DB2RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB2RL;
volatile __BITS_ADC_DB2RL __at(0x53E5) ADC_DB2RL_bits;


volatile unsigned char __at(0x53E6) ADC_DB3RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB3RH;
volatile __BITS_ADC_DB3RH __at(0x53E6) ADC_DB3RH_bits;


volatile unsigned char __at(0x53E7) ADC_DB3RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB3RL;
volatile __BITS_ADC_DB3RL __at(0x53E7) ADC_DB3RL_bits;


volatile unsigned char __at(0x53E8) ADC_DB4RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB4RH;
volatile __BITS_ADC_DB4RH __at(0x53E8) ADC_DB4RH_bits;


volatile unsigned char __at(0x53E9) ADC_DB4RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB4RL;
volatile __BITS_ADC_DB4RL __at(0x53E9) ADC_DB4RL_bits;


volatile unsigned char __at(0x53EA) ADC_DB5RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB5RH;
volatile __BITS_ADC_DB5RH __at(0x53EA) ADC_DB5RH_bits;


volatile unsigned char __at(0x53EB) ADC_DB5RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB5RL;
volatile __BITS_ADC_DB5RL __at(0x53EB) ADC_DB5RL_bits;


volatile unsigned char __at(0x53EC) ADC_DB6RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB6RH;
volatile __BITS_ADC_DB6RH __at(0x53EC) ADC_DB6RH_bits;


volatile unsigned char __at(0x53ED) ADC_DB6RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB6RL;
volatile __BITS_ADC_DB6RL __at(0x53ED) ADC_DB6RL_bits;


volatile unsigned char __at(0x53EE) ADC_DB7RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB7RH;
volatile __BITS_ADC_DB7RH __at(0x53EE) ADC_DB7RH_bits;


volatile unsigned char __at(0x53EF) ADC_DB7RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB7RL;
volatile __BITS_ADC_DB7RL __at(0x53EF) ADC_DB7RL_bits;


volatile unsigned char __at(0x53F0) ADC_DB8RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB8RH;
volatile __BITS_ADC_DB8RH __at(0x53F0) ADC_DB8RH_bits;


volatile unsigned char __at(0x53F1) ADC_DB8RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB8RL;
volatile __BITS_ADC_DB8RL __at(0x53F1) ADC_DB8RL_bits;


volatile unsigned char __at(0x53F2) ADC_DB9RH; // ADC data buffer registers
typedef struct
{
    unsigned char DBH                   : 1;
} __BITS_ADC_DB9RH;
volatile __BITS_ADC_DB9RH __at(0x53F2) ADC_DB9RH_bits;


volatile unsigned char __at(0x53F3) ADC_DB9RL; // ADC data buffer registers
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DB9RL;
volatile __BITS_ADC_DB9RL __at(0x53F3) ADC_DB9RL_bits;


volatile unsigned char __at(0x5400) ADC_CSR; // ADC control/status register
typedef struct
{
    unsigned char CH                    : 4;
    unsigned char AWDIE                 : 1;
    unsigned char EOCIE                 : 1;
    unsigned char AWD                   : 1;
    unsigned char EOC                   : 1;
} __BITS_ADC_CSR;
volatile __BITS_ADC_CSR __at(0x5400) ADC_CSR_bits;


volatile unsigned char __at(0x5401) ADC_CR1; // ADC configuration register 1
typedef struct
{
    unsigned char ADON                  : 1;
    unsigned char CONT                  : 1;
    unsigned char SPSEL                 : 3;
} __BITS_ADC_CR1;
volatile __BITS_ADC_CR1 __at(0x5401) ADC_CR1_bits;


volatile unsigned char __at(0x5402) ADC_CR2; // ADC configuration register 2
typedef struct
{
    unsigned char SCAN                  : 1;
    unsigned char ALIGN                 : 1;
    unsigned char EXTSEL                : 2;
    unsigned char EXTTRIG               : 1;
} __BITS_ADC_CR2;
volatile __BITS_ADC_CR2 __at(0x5402) ADC_CR2_bits;


volatile unsigned char __at(0x5403) ADC_CR3; // ADC configuration register 3
typedef struct
{
    unsigned char OVR                   : 1;
    unsigned char DBUF                  : 1;
} __BITS_ADC_CR3;
volatile __BITS_ADC_CR3 __at(0x5403) ADC_CR3_bits;


volatile unsigned char __at(0x5404) ADC_DRH; // ADC data register high
typedef struct
{
    unsigned char DH                    : 1;
} __BITS_ADC_DRH;
volatile __BITS_ADC_DRH __at(0x5404) ADC_DRH_bits;


volatile unsigned char __at(0x5405) ADC_DRL; // ADC data register low
typedef struct
{
    unsigned char DL                    : 1;
} __BITS_ADC_DRL;
volatile __BITS_ADC_DRL __at(0x5405) ADC_DRL_bits;


volatile unsigned char __at(0x5406) ADC_TDRH; // ADC Schmitt trigger disable register high
typedef struct
{
    unsigned char TD                    : 8;
} __BITS_ADC_TDRH;
volatile __BITS_ADC_TDRH __at(0x5406) ADC_TDRH_bits;


volatile unsigned char __at(0x5407) ADC_TDRL; // ADC Schmitt trigger disable register low
typedef struct
{
    unsigned char TL                    : 8;
} __BITS_ADC_TDRL;
volatile __BITS_ADC_TDRL __at(0x5407) ADC_TDRL_bits;


volatile unsigned char __at(0x5408) ADC_HTRH; // ADC high threshold register high
typedef struct
{
    unsigned char HT                    : 8;
} __BITS_ADC_HTRH;
volatile __BITS_ADC_HTRH __at(0x5408) ADC_HTRH_bits;


volatile unsigned char __at(0x5409) ADC_HTRL; // ADC high threshold register low
typedef struct
{
    unsigned char HT                    : 2;
} __BITS_ADC_HTRL;
volatile __BITS_ADC_HTRL __at(0x5409) ADC_HTRL_bits;


volatile unsigned char __at(0x540A) ADC_LTRH; // ADC low threshold register high
typedef struct
{
    unsigned char LT                    : 8;
} __BITS_ADC_LTRH;
volatile __BITS_ADC_LTRH __at(0x540A) ADC_LTRH_bits;


volatile unsigned char __at(0x540B) ADC_LTRL; // ADC low threshold register low
typedef struct
{
    unsigned char LT                    : 2;
} __BITS_ADC_LTRL;
volatile __BITS_ADC_LTRL __at(0x540B) ADC_LTRL_bits;


volatile unsigned char __at(0x540C) ADC_AWSRH; // ADC analog watchdog status register high
typedef struct
{
    unsigned char AWS8                  : 1;
    unsigned char AWS9                  : 1;
} __BITS_ADC_AWSRH;
volatile __BITS_ADC_AWSRH __at(0x540C) ADC_AWSRH_bits;


volatile unsigned char __at(0x540D) ADC_AWSRL; // ADC analog watchdog status register low
typedef struct
{
    unsigned char AWS0                  : 1;
    unsigned char AWS1                  : 1;
    unsigned char AWS2                  : 1;
    unsigned char AWS3                  : 1;
    unsigned char AWS4                  : 1;
    unsigned char AWS5                  : 1;
    unsigned char AWS6                  : 1;
    unsigned char AWS7                  : 1;
} __BITS_ADC_AWSRL;
volatile __BITS_ADC_AWSRL __at(0x540D) ADC_AWSRL_bits;


volatile unsigned char __at(0x540E) ADC_AWCRH; // ADC analog watchdog control register high
typedef struct
{
    unsigned char AWEN8                 : 1;
    unsigned char AWEN9                 : 1;
} __BITS_ADC_AWCRH;
volatile __BITS_ADC_AWCRH __at(0x540E) ADC_AWCRH_bits;


volatile unsigned char __at(0x540F) ADC_AWCRL; // ADC analog watchdog control register low
typedef struct
{
    unsigned char AWEN0                 : 1;
    unsigned char AWEN1                 : 1;
    unsigned char AWEN2                 : 1;
    unsigned char AWEN3                 : 1;
    unsigned char AWEN4                 : 1;
    unsigned char AWEN5                 : 1;
    unsigned char AWEN6                 : 1;
    unsigned char AWEN7                 : 1;
} __BITS_ADC_AWCRL;
volatile __BITS_ADC_AWCRL __at(0x540F) ADC_AWCRL_bits;


volatile unsigned char __at(0x7F00) CPU_A; // Accumulator
volatile unsigned char __at(0x7F01) CPU_PCE; // Program counter extended
volatile unsigned char __at(0x7F02) CPU_PCH; // Program counter high
volatile unsigned char __at(0x7F03) CPU_PCL; // Program counter low
volatile unsigned char __at(0x7F04) CPU_XH; // X index register high
volatile unsigned char __at(0x7F05) CPU_XL; // X index register low
volatile unsigned char __at(0x7F06) CPU_YH; // Y index register high
volatile unsigned char __at(0x7F07) CPU_YL; // Y index register low
volatile unsigned char __at(0x7F08) CPU_SPH; // Stack pointer high
volatile unsigned char __at(0x7F09) CPU_SPL; // Stack pointer low
volatile unsigned char __at(0x7F0A) CPU_CCR; // Condition code register
typedef struct
{
    unsigned char C                     : 1;
    unsigned char Z                     : 1;
    unsigned char NF                    : 1;
    unsigned char I0                    : 1;
    unsigned char H                     : 1;
    unsigned char I1                    : 1;
    unsigned char V                     : 1;
} __BITS_CPU_CCR;
volatile __BITS_CPU_CCR __at(0x7F0A) CPU_CCR_bits;


volatile unsigned char __at(0x7F60) CPU_CFG_GCR; // Global configuration register
typedef struct
{
    unsigned char SWO                   : 1;
    unsigned char AL                    : 1;
} __BITS_CPU_CFG_GCR;
volatile __BITS_CPU_CFG_GCR __at(0x7F60) CPU_CFG_GCR_bits;


volatile unsigned char __at(0x7F80) SWIM_CSR; // SWIM control status register
volatile unsigned char __at(0x7F90) DM_BK1RE; // DM breakpoint 1 register extended byte
volatile unsigned char __at(0x7F91) DM_BK1RH; // DM breakpoint 1 register high byte
volatile unsigned char __at(0x7F92) DM_BK1RL; // DM breakpoint 1 register low byte
volatile unsigned char __at(0x7F93) DM_BK2RE; // DM breakpoint 2 register extended byte
volatile unsigned char __at(0x7F94) DM_BK2RH; // DM breakpoint 2 register high byte
volatile unsigned char __at(0x7F95) DM_BK2RL; // DM breakpoint 2 register low byte
volatile unsigned char __at(0x7F96) DM_CR1; // DM debug module control register 1
volatile unsigned char __at(0x7F97) DM_CR2; // DM debug module control register 2
volatile unsigned char __at(0x7F98) DM_CSR1; // DM debug module control/status register 1
volatile unsigned char __at(0x7F99) DM_CSR2; // DM debug module control/status register 2
volatile unsigned char __at(0x7F9A) DM_ENFCTR; // DM enable function register



// Offsets for the interrupt vector table
#define AWU_vector  1
#define CLK_CSS_vector 2
#define CLK_SWITCH_vector 2
#define EXTI0_vector 3
#define EXTI1_vector 4
#define EXTI2_vector 5
#define EXTI3_vector 6
#define EXTI4_vector 7
#define SPI_CRCERR_vector 10
#define SPI_MODF_vector 10
#define SPI_OVR_vector 10
#define SPI_RXNE_vector 10
#define SPI_TXE_vector 10
#define SPI_WKUP_vector 10
#define TIM1_CAPCOM_BIF_vector 11
#define TIM1_CAPCOM_TIF_vector 11
#define TIM1_OVR_UIF_vector 11
#define TIM1_CAPCOM_CC1IF_vector 12
#define TIM1_CAPCOM_CC2IF_vector 12
#define TIM1_CAPCOM_CC3IF_vector 12
#define TIM1_CAPCOM_CC4IF_vector 12
#define TIM1_CAPCOM_COMIF_vector 12
#define TIM2_OVR_UIF_vector 13
#define TIM2_CAPCOM_CC1IF_vector 14
#define TIM2_CAPCOM_CC2IF_vector 14
#define TIM2_CAPCOM_CC3IF_vector 14
#define TIM2_CAPCOM_TIF_vector 14
#define UART1_T_TC_vector 17
#define UART1_T_TXE_vector 17
#define UART1_R_IDLE_vector 18
#define UART1_R_LBDF_vector 18
#define UART1_R_OR_vector 18
#define UART1_R_PE_vector 18
#define UART1_R_RXNE_vector 18
#define I2C_ADD10_vector 19
#define I2C_ADDR_vector 19
#define I2C_AF_vector 19
#define I2C_ARLO_vector 19
#define I2C_BERR_vector 19
#define I2C_BTF_vector 19
#define I2C_OVR_vector 19
#define I2C_RXNE_vector 19
#define I2C_SB_vector 19
#define I2C_STOPF_vector 19
#define I2C_TXE_vector 19
#define I2C_WUFH_vector 19
#define ADC1_AWDG_vector 22
#define ADC1_AWS0_vector 22
#define ADC1_AWS1_vector 22
#define ADC1_AWS2_vector 22
#define ADC1_AWS3_vector 22
#define ADC1_AWS4_vector 22
#define ADC1_AWS5_vector 22
#define ADC1_AWS6_vector 22
#define ADC1_AWS7_vector 22
#define ADC1_AWS8_vector 22
#define ADC1_AWS9_vector 22
#define ADC1_EOC_vector 22
#define TIM4_OVR_UIF_vector 23
#define FLASH_EOP_vector 24
#define FLASH_WR_PG_DIS_vector 24
#endif // #ifdef IOSTM8S003K3_H
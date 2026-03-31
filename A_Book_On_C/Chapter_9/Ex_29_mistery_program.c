/*
 * File:    Ex_01_pow_xn.c
 * Author:  Alexander130892
 * Date:    25-3-2026
 *
 * Description:
 *   This file implements a custom power function that calculates x
 *   raised to the power of n using iterative multiplication, and
 *   demonstrates it by computing 3.5^7.
 */
 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <math.h>
#include <limits.h>

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    #define HEX0    0x6c6c6548
    #define HEX1    0x77202c6f
    #define HEX2    0x646c726f
    #define HEX3    0x000000a21
#else
    #define HEX0    0x48656c6c
    #define HEX1    0x6f2c2077
    #define HEX2    0x6f726c64
    #define HEX3    0x210a0000
#endif

//Consts
typedef union{
    char what[16];
    uint32_t cipher[4];
}mystery;

int main(){
    mystery x;

    x.cipher[0] = HEX0;
    x.cipher[1] = HEX1;
    x.cipher[2] = HEX2;
    x.cipher[3] = HEX3;
    printf("%s\n", x.what);
    return EXIT_SUCCESS;
}

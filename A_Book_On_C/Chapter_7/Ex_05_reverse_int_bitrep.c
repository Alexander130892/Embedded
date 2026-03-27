/*
 * File:    Ex_05_reverse_int_bitrep.c
 * Author:  Alexander130892
 * Date:    27-3-2026
 *
 * Description:
 *   This file demonstrates bit manipulation by printing the binary
 *   representation of an integer (0xAAAA) in both normal and reverse
 *   bit order. The program uses bitwise operations and masking to
 *   display bits from most-significant-bit-first and
 *   least-significant-bit-first, with spaces separating each byte for
 *   readability.
 */
//Libraries
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Consts

//Typedefs

//Prototype Functions
short cyclic_shift(unsigned short a, int n);
void bitprint(int);
void bitprint_reverse(int a);

//MAIN
int main(void){
    unsigned int i =0xAAAA;
    bitprint(i);
    bitprint_reverse(i);
    return EXIT_SUCCESS;
}

void bitprint(int a){
    int i;
    int n = sizeof(int) * CHAR_BIT;
    int mask = 1 << (n-1); // 100..00
    for(i=1; i<=n; i++){
        putchar(((a & mask)==0)?'0':'1');
        a <<= 1;
        if( i % CHAR_BIT == 0 && i<n)
            putchar(' ');
    }
    putchar('\n');
}

void bitprint_reverse(int a){
    int i;
    int n = sizeof(int) * CHAR_BIT;
    int mask = 1; // 000..01
    for(i=1; i<=n; i++){
        putchar(((a & mask)==0)?'0':'1');
        a >>= 1;
        if( i % CHAR_BIT == 0 && i<n)
            putchar(' ');
    }
    putchar('\n');
}
/*
 * File:    Ex_02_majority.c
 * Author:  Alexander130892
 * Date:    25-3-2026
 *
 * Description:
 *   This file implements a bitwise majority function that determines,
 *   for each bit position, whether the majority of three input values
 *   have that bit set (returning 1 if at least 2 out of 3 bits are 1,
 *   otherwise 0). It demonstrates this functionality by processing
 *   three hardcoded 16-bit values and displaying both the inputs and
 *   result in binary format.
 */
//Libraries
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Consts

//Typedefs

//Prototype Functions
short majority(short a, short b, short c);
void bitprint(short);

//MAIN
int main(void){
    short a = 0xAAAA; // 1010 1010
    short b = 0x9A9F; // 1001 1001
    short c = 0x84C8; // 1000 0100
    bitprint(a);
    bitprint(b);
    bitprint(c);   
    printf("%hx\n", majority(a,b,c));
    bitprint(majority(a,b,c));  
    return EXIT_SUCCESS;
}

short majority(short a, short b, short c){
    return ((a & b) | (b & c) | (a & c));
}

void bitprint(short a){
    int i;
    int n = sizeof(short) * CHAR_BIT;
    int mask = 1 << (n-1); // 100..00
    for(i=1; i<=n; i++){
        putchar(((a & mask)==0)?'0':'1');
        a <<= 1;
        if( i % CHAR_BIT == 0 && i<n)
            putchar(' ');
    }
    putchar('\n');
}
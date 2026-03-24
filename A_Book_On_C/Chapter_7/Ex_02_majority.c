/*
 * File:    majority.c
 * Author:  Alexander Vindelinckx
 * Date:    18-3-2026
 *
 * Description:
 *   Prints command line arguments, uppercased if -c flag is present.
 *   Skips the -c flag itself in output.
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
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

//Consts
typedef union{
    unsigned char raw;
    struct {
        unsigned int b1 :1; //LSB
        unsigned int b2 :1;
        unsigned int b3 :1;
        unsigned int b4 :1; //MSB
    } bits;
} nibble_t;

void print_table(const char* label, const char* fct_label, int (*fct)(nibble_t))
{
    int cnt = 0;
    printf("\n%5s%5s%5s%5s%5s%5s\n", "Cnt", "b1", "b2", "b3", "b4", fct_label);
    for( unsigned char b = 0; b < 16 ; b++)
    {
        nibble_t n = { .raw = b};
        printf("%5d%5d%5d%5d%5d%5d\n", cnt++, n.bits.b1, n.bits.b2, n.bits.b3, n.bits.b4,fct(n));
    }
}

int fct1(nibble_t n) { return n.bits.b1 || n.bits.b2 || n.bits.b3 || n.bits.b4; }
int fct2(nibble_t n) { return n.bits.b1 && n.bits.b2 && n.bits.b3 && n.bits.b4; }
int fct3(nibble_t n) { return !(!n.bits.b1 || n.bits.b2) && (!n.bits.b3 || n.bits.b4); }

int main(){
    print_table("OR  ", "fct1", fct1);
    print_table("AND ", "fct2", fct2);
    print_table("COMPLEX", "fct3", fct3);
    return EXIT_SUCCESS;
    return EXIT_SUCCESS;
}

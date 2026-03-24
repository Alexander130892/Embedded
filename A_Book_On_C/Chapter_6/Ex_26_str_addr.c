/*
 * File:    poly_mul.c
 * Author:  Alexander Vindelinckx
 * Date:    16-3-2026
 *
 * Description:
 *   Polynomial addition and multiplication.
 *   Coefficients stored ascending: p[0] + p[1]*x + p[2]*x^2 + ...
 *   Max degree of g and h is K. Result f has max degree 2K (size 2K+1).
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

//Consts
#define N 40

//Typedefs
typedef const char cchar;

//Prototype Functions


//MAIN
int main(){
    char *q = "abc"; 
    char *p = "abc";
    if (p ==q)
        printf("Same address!\n");
    else
        printf("Different address!\n");
    return EXIT_SUCCESS;
}
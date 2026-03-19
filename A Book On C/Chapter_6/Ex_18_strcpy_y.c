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

//Consts
#define N 5

//Typedefs

//Prototype Functions


//MAIN
int main(){
    char a[]="abcdefghijklmnopqrstuvwxyz";
    char*p=a;
    char *q=a+strlen(a)-3;
    
    printf("a=%s\n", a);
    strcpy(q,p);
    printf("a=%s\n", a);
    return EXIT_SUCCESS;
}

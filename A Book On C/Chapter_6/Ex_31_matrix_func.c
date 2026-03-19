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
#include <ctype.h>

//Consts
#define CYPHER (3)

//Typedefs
typedef const char cchar;

//Prototype Functions

void try_me(int [][3]);


//MAIN
int main(){
    int a[3][3]={{2,5,7},{0,-1,2},{7,9,3}};
    try_me(a);
    return EXIT_SUCCESS;
}

void try_me(int (*a)[3]){
    printf("%d %d %d %d .... infinity\n",
        a[1][0], -a[1][1], a[0][0], a[2][2]);
}


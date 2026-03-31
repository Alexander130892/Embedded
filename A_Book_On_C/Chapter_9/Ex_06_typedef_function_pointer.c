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
#include <time.h>
#include <math.h>
#include <limits.h>

//Consts
#define PI 3.14 //rows
#define COLLUMNS 5 // collumns

typedef double dbl;

//typedef dbl (*PFDD)(dbl);

typedef dbl (FDD)(dbl);
typedef FDD *PFDD;

//Typedefs
//typedef char* string;



int main(){
    PFDD f = sin, g = cos;
    printf("f(%.2f) = %.2f\n", PI, f(PI));
    printf("g(%.2f) = %.2f\n", PI, g(PI));
    return EXIT_SUCCESS;
}

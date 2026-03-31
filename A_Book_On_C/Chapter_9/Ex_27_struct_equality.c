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
typedef struct{
    int a;
    int b;
}test;

int main(){
    test A={1,3};
    test B=A;
    printf("%d %d\n",A.b, B.b );
    //printf("%d\n",A==B ); //error
    return EXIT_SUCCESS;
}

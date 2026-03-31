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
#define ACC 100 // number of fct calls
//#define DOLLARS float

//Typedefs
typedef float DOLLARS;



int main(){
    DOLLARS amount = 100.0;
    DOLLARS interest = 0.07 * amount;
    {
        float DOLLARS;
        DOLLARS = amount + interest;
        printf("DOLLARS = %.2f\n", DOLLARS); // NOK with #define
    }
    
    return EXIT_SUCCESS;
}

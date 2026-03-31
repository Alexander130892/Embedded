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
#define string char*

//Typedefs
//typedef char* string;



int main(){
    string  a[] = {"I", "like", "to", "fight,"}, // with define, b is a char iso char*
            b[] = {"pinch", "and", "bite."};
    printf("%s %s %s %s %s %s %s\n", a[0],a[1],a[2],a[3],b[0],b[1],b[2] );
    
    return EXIT_SUCCESS;
}

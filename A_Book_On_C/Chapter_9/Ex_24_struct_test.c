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
struct test {
    unsigned a:1, b:2, c:3;
};

int main(){
    int         i;
    struct test x;
    for (i=0; i < 23; i++)
    {
        x.a = x.b = x.c = i;
        //x.c = x.b = x.a = i;
        printf("x.a = %d    x.b = %d    x.c = %d\n", x.a, x.b, x.c);
    }
    return EXIT_SUCCESS;
}

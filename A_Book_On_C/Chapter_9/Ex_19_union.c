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
union a {
    int a;
    char b;
    float c; //needs to be different
} a, b, c;

typedef union {
    uint8_t raw;
    struct {
        uint8_t ready   : 1;
        uint8_t error   : 1;
        uint8_t mode    : 2;
        uint8_t padding : 4;
    } bits;
} StatusRegister;



int main(){
    //init resto lists
    
    return EXIT_SUCCESS;
}


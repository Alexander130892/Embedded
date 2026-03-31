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

typedef struct{
    double real;
    double imaginary;
} complex;

complex complex_add_value(complex a, complex b);
void complex_add_ref(complex *a, complex *b, complex *result);

int main(){
    complex a = {2,3};
    complex b;
    b.real = 4;
    b.imaginary = -2;
    complex c={0};
    c=complex_add_value(a,b);
    printf("%.1f +i %.1f + %.1f + i %.1f = %.1f + i %.1f\n", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary);

    complex d={0};
    complex_add_ref(&a,&b,&d);
    printf("%.1f +i %.1f + %.1f + i %.1f = %.1f + i %.1f\n", a.real, a.imaginary, b.real, b.imaginary, d.real, d.imaginary);

    return EXIT_SUCCESS;
}

complex complex_add_value(complex a, complex b)
{
    complex result={0};
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
void complex_add_ref(complex *a, complex *b, complex *result){
    result->real = a->real + b->real;
    result->imaginary = a->imaginary + b->imaginary;
    return;
}
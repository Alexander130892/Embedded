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

//Consts
#define N 5

//Typedefs

//Prototype Functions
void add_p(double *f, double *g, double *h, int K);
void mul_p(double *f, double *g, double *h, int K);
void print_p(double *p, int degree);

//MAIN
int main(){
    double g[N+1]   = {1, 2, 3, 2, -1, 0};  /* 1 + 2x + 3x^2        */
    double h[N+1]   = {1, 1, 4, 5, 4, 1};  /* 1 + x                */
    double f[2*N+1] = {0};                  /* result: up to degree 2K */

    mul_p(f, g, h, N);
    print_p(f, 2*N);                        /* expected: 1 + 3x + 5x^2 + 3x^3 */

    return EXIT_SUCCESS;
}

//Helper-Functions
void add_p(double *f, double *g, double *h, int K){
    for(int i = 0; i < K+1; i++){
        f[i] = g[i] + h[i];
    }
}

void mul_p(double *f, double *g, double *h, int K){
    /* zero the output — caller may pass uninitialised array */
    for(int n = 0; n <= 2*K; n++)
        f[n] = 0.0;

    for(int i = 0; i <= K; i++)
        for(int j = 0; j <= K; j++)
            f[i+j] += g[i] * h[j];
}

void print_p(double *p, int degree){
    for(int i = 0; i <= degree; i++)
        printf("p[%d] = %.2f\n", i, p[i]);
}
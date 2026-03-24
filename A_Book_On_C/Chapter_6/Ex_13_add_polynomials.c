/*
 * File:    filename.c
 * Author:  Alexander Vindelinckx
 * Date:    26-2-2026
 *
 * Description:
 *   Brief description of what this file contains or does.
 */

 //Libraries
#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <math.h>
#include <limits.h>

//Consts
#define N 5


//Typedefs

//Prototype
void add_p(double*, double*, double*, int);
double eval_hor(double*, double, int);

int main() {
    double g[N+1]={1,2,3,4,5,6};
    double h[N+1]={6,5,4,3,2,1};
    double f[N+1]={0};
    add_p(f,g,h,N);
    for(int i=0;i<N+1;i++){
        printf("%.0f,",f[i]);
    }
    return 0;
}
void add_p(double* f, double* g, double* h, int K){
    for(int i=0;i<N+1;i++){
        f[i]=g[i]+h[i];
    }
}
double eval_hor(double *p, double x, int K) {
    double val = p[K];
    for (int n = K - 1; n >= 0; n--)
        val = val * x + p[n];
    return val;
}


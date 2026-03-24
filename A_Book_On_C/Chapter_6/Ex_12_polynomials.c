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
double eval(double*, double, int);
double eval_hor(double*, double, int);

int main() {
    double p[N+1]={1,2,3,4,5,6};
    printf("%lf\n",eval(p, 2, N));
    printf("%lf\n",eval_hor(p, 2, N));
    return 0;
}

double eval(double *p, double x, int K){
    double val=0;
    for (int n=0;n<=K;n++)
        val+=p[n]*pow(x,n);
    return val;
}

double eval_hor(double *p, double x, int K) {
    double val = p[K];
    for (int n = K - 1; n >= 0; n--)
        val = val * x + p[n];
    return val;

}


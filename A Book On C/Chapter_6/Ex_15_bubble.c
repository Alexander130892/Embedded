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
void bubble(double *, int);

//MAIN
int main(){
    double g[N+1]   = {1, 2, 3, 2, -1, 0};  
    double h[N+1]   = {1, 1, 4, 5, 4, 1};  
    print_p(g, N+1);   
    bubble(g, N+1);
    print_p(g, N+1);                        

    return EXIT_SUCCESS;
}

//Helper-Functions
void bubble(double * arr, int size){
    double temp;
    int switched;
    for(int i=0;i<size-1;i++){
        switched=0;
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                switched=1;
            }
        }
        if (switched==0)
            break;
    }
}

void print_p(double *p, int degree){
    for(int i = 0; i < degree; i++)
        printf("%.0f, ", p[i]);
    putchar('\n');
}
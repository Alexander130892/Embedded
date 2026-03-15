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
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <limits.h>

//Consts
#define ACC 100 // number of fct calls

//Typedefs

//Prototype Functions
long factorial_rec(int n);
long factorial_it(int n);
//MAIN

int main(){
    int n=-5;
    printf("Recursively: %ld\n", factorial_rec(n));
    printf("Iteratively: %ld\n", factorial_it(n));
}

long factorial_rec(int n){
    if(n<0) return -1;
    return (n==0 || n==1)?1:n*factorial_rec(n-1);
}
long factorial_it(int n){
    if (n<0)
        return -1;
    if (n==0)
        return 1;
    long fact=n;
    for (int i=n-1;i>0;i--){
        fact*=i;
    }
    return fact;
}
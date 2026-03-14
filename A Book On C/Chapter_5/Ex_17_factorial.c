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
#define NUMBERS 100

//Typedefs

//Prototypes
int factorial(int n);

int main(){
    static int cnt=0;
    printf("%d   The Universe is never ending!    ", factorial(5));
    
    return 0;
}

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(--n);
}
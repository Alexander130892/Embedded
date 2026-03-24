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
int gcd_rec(int a, int b);
int gcd_it(int a, int b);

int main(){
    int a=48;
    int b=24;
    printf("gcd(%d,%d)=%d\n", a,b,gcd_rec(a,b));
    
    return 0;
}

int gcd_rec(int a, int b){
    int r;
    while(b){
        r = a %b;
        a = b;
        b = r;
    }
    return a;
}
int gcd_it(int a, int b){
    int r;
        while(b){
    r = a %b;
    a = b;
    b = r;
        }
    return a;
}
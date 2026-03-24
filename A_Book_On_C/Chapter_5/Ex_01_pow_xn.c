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
double power(double x, int n);
//MAIN
int main(){
    printf("%.2f\n", power(3.5,7));
}
double power(double x, int n){
    double p=1;
    while(n>0){
        p*=x;
        n--;
    }
        

    return p;
}

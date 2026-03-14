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
//#include <math.h>
#include <limits.h>

//Consts
int z;



//Typedefs

//Prototypes
double f(double,double,double,double);

int main(){
    double a=1,b=-3,c=2;
    for (double x=0;x<=3;x+=0.1){
        printf("%.1lf,%.1lf\n",x,f(a,b,c,x));
    }
    return 0;
}

double f(double a,double b,double c,double x){
    return (a*x+b)*x+c;
}
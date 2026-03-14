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

//Consts
#define NCALLS 100000000 // number of fct calls
#define NCOLS 8 // number of collumns
#define NLINES 3 // number of lines


//Typedefs

//Prototype Functions

//MAIN
int main(){
    double two_pi = 2.0 * M_PI;
    double h = 0.1;
    double x;
    for (x=0.0; x < two_pi; x+=h){
        printf("%5.1f: %.15a\n", x, sin(x)*sin(x)+cos(x)*cos(x));
    }
}

//Helper-Functions
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
    printf("char = %lu\nshort = %lu\nint = %lu\nunsigned = %lu\nlong = %lu\nfloat = %lu\ndouble = %lu\nlong double = %lu\n", 
        sizeof(char),sizeof(short),sizeof(int),sizeof(unsigned),sizeof(long),sizeof(float),sizeof(double),sizeof(long double));

}

//Helper-Functions
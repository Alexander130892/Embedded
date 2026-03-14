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
#define NCALLS 100000000 // number of fct calls
#define NCOLS 8 // number of collumns
#define NLINES 3 // number of lines


//Typedefs

//Prototype Functions

//MAIN
int main(){
    char c='A';
    int i=5, j=10;
    printf("%d, %d, %d\n", !c, !!c, !!!c);
    printf("%d, %d, %d\n", -!i, !-c, !-i-!j);
    printf("%d, %d, %d\n", !(6*j+i-c), ! i-5, !(j -10));
}

//Helper-Functions
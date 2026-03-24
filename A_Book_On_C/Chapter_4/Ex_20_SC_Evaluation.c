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
    int a=0,b=0,x;
    x=0 && (a=b=777);
    printf("%d %d %d   \n", a,b,x);
    x=777 || (a=++b);
    printf("%d %d %d   \n", a,b,x);
}

//Helper-Functions
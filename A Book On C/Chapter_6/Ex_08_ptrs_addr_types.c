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
#include <stddef.h>
#include <time.h>
#include <math.h>
#include <limits.h>

//Consts
#define COUNT 1000000.0

//Typedefs

//Prototypes


int main() {
    char *pc =NULL;
    int *pi =NULL;
    double *pd =NULL;
    long double *pld =NULL;

    printf("%5lu%5lu\n%5lu%5lu\n%5lu%5lu\n",
        (unsigned long)(pc+1),(unsigned long)(pi+1),
        (unsigned long)(pd+1),(unsigned long)(pld+1),
        (unsigned long)(pc+3),(unsigned long)(pld+3));
    return 0;
}
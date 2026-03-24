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
    int a,b,*p=&a, *q=&b;
    ptrdiff_t diff = p-q;
    printf("diff = %ld\n", diff);
    diff = p-(int*)0;
    printf("diff = %ld\n", diff);
    return 0;
}
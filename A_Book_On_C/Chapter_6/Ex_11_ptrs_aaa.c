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

//Prototype


int main() {
    int a[]={0,2,4,6,8},
        *p = a+3;

    printf("%s%d%s\n%s%d%s\n",
        "a[?]   = ", *p,    "?",
        "a[?+1] = ", *(p+1), "?" );
    return 0;
}
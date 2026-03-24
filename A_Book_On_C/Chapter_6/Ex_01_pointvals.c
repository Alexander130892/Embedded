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
#define COUNT 1000000.0

//Typedefs

//Prototypes


int main() {
    char* format= "%p %d %d %d\n";
    int i = 3;
    int *p = &i;
    printf(format, p, *p+7, 3 * **&p +1, 5*(p-(p-2)));
    //ex 2
    printf("%d %d",(int) p, (int)(p-2));
    return 0;
}
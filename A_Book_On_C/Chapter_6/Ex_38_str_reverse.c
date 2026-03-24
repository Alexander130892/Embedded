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
#include <string.h>
#include <limits.h>

//Consts
#define COUNT 1000000.0

//Typedefs

//Prototypes
char * reverse(char*);

int main() {
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    printf("%s\n", s);
    printf("%s\n", reverse(s));
    printf("%s\n", s);
    return 0;
}

char * reverse(char*s){
    char *p, *q, tmp;
    int n=strlen(s);
    q = (n > 0) ? s + n - 1: s;
    for(p=s ; p < q; p++, q--)
    {
        tmp = *p;
        *p = *q;
        *q = tmp;
    }
    return s;
}
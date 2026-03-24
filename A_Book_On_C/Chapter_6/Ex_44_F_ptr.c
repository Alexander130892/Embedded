/*
 * File:    args.c
 * Author:  Alexander Vindelinckx
 * Date:    18-3-2026
 *
 * Description:
 *   Prints command line arguments, uppercased if -c flag is present.
 *   Skips the -c flag itself in output.
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Consts

//Typedefs

//Prototype Functions
void f(void);
void g(void);
void h(void);

//MAIN
int main(void){
    (*f)();
    return EXIT_SUCCESS;
}

void f(void){
    printf("Hello from f().\n");
    (((*g)))();
}

void g(void){
    printf("Hello from g().\n");
    (*(*(*h)))();
}

void h(void){
    printf("Hello from h().\n");
}
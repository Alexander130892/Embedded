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
void print_arg(const char *s, int cap);

//MAIN
int main(int argc, char *argv[]){
    int cap = 0;

    /* first pass — scan for -c flag */
    for(int i = 1; i < argc; i++)
        if(strcmp(argv[i], "-c") == 0)
            cap = 1;

    printf("argc = %d\n", argc);

    /* second pass — print args, skipping -c */
    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i], "-c") == 0)
            continue;
        print_arg(argv[i], cap);
    }

    return EXIT_SUCCESS;
}

//Helper-Functions
void print_arg(const char *s, int cap){
    while(*s){
        putchar(cap ? toupper((unsigned char)*s) : *s);
        s++;
    }
    putchar('\n');
}
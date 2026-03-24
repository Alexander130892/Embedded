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
int main(int argc, char **argv){
    while(*argv != NULL)
        printf("%s ", *argv++);
    putchar('\n');
    return EXIT_SUCCESS;
}


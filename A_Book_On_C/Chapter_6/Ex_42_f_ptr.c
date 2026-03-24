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
void tell_me(void *f);

//MAIN
int main(int argc, char **argv){
   tell_me(strcmp);
   tell_me(main);
    return EXIT_SUCCESS;
}

void tell_me(void *f){
    if (f == strcmp)
        printf("Address of strcmp(): %p\n", f);
    else
        printf("Function address: %p\n", f);
}


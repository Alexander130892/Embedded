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
int main(){
    char* p[2][3]={"abc","defg","hi",
                    "jklmno", "pqrstu","vwxyz"};

    printf("%c\n",***(p)) ;    
    printf("%c\n",**(p[1])) ;
    printf("%c\n",**(p[1]+2)) ;
    //printf("%c\n",*(*(p+1)+1)[7]) ;
    printf("%c\n",(*(*(p+1)+1))[7]) ;
    printf("%c\n",*(p[1][2]+2)) ;
    return 0;
}
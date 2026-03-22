/*
 * File:    strcopy_.c
 * Author:  Alexander Vindelinckx
 * Date:    22-3-2026
 *
 * Description:
 *   copy strings.
 *      copy s2 to s1
 *      assume s1 has enough space available in memory to store s2
 *      attempt to recreate standard string.h function from scratch
 */

 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//Consts

//Typedefs

//Prototype Functions
char* strcpy_(char *s1, const char* s2); //he real strcpy returns char * (the original destination pointer) rather than void, for the same reason memset does: it allows chaining:

int main(){
    char string1[100] = "I was here first";
    const char * string2 = ", but then I came";
    printf("%s\n%s\n", string1, string2);
    strcpy_(string1, string2);
    printf("%s\n%s\n", string1, string2);
}

char *strcpy_(char *s1, const char *s2){
    char *start = s1;
    while((*s1++ = *s2++));
    return start;  // return original destination
}
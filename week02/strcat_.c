/*
 * File:    strcat_.c
 * Author:  Alexander Vindelinckx
 * Date:    22-3-2026
 *
 * Description:
 *   concatenate two strings.
 *      append s2 to s1
 *      assume s1 has enough space available in memory to store s1+s2
 *      attempt to recreate standard string.h function from scratch
 */

 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//Consts

//Typedefs

//Prototype Functions
void strcat_(char *s1, const char* s2); 

int main(){
    char string1[100] = "I was here first";
    const char * string2 = ", but then I came";
    printf("%s\n%s\n", string1, string2);
    strcat_(string1, string2);
    printf("%s\n%s\n", string1, string2);
}

void strcat_(char *s1, const char* s2){
    while((*s1)!='\0')
        s1++;//arrived at end of s1
    while((*s1++=*s2++));
    return;
}

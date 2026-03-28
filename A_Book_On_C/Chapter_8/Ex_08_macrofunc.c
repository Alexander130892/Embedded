/*
 * File:    Ex_24_condensed_pack.c
 * Author:  Alexander130892
 * Date:    27-3-2026
 *
 * Description:
 *   This C program packs four individual char values into a single
 *   unsigned integer using bit shifting operations, then displays the
 *   resulting packed value in binary format with spaces separating
 *   each byte. The pack function demonstrates a condensed one-line
 *   approach to combining multiple bytes into a larger data type.
 */
//write pack into one line
#include <ctype.h>
#include <stdio.h>

#define PRN3(x,y,z) printf(#x " has value %.1f and " #y " has value %.1f and " #z " has value %.1f\n", x,y,z)

int main(void){ 
    printf("%c %c %c %c\n", tolower('a'), _tolower('a'), toupper('a'), _toupper('a'));
    return 0;
}

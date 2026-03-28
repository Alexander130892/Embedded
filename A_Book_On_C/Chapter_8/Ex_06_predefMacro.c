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
#include <stdio.h>

#define PRN3(x,y,z) printf(#x " has value %.1f and " #y " has value %.1f and " #z " has value %.1f\n", x,y,z)

int main(void){ 
    printf("%s%s\n%s%s\n%s%d\n%s%d\n%s%s\n",
        "__DATE__ = ", __DATE__,
        "__FILE__ = ", __FILE__,
        "__LINE__ = ", __LINE__,
        "__STDC__ = ", __STDC__,
        "__TIME__ = ", __TIME__);
    return 0;
}

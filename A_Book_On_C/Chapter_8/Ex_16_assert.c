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
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>

#define int long



int main(void){ 
    int a=1<<65, b=200000;
    printf("%d",a);
    assert(a > b);
    return 0;
}

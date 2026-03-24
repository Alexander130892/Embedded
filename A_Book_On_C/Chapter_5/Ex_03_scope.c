/*
 * File:    filename.c
 * Author:  Alexander Vindelinckx
 * Date:    26-2-2026
 *
 * Description:
 *   Brief description of what this file contains or does.
 */

 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <limits.h>

//Consts
int z;


//Typedefs
void f(int x){
    x=2;
    z+=x;
}


int main(){
    z=5;
    f(z);
    printf("f(z)=%d",z);
    return 0;
}


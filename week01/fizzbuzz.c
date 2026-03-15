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
#define ACC 100 // number of fct calls

//Typedefs

//Prototype Functions

//MAIN

int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5==0)
            printf("FizzBuzz\n");
        else if(i%5==0)
            printf("Buzz\n");
        else if(i%3==0)
            printf("Fizz\n");
        else
            printf("%d\n",i);
    }
}


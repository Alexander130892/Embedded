/*
 * File:    fizzbuzz.c
 * Author:  Alexander130892
 * Date:    25-3-2026
 *
 * Description:
 *   This file implements the classic FizzBuzz programming exercise,
 *   printing numbers 1 to 100 while replacing multiples of 3 with
 *   "Fizz", multiples of 5 with "Buzz", and multiples of both with
 *   "FizzBuzz".
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


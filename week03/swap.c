/*
 * File:    strlen_.c
 * Author:  Alexander130892
 * Date:    25-3-2026
 *
 * Description:
 *   Exercise: swap two integers using pointers, without a temp variable
 */
 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//Consts

//Typedefs

//Prototype Functions
void swap(int * a, int * b);
//MAIN 
int main(){
    int a = 3;
    int b = 9;
    printf("Before swap: %d - %d\n", a,b);
    swap(&a, &b);
    printf("After swap: %d - %d\n", a,b);
    return EXIT_SUCCESS;
}

void swap(int * a, int * b){
    if (a == b) return;   
    *a = ((*a)^(*b));
    *b = ((*b)^(*a));
    *a = ((*a)^(*b));
    return;
}

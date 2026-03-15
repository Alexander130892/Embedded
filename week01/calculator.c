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
#include <assert.h>
#include <limits.h>

//Consts
#define ACC 100 // number of fct calls

//Typedefs

//Prototype Functions
void getUserinfo(double *, int*, double*);
double getResult(double, int, double);

//MAIN


int main(){
    printf("Input 2 real numbers and a operand (in order a %% b, where %% is the operand:\n");
    double a,b;
    int c;
    getUserinfo(&a,&c,&b);
    printf("The calculation %.1lf %c %.1lf = %.2lf\n", a,c,b, getResult(a,c,b));
}

void getUserinfo(double *a, int* c, double* b){
    //get user input
    //first number
    printf("Please put in your first number:\n");
    scanf("%lf",a);
    while(getchar() != '\n'); // clean input buffer
    //operand
    printf("Please put in the operand (+ , - , * , /)\n");
    *c=getchar();
    while((*c!='+')&&(*c!='-')&&(*c!='*')&&(*c!='/')){
        printf("Invalid operand!\n");
        while(getchar() != '\n'); // clear buffer
        *c=getchar();
    }
    //second number
    printf("Please put in your second number:\n");
    scanf("%lf",b);
}

double getResult(double a, int c, double b){
    switch(c){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            if(b == 0){
                printf("Error: division by zero!\n");
                return -1;
            }
            return a/b;
        default:
            return -1;
    }
}
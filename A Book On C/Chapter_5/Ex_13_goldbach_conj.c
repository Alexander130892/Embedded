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
//#include <math.h>
#include <limits.h>

//Consts
#define START 700
#define FINISH 1100

//Typedefs

//Prototypes
int isprime(int);

int main(){
    printf("Every even number greater than 2 is the sum of two primes:\n");
    int a,b;
    int n=START;
    while (n <= FINISH){
        for(a=2;a<n;a++){
            b=n-a;
            if(isprime(a) && isprime(b)){
                printf("%d = %d + %d\n", n, a, b);
                n+=2;
                a=n;
            }
        }
    }
    return 0;
}

int isprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
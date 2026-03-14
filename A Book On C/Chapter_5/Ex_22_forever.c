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
#define STOP 17
#define FOREVER 1

//Typedefs

//Prototypes

int main(){
    void f(void);
    while(FOREVER)
        f();
    return 0;
}

void f(void){
    static int cnt = 0;
    printf("cnt = %d\n", ++cnt);
    if(cnt==STOP)
        exit(0);
}

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
#define NCALLS 100000000 // number of fct calls
#define NCOLS 8 // number of collumns
#define NLINES 3 // number of lines


//Typedefs

//Prototype Functions

//MAIN
int main(){
    for (int i=1; i<=3;i++){
        switch(i){
            case 1:
                printf("1 - Statement 1 Executed\n");
                break;
            case 2:
                printf("1 - Statement 2 Executed\n");
                break;
            case 3:
                printf("1 - Statement 3 Executed\n");
                break;
            default:
                printf("1 - This Should not have been Executed\n");
        }
    }
}

//Helper-Functions
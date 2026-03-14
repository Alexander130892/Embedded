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
    int b4,b3,b2,b1;
    int cnt=0;
    int output;
    printf("\n%5s%5s%5s%5s%5s%5s\n", "Cnt", "b1", "b2", "b3", "b4", "fct1");
    for(b1=0;b1<=1;b1++){
        for(b2=0;b2<=1;b2++){
            for(b3=0;b3<=1;b3++){
                for(b4=0;b4<=1;b4++){
                    printf("%5d%5d%5d%5d%5d%5d\n", cnt++, b1, b2, b3, b4, b1 || b2 || b3 || b4);
                }
            }
        }
    }   
    putchar('\n');
    cnt=0;
    printf("\n%5s%5s%5s%5s%5s%5s\n", "Cnt", "b1", "b2", "b3", "b4", "fct2");
    for(b1=0;b1<=1;b1++){
        for(b2=0;b2<=1;b2++){
            for(b3=0;b3<=1;b3++){
                for(b4=0;b4<=1;b4++){
                    printf("%5d%5d%5d%5d%5d%5d\n", cnt++, b1, b2, b3, b4, b1 && b2 && b3 && b4);
                }
            }
        }
    } 

    cnt=0;
    printf("\n%5s%5s%5s%5s%5s%5s\n", "Cnt", "b1", "b2", "b3", "b4", "fct3");
    for(b1=0;b1<=1;b1++){
        for(b2=0;b2<=1;b2++){
            for(b3=0;b3<=1;b3++){
                for(b4=0;b4<=1;b4++){
                    printf("%5d%5d%5d%5d%5d%5d\n", cnt++, b1, b2, b3, b4, !(!b1 || b2) && (!b3 || b4));
                }
            }
        }
    } 
}

//Helper-Functions
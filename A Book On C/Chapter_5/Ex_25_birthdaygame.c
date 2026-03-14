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
#define COUNT 1000000.0

//Typedefs

//Prototypes


int main() {
    srand(time(NULL));
    int hit=0;
    for(int n=2;n<21;n++){
        hit=0;
        for (int i=0;i<COUNT;i++){
            int months[12]={0};
            for(int p=0;p<n;p++){
                months[rand()%12]++;
            }
            for(int k=0; k<12;k++){
                if(months[k]>1){
                    hit++;
                    break;
                } 
            }
            
        }
    printf("Average Succesrate for %d persons: %.2lf%% \n", n, (double)hit/COUNT*100);   
}
    return 0;
}
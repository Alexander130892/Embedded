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
    int blank_cnt=0, digit_cnt =0, lower_cnt=0, upper_cnt=0, nl_cnt=0, other_cnt=0;
    int c;
    while((c=getchar())!=EOF){
        if(c==' '){
            blank_cnt++;
        }else if(c>='0' && c<='9'){
            digit_cnt++;
        }else if(c>='a' && c<='z'){
            lower_cnt++;
        }else if(c>='A' && c<='Z'){
            upper_cnt++;
        }else if(c=='\n'){
            nl_cnt++;
        }else
            other_cnt++;
    }
    printf("%10s%10s%10s%10s%10s%10s%10s\n", 
        "blanks", "digits", "lowercase", "uppercase", "newline", "others", "total" );
    printf("%10d%10d%10d%10d%10d%10d%10d\n", 
        blank_cnt, digit_cnt, lower_cnt, upper_cnt, nl_cnt, other_cnt, 
        blank_cnt+digit_cnt+lower_cnt+upper_cnt+nl_cnt+other_cnt);
}

//Helper-Functionsd
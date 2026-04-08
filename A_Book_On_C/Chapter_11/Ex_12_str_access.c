/*
 * File:    Ex_12_str_access.c
 * Author:  Alexander130892
 * Date:    8-4-2026
 *
 * Description:
 *   This file demonstrates the difference between string scanning with
 *   a fixed pointer versus an incrementing pointer by writing
 *   characters to two files: "tmp1" receives the same first character
 *   'a' three times, while "tmp2" receives each character 'a', 'b',
 *   'c' sequentially.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>



int main(void)
{   
    char c, s[]="abc", *p = s;
    int i;
    FILE* ofp1, *ofp2;

    ofp1=fopen("tmp1", "w");
    ofp2=fopen("tmp2", "w");
    for(i=0;i<3;i++){
        sscanf(s, "%c", &c);
        fprintf(ofp1, "%c", c);
    }
    for(i=0;i<3;i++){
        sscanf(p++, "%c", &c);
        fprintf(ofp2, "%c", c);
    }
    return 0;
}


/*
 * File:    pipe_limit.c
 * Author:  Alexander Vindelinckx
 * Date:    14-4-2026
 *
 * Description:
 *   Finds the pipe buffer capacity by writing one byte at a
 *   time in non-blocking mode until EAGAIN, then reporting
 *   the total bytes written.
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <math.h>

double trace(double **, int);

int main(void)
{
    
    int * p_automobiles = calloc(10, sizeof(int));
    p_automobiles -= 1989;
    for(int i=1989 ; i< 1999; i++){
        p_automobiles[i] = 2*i;
    }
    for(int i=1989 ; i< 1999; i++){
        printf("Cars sold in %d:\t%d\n", i, p_automobiles[i]);
    }
    free(p_automobiles+1989);
    return 0;
}


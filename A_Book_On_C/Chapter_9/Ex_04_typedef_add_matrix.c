/*
 * File:    Ex_01_pow_xn.c
 * Author:  Alexander130892
 * Date:    25-3-2026
 *
 * Description:
 *   This file implements a custom power function that calculates x
 *   raised to the power of n using iterative multiplication, and
 *   demonstrates it by computing 3.5^7.
 */
 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <limits.h>

//Consts
#define ROWS 5 //rows
#define COLLUMNS 5 // collumns

typedef int matrix[ROWS][COLLUMNS];

//Typedefs
//typedef char* string;

void print_matrix( matrix matr)
{
    for(int row = 0 ; row < ROWS ; row++ )
    {
        for(int col = 0 ; col < COLLUMNS ; col++)
        {
            printf("%d ", matr[row][col]);
        }
        putchar('\n');
    }
}

void add_matrix(matrix a, matrix b, matrix c)
{
    for(int row = 0 ; row < ROWS ; row++ )
    {
        for(int col = 0 ; col < COLLUMNS ; col++)
        {
            c[row][col]=a[row][col]+b[row][col];
        }
    }
    return;
}

int main(){
    matrix a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    matrix b = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    matrix c={0};
    add_matrix(a,b,c);
    print_matrix(c);
    
    return EXIT_SUCCESS;
}

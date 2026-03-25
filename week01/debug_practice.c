/*
 * File:    debug_practice.c
 * Author:  Alexander130892
 * Date:    25-3-2026
 *
 * Description:
 *   This file is a simple C program designed for debugging practice
 *   that demonstrates basic arithmetic operations and control flow by
 *   adding two numbers and printing doubled values in a loop.
 */

#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int main(void) {
    int x = 10;
    int y = 20;
    int sum = add(x, y);
    printf("Sum: %d\n", sum);

    for (int i = 0; i < 3; i++) {
        int doubled = i * 2;
        printf("i=%d, doubled=%d\n", i, doubled);
    }

    return 0;
}
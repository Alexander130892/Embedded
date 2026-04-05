/*
 * File:    Ex_28_double_ended_queue.c
 * Author:  Alexander130892
 * Date:    31-3-2026
 *
 * Description:
 *   This file implements a double-ended queue (deque) data structure
 *   using a fixed-size array, allowing insertion and removal of
 *   elements from both the front and rear ends. The implementation
 *   uses a bidirectional approach starting from the middle of the
 *   array, expanding towards both ends, and includes comprehensive
 *   test cases demonstrating all operations including overflow and
 *   underflow conditions.
 */
 //Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <limits.h>


//Consts
struct wife;
    struct husband
    {
        int         age;
        char        name[10];
        struct wife* spouse;
    } a;
    struct wife
    {
        int         age;
        char        name[10];
        struct husband* spouse;
    } b;

int main() {
    
    struct husband h = {35, "Jan"};
    struct wife    w = {32, "An"};
    h.spouse = &w;
    w.spouse = &h;

    printf("%s is married to %s\n", h.name, h.spouse->name);
    return EXIT_SUCCESS;
}

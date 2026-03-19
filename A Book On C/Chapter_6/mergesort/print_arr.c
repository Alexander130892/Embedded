#include "mergesort.h"

void print_arr(int* arr, int size){
    putchar('[');
    for (int i=0;i<size;i++){
        printf("%3d%s", arr[i],((i<size-1)?" ":"]\n"));
    }
}
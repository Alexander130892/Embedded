#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fork(void);
    int value;

    value = fork(); // New Process
    value = fork(); // New Process
    value = fork(); // New Processs
    printf("In main value = %d\n", value);
    return EXIT_SUCCESS;
}
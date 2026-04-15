// Compute Fibonacci numbers and print time asynchronously

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <unistd.h>
int fork(void);

int main(void)
{
    if(fork() == 0){
        execl("pgm2", "pgm2", "1", "2", "3", "go", 0);
    }
    else{
        execl("pgm3", "pgm3", 0);
    }
    return EXIT_SUCCESS;
}

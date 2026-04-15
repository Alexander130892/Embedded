// Compute Fibonacci numbers and print time asynchronously

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

#define  N 13
int fork(void);

int32_t main(void)
{
    for(int i=1;i<=N; i++){
        int pid = fork();
        if(pid == 0){
            printf("%2d: Hello from child\n", i);
        }else if (pid > 0){
            printf("%2d: Hello from parent\n", i);
        }else{
            printf("%2d: ERROR - Fork did not occur ERRORERRORERRORERRORERRORERROR\n", i);
        }
    }
    return EXIT_SUCCESS;
}

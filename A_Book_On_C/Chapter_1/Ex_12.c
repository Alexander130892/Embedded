#include <stdio.h>
#include <stdlib.h>

#define LIMIT 10

int main(void){
    printf(":::::\tA TABLE OF POWERS\t:::::\n");
    printf("%s%15s%15s%15s%15s","Integer", "Square", "3rd Power", "4th Power", "5th Power");
    printf("\n%s%15s%15s%15s%15s","-------", "------", "---------", "---------", "---------");
    for(int i=1; i<= LIMIT; i++){
        printf("\n%7d%15d%15d%15d%15d",i, i*i, i*i*i, i*i*i*i, i*i*i*i*i);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
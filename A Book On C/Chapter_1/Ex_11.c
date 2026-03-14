#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[20];
    int age;
    printf("Give me your name: ");
    scanf("%s", name);
    printf("\nand age: ");
    scanf("%d", &age);
    printf("\nHello %s, next year you will be %d\n", name, age+1);
    return EXIT_SUCCESS;
}
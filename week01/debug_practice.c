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
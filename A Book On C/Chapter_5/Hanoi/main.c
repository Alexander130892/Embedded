#include "hanoi.h"

long cnt = 0;

int main(void){
    int n;
    n = get_n_from_user();
    assert(n>0);
    move(n,'A', 'B', 'C'); //move n disks from tower A to C, through tower B

    printf("%.2lf billion years are needed to move 64 disks, one disk per day", (double)cnt/1e9);
    return EXIT_SUCCESS;
}
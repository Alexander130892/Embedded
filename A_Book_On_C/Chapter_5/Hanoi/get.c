#include "hanoi.h"

int get_n_from_user(){
    int n;
    printf("%s", "TOWERS OF HANOI:\n"
        "There are 3 towers: A, B, C\n"
        "n disks need to be moved from tower A to C\n"
        "Input n: ");
    if(scanf("%d",&n) !=1 || n<0){
        printf("ERROR: n needs to be positive!\n");
        exit(EXIT_FAILURE);
    }
    printf("\n");
    return n;
}
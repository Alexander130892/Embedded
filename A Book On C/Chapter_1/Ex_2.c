#include <stdio.h>
#include <stdlib.h>

int main(){

   int cnt;
   cnt=printf("abc\0abc\0");
   printf("Number of successful conversions: %d\n", cnt);
   
}
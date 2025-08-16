/*WAP to print a 4*5 matrix of star element(*) with the help of Nested loop  .*/
#include<stdio.h>
int main() {
    int i,j;
    for(i=0; i<4; i++) {
    for(j=0; j<5; j++) {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}
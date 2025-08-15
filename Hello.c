/*WAP to to check the given number is natural number or not (natural number start from 1) .*/
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>=1) {
        printf("\n%d is a natural number",n);
    }
    else {
        printf("\n%d is not a natural number",n);
    }
    return 0;
}
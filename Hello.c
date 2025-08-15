/*WAP to to check the given number is armstrong or not .*/
#include<stdio.h>
int main() {
    int n,r,temp,sum=0,cube;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    for(int i = 0; n != 0; i++){
        r = n%10;
        cube = r*r*r;
        sum = sum+cube;
        n = n/10;
    }

    if(sum==temp) {
        printf("\n%d is an armstrong number",temp);
    }
    else {
        printf("\n%d is not an armstrong number",temp);
    }
    return 0;
}
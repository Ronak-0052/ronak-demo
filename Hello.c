/*WAP to check if given character is digit or not.*/
#include<stdio.h>
int main() {
    int n;
    printf("Enter a character ");
    scanf("%d",&n);
    if(n>=0 && n<=9){
        printf("the character is a digit ");
    }
    else{
        printf("the character is not a digit");
    }
    return 0;
}
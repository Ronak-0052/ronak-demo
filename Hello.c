/*WAP to print the smallest number of two.*/
#include<stdio.h>
int main() {
    int n1,n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("\nEnter second number : ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("\n%d is the smallest",n2);
    }
    else if(n1<n2) {
        printf("\n%d is the smallest",n1);
    }
    else{
        printf("\n%d is equal to %d",n1,n2);
    }
    
    return 0;
}
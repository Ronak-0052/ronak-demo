/*WAP to print the average of 3 numbers*/
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter first numbers: \n");
    scan("%d",&a);
    printf("Enter second numbers: \n");
    scan("%d",&b);
    printf("Enter third numbers: \n");
    scan("%d",&c);
    printf("Average of %d,%d,%d is =  %d",a,b,c,(a+b+c)/3);
    return 0;
}
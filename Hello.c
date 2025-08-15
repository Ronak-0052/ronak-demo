/*write a program to calculate perimeter of rectangle. take side, a and b, form the user.*/
#include<stdio.h>
int main() {
    int a,b,perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%d", &a);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%d", &b);    
    perimeter = 2*(a+b);
    printf("\nThe perimeter of the rectangle is: %d", perimeter);
    return 0;
}
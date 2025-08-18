/*WAP in C to find Maximum number between two numbers using a pointer.*/

#include <stdio.h>

int main()
{
    float num1, num2;
    float *ptr1, *ptr2;

    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2)
    {
        printf("%f is greater than %f", *ptr1, *ptr2);
    }
    else if (*ptr1 < *ptr2)
    {
        printf("%f is greater than %f", *ptr2, *ptr1);
    }
    else
    {
        printf("%f is equal to %f", *ptr1, *ptr2);
    }

    return 0;
}
/*Write a function to find square root of a number*/

#include <stdio.h>

int squareRoot(int number)
{

    for (int i = 1; i <= number; i++)
    {
        if (i * i == number)
        {
            return i;
        }

        else if (i * i > number)
        {
            return i - 1;
        }
    }

    return -1;
}

int main() {
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int result = squareRoot(number);
    if (result == -1)
    {
        printf("Square root not found!\n");
    }
    else
    {
        printf("The Square root of %d is : %d", number, result);
    }
}

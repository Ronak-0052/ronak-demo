/*Make your own pow function*/

#include<stdio.h>

long long ipow(int baseValue, int degree)
{
    if (degree == 0)
    {
        return 1;
    }
    else if (degree > 0)
    {
        long long result = 1;
        for(int i=0; i < degree; i++)
        {
            result *= baseValue;
        }

        return result;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int baseValue, degree;
    printf("Enter the Number : \n");
    scanf("%d", &baseValue);
    printf("Enter the Power : \n");
    scanf("%d", &degree);

    long long answer = ipow(baseValue, degree);

    if (answer == -1)
    {
        printf("The power is in negative");
    }
    else
    {
        printf("The Answer is : %lld", answer);
    }

    return 0;
}
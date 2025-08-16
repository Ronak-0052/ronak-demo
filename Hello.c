/*WAP to print prime number in range.*/
#include<stdio.h>
int main() {
    int lim, i, n, prime;
    printf("Enter a number (till which you want filter the prime number): ");
    scanf("%d", &lim);
    printf("The range of prime number till %d is : ", lim);
    for (i = 2; i <= lim; i++)
    {
        prime = 1;
        for (n = 2; n <= i / 2; n++)
        {
            if (i % n == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("\n%d", i);
        }
    }

    return 0;
}
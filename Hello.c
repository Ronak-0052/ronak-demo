/*WAP to print to check if a number is prime or not.*/
#include<stdio.h>
int main() {
    int n, i,prime=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        prime=0;
    }
    else{
        for (i=2; i <= n/2; i++) {
            if (n%i ==0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
    {
        printf("The %d is a prime number", n);
    }
    else
    {
        printf("The %d is not a prime number", n);
    }

    return 0;
}
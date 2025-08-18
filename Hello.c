/*Write a function to  find sum of digit of a number*/

#include <stdio.h>
#include <string.h>

// function to calculate sum of digits from a string
int sumOfDigits(char number[]) {
    int sum = 0;

    for (int i = 0; i < strlen(number); i++) {
        if (number[i] >= '0' && number[i] <= '9') {  // check if it's a digit
            sum += number[i] - '0';  // convert char to int
        }
    }

    return sum;
}

int main() {
    char number[100];   // can store up to 99 digits
    printf("Enter a number: ");
    scanf("%s", number);

    int result = sumOfDigits(number);

    printf("The Sum of Digits of %s is: %d\n", number, result);

    return 0;
}

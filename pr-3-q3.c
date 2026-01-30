#include<stdio.h>

int main()
{
    int num, firstDigit, lastDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }

    printf("The sum of the first and the last digit: %d", firstDigit + lastDigit);

    return 0;
}
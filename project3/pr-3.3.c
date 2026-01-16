#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) {
        num = num / 10;
    }

    firstDigit = num;

    printf("Sum of first and last digit = %d", firstDigit + lastDigit);

    return 0;
}

//output
//
//Enter any number: 384
//Sum of first and last digit = 7
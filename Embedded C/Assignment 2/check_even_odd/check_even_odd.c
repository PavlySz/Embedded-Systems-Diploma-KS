/*
* Given a number, check if it is even or odd
* Author: Pavly Salah
*/

#include <stdio.h>

void main() {
    int num1;

    printf("Enter a number: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
        printf("%d is even\n", num1);
    else
        printf("%d is odd\n", num1);
}
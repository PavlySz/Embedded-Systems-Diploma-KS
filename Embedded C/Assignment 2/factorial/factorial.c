/*
* Given a number, print its factorial
* Author: Pavly Salah
*/

#include <stdio.h>
#include <stdlib.h>

// fuction to calculate the factorial of a number
int factorial(int num) {
    if (num < 0) {
        // if the number is negative, display an error message
        fprintf(stderr, "ERROR: Number must be positive\n");
        exit(1);
    } else if (num == 0 || num == 1) {
        // if the number = 0 or 1, return 1
        return 1;
    } else {
        // use recursion to calculate the factorial (n*n-1*n-2*..*1)
        return num * factorial(num-1);
    }
}

void main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("%d! = %d\n", num, fact);
}
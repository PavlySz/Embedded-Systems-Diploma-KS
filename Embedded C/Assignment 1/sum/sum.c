/*
* Sum two numbers entered by the user
* Author: Pavly Salah
*/

#include<stdio.h>

// function to calculate the sum of two numbers
int sum_fun(int num1, int num2){
    return num1+num2;
}

void main(){
    int num1, num2, sum;    // define variables

    // ask user to enter two numbers
    printf("Enter two numbers: ");

    // store numbers in respective variables
    scanf("%d", &num1);
    scanf("%d", &num2);

    // calculate sum using sum_fun function
    sum = sum_fun(num1, num2);

    // print the sum
    printf("%d + %d = %d\n", num1, num2, sum);
}
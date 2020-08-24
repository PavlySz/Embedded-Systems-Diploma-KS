/*
* Given two numbers (entered by user)
* Swap them ithout using temp variable
* Author: Pavly Salah
*/

#include<stdio.h>

void main(){
    int num1, num2;

    printf("Enter two numbers: ");

    scanf("%d%d", &num1, &num2);
    printf("Before swap:\ta = %d\tb = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swap:\ta = %d\tb = %d\n", num1, num2);
}
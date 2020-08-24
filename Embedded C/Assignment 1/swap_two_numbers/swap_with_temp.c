/*
* Given two numbers (entered by user)
* Swap them
* Author: Pavly Salah
*/

#include<stdio.h>

void main(){
    int num1, num2, temp;

    printf("Enter two numbers: ");

    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Before swap:\ta = %d\tb = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap:\ta = %d\tb = %d\n", num1, num2);
}
/*
* Given a character(entered by user)
* Print the ASCII code of that character
* Author: Pavly Salah
*/

#include<stdio.h>

void main(){
    char c;
    printf("Enter a charcater: ");
    scanf("%c", &c);
    printf("ASCII code of %c is: %d\n", c, c);
}
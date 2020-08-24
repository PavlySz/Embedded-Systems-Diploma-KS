/*
* Calculator using switch-case
* Author: Pavly Salah
*/
#include <stdio.h>

int main(void)
{       
    float num1, num2, result;
    char op;
    
    printf("Enter an expression: ");
    scanf("%f%c%f", &num1, &op, &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;              
    }
    
    printf("%f %c %f = %f\n", num1, op, num2, result);
    
    return 0; 
}

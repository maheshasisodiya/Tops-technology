//Write a program to make Simple calculator (to make addition, subtraction ,multiplication, division and modulo)

#include <stdio.h>
int main()
{
    int number1, number2, addition, subtraction, multiply;
    float modulo;

    printf("Enter Number 1\n");
    scanf("%d", &number1);
    printf("Enter Number 2\n");
    scanf("%d", &number2);
    addition = number1 + number2 ;
    subtraction = number1 - number2;
    multiply = number1 * number2;
    modulo   = number1 / (float)number2;   
    printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",multiply);
    printf("modulo = %.2f\n",modulo);

    return 0;
}

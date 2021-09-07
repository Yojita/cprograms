/* Write a program to find the division of two numbers without using '/' operator */

#include <stdio.h>
int main()
{
    int dividend, divisor, quotient;

    printf("Enter the dividend and quotient : ");
    scanf("%d %d", &dividend, &divisor);

    printf("Quotient %d and %d is : ", dividend, divisor);

    quotient = 0;
    while(dividend >= divisor)
    {
        dividend = dividend - divisor;
        quotient++;
    }
    printf("%d\n", quotient);

    return 0;
}
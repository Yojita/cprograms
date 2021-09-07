/* Write a program to find modulus of two integers without using '%' operator */

#include <stdio.h>
int main()
{
    int dividend, divisor, modulus;

    printf("Enter dividend and divisor : ");
    scanf("%d %d", &dividend, &divisor);

    printf("modulus of %d and %d is : ", dividend, divisor);

    
    while(dividend >= divisor)
    {
        dividend = dividend - divisor;  
    }
    modulus = dividend;
    printf("%d\n", modulus);

    return 0;
}
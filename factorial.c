/* Write a program to calculate and print factorial of a given number */

#include <stdio.h>
int main()
{
    int factorial, num, i;
    printf("enter the number whose factorial to be calculated : ");
    scanf("%d", &num);
        factorial = 1;
        for(i = 1; i <= num; i++)
        {
            
            factorial = factorial * i;
        }
    printf("%d\n", factorial);
    return 0;
}
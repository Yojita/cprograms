/* Write a program to calculate and print sum of digits at odd places of a given number */

#include <stdio.h>
int main()
{
    int remainder, num, oddSum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Sum of digits at odd place is : ");

    while(num > 0)
    {
        remainder = num % 10;
        num = num / 10;

        if(remainder % 2 != 0)
        oddSum = oddSum + remainder;
    }
    printf("%d\n", oddSum);

    return 0;
}
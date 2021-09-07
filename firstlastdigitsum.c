/* Write a program to find sum of first and last digit of a given number */

#include <stdio.h>
int main()
{
    int num,sum, first_digit, last_digit;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Sum of first and last sigit of a given number %d is : ", num);

    last_digit = num % 10;

    first_digit = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;

    sum = first_digit + last_digit;
    printf("%d\n", sum);
    return 0;
}
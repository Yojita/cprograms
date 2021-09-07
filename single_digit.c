/* Write a program to accept a number from user and reduce it to single digit */

#include <stdio.h>
int main()
{
    int num, remainder, single_digit;

    printf("Enter the number :");
    scanf("%d", &num);

    printf("The reduced form of given number %d is : ", num);

    single_digit = 0;
    while(num != 0)
    {
        remainder = num % 10;
        num = num / 10;
        single_digit = single_digit + remainder;
    }
    printf("%d\n", single_digit);

    return 0;
}
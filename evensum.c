/* Write a program to accept a number from user and calculate sum of even digits of a given numbers */

#include <stdio.h>
int main()
{
    int num, remainder, sum;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The sum of even digits of the given number %d is : ", num);

    sum = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;

        if ((remainder % 2) == 0)
            sum = sum + remainder;
    }
    printf("%d\n", sum);
    return 0;
}
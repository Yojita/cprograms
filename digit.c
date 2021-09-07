/* Write a program to find the sum of digits of a given number till it reduces to single digit */

#include <stdio.h>
int main()
{
    int num, remainder, singleDigit;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The reduced form of given digit %d is : ", num);

    while(num > 9)
    {
        singleDigit = 0;
        while(num != 0)
        {
            remainder = num % 10;
            num = num / 10;
            singleDigit = singleDigit + remainder;
        }
        num = singleDigit;
    }
    printf("%d\n", singleDigit);
    return 0;

}
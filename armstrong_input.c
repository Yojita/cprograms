/* Write a C program to check wheather given input number is a armstrong number or not */

#include <stdio.h>
int main()
{
    int i, num, result, sum;
    printf("Enter the number: ");
    scanf("%d", &i);
    num = i;
    sum = 0;
    while(num != 0)
    {
        result = num % 10;
        sum = sum + (result * result * result);
        num = num / 10;
    }
    if(sum == i)
    printf("%d is a Armstrong number\n", i);
    else
    printf("%d is not a Armstrong number\n", i);
    return 0;
}
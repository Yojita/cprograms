/* Write a program to accept input in binary format and find its decimal equivalent */

#include <stdio.h>
int main()
{
    int num, remainder, decimalNum, base;

    printf("Enter the binary number : ");
    scanf("%d", &num);

    printf("Decimal form of given number is : ");

    base = 1;
    decimalNum = 0;

    while(num != 0)
    {
        remainder = num % 10;
        decimalNum = decimalNum + remainder * base;
        num = num / 10; 
        base = base * 2;
    }
    printf("%d\n", decimalNum);

    return 0;
}
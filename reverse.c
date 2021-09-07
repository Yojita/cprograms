/* Write a program to calculate and print reverse of a given number */

#include <stdio.h>
int main()
{
     int num, rev_num, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Reverse of the number %d is ", num);

    rev_num = 0;

    while(num != 0)
    {
        remainder = num % 10;
        num = num / 10;
        rev_num = rev_num * 10 + remainder;
    }
    
    printf("%d\n", rev_num);

    return 0;
}
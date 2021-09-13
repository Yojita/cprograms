/* Write a program to accept a number from user and find out the largest digit value of the number */

#include <stdio.h> 
int main()
{
    int num, rem, largestNum;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The largest number among the given numbers is : ");

    rem = 0;
    largestNum = 0;
    while (num > 0)
    {
        rem = num % 10;

        if (rem > largestNum)
        {
        largestNum = rem;
        }
        num = num / 10;
    }
    printf("%d\n", largestNum);
return 0;
}
/* Write a program to print perfect numbers between 1 to 1000 */

#include <stdio.h>
int main()
{
   int num, i, sum, result;
    printf("perfect numbers between 1 to 1000 are : \n");

    for(num = 1; num <= 1000; num++)
    {   sum = 0;
        for(i = 1; i <= num/2; i++)
        {
                if(num % i == 0)
                {
                result = i;
                sum = sum + result;
                }
        }
        if(sum == num)
        printf("%d \n", num);
    }
    return 0;
}
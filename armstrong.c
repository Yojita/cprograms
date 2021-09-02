/* Write a C program to print Armstrong numbers between 1 to 1000 */

#include <stdio.h>
int main()
{
    int num, result, sum, i;
    printf("Armstrong numbers between 1 to 1000 are : \n");
    
    for(i = 1; i <= 1000; i++)
    {
        num = i;
        sum = 0;
        while(num != 0)
        {
            result = num % 10;
            sum = sum + ( result * result * result);
            num = num / 10;
        }
        if(sum == i)
        printf("%d\n", i);
    }
    return 0;
}
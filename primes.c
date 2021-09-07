/* Write a program to print prime numbers between 1 to 1000 */

#include <stdio.h>
int main()
{
    int num, i, is_prime;

    printf("Prime numbers between 1 to 1000 are :  \n");

    for(num = 2; num <= 1000; num++)
    {
        is_prime = 1;

        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime)
        {
        printf("%d\t", num);
        }
    }
    return 0;
}
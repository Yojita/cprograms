/* Write a program to find Fibonacci series up to given number */

#include <stdio.h>
int main()
{
    int i, n1 = 0, n2 = 1,n3, num;

    printf("enter the number whose fabionacci number to be found : ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)   // i starts from 2 as value of 0 and 1 is already given
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }
     return 0;
}
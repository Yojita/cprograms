/* Write a program to print Palindrome numbers between 1 to 200 */

#include <stdio.h>
int main()
{
    int num, remainder, palindromeNum, temp;

    printf("Palindrome numbers between 1 to 200 are : ");

    for(num = 1; num <= 200; num++)
    {
       temp = num;
       palindromeNum = 0;
       while(temp > 0)
       {
           remainder = temp % 10;
           temp = temp / 10;
           palindromeNum = palindromeNum * 10 + remainder;
       }
       if(num == palindromeNum)
       printf("%d ", num);
    }
    return 0;
}
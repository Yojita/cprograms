/* Write a program to print AaBbCcDd..............Zz */

#include <stdio.h>
int main()
{
    int ch;

    for(ch = 65; ch <= 90; ch++)
    {

        printf("%c%c", ch, ch + 32);
    }
    printf("\n");
    return 0;
}
/* Write a program to print A b C d E f G h I............Y z */

#include <stdio.h>

int main()
{
    for( int ch = 65; ch <= 90; ch++)
    {
         printf("%c ", (ch % 2 != 0) ? ch : ch + 32);
    }
    printf("\n");
    return 0;
}

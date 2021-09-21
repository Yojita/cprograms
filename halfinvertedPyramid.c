/* Write a program to print inverted half pyramid pattern usng stars */

#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter number of lines : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = rows; j >= i; j--)
        {
            printf("* ");
        }
        printf(" ");
        printf("\n");
    }
    return 0;
}
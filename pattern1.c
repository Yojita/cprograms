/* write a program to print half pyramid pattern using stars from right to left */

#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows; j++)
        {
            if((i + j) <= rows)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
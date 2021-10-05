/* Write a program to print half pyramid pattern printing using numbers */

#include <stdio.h>
int main()
{
    int i, j, rows, columns;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
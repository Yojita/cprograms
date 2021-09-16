/* Write a program to print star pattern hollow rectangle */

#include <stdio.h>
int main()
{
    int num, rows, columns, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    for(i = 0; i <= rows; i++)
    {
        for(j = 0; j <= columns; j++)
        {
            if(i == 0 || i == rows || j == 0 || j == columns)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
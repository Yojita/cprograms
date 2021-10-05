/* Write a program to print following pattern 
11234
22345
33456
44567
55678  */

#include <stdio.h>
int main()
{
    int rows;

    printf("Enter the size of matrix : ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        printf("%d  ", i);
        
        for(int j = i; j < (rows + i) - 1; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
    return 0;
}
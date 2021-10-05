/* Write a program to print following pattern 

12345
23456
34567
45678
56789 

*/

#include <stdio.h>
int main()
{
    int rows;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    
    for(int i = 1; i <= rows; i++)
    {
        for(int j = i; j < rows + i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
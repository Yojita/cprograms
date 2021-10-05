/* Write a program to print following pattern 
1234567
 234567
  34567
   4567
    567
     67
      7  */

#include <stdio.h>
int main()
{
    int i, j, rows, space;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);


    for(i = 1; i <= rows; i++)
    {
        for(space = 1; space < i; space++)
        {
            printf(" ");
        }
        for(j = i; j <= rows; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
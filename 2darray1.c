/* 2D array : Storing elements in a matrix and printing it */

#include <stdio.h>
void main()
{
    int arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter arr [%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nprinting the elements");
    for(int i = 0; i < 3; i++)
    {
        printf("\n");
        for(int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n");
}
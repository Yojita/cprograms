/* Two - dimensional array example in C */

#include <stdio.h>
int main()
{
    int arr[4][3] = {{1,2,3}, {2,3,4}, {3,4,5}, {4,5,6}};
    
    //Traversing of an arrray
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("arr [%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}
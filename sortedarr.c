/*Using bubble sort method to sort the array in the ascending order */

#include <stdio.h>
void main()
{
    int temp;
    int arr[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Printing sorted elements list \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}
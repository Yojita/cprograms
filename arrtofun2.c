/* Write a code to pass an array to the function and find the minimum number  */

#include <stdio.h>
int minarray(int arr[], int size)
{
    int min;
    for(int i = 0; i < size; i++)
    {
        if( min > arr[i])
        {
         min = arr[i];
        }
    }
    return min;
}
int main()
{
    int min = 0, i = 0;
    int numbers []= {4, 5, 7, 3, 8, 9};
    min = minarray(numbers, 6);
    printf("minimum number is : %d\n", min);
    return 0;
}
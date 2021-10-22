/* Program to print largest and second largest element of an array */

#include <stdio.h>
void main()
{
    int arr[100], largest, sec_largest, n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    printf("Enter the elements of an array : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    sec_largest = arr[1];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] != largest)
        {
            sec_largest = arr[i];
        }
    }
    printf("Largest = %d\nSecond largest = %d\n", largest, sec_largest);
}
/* Write a code to pass an array to a function */

#include <stdio.h>
void getarray(int arr[])
{
    printf("Elements of an array are : \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[5] = {45, 67, 34, 78, 90};
    getarray(arr);
    return 0;
}
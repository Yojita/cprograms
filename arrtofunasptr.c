/* Write a code to pass an array to function as a pointer */

#include <stdio.h>
void printarray(char * arr)
{
    printf("Elements of an array are : \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%c\t", arr[i]);
    }
}
int main()
{
    char arr[5] = {'a', 'e', 'i', 'o', 'u'};
    printarray(arr);
    return 0;
}
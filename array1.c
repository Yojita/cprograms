/* Declare and initialize an array */

#include <stdio.h> 
int main()
{
    // Declare and initialize an array 
    int marks[5] = {10, 20, 30, 40, 50};

    //traversal of an array
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}
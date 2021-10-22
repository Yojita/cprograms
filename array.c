/* Initialization of an array */

#include <stdio.h>
int main()
{
    int marks[5]; //declaration of an array
    marks[0] = 80; //Initialization of an array
    marks[1] = 70;
    marks[2] = 60;
    marks[3] = 50;
    marks[4] = 40;

    // Traversal of an array
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}

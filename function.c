/* Write a program to perform addition, subtraction, division, multiplicaton operations using functions */

#include <stdio.h>

// Function to take input from user

float input()
{
    float n; 
    scanf("%f", &n);
    return n;
}

// Function for displaying result

void display(float n1, char ch, float n2, float result)
{
    printf("%.2f %c %.2f = %.2f\n", n1, ch, n2, result);
}

// Function for addition of two numbers 

void add(float n1, float n2)
{
    float result;
    result = n1 + n2;
    display(n1,'+', n2, result);
}

// Function for subtraction of two numbers 

void subtract(float n1, float n2)
{
    float result;
    result = n1 - n2;
    display(n1, '-', n2, result);
}

// Function for division of two numbers 

void divide(float n1, float n2)
{
    float result;
    result = n1 / n2;
    display(n1, '/', n2, result);
}

// Function for multiplication of two numbers 

void multiply(float n1, float n2)
{
    float result;
    result = n1 * n2;
    display(n1, '*', n2, result);
}

// Main function

int main()
{
    char ch;
    int choice;
    float n1, n2;

// using do while loop

    do
    {
        printf("Enter the first number : \n");
        n1 = input();
        printf("Enter the second number : \n");
        n2 = input();

        printf("Which operation you want to perform\n");
        printf("1 : Addition\n");
        printf("2 : Subtraction\n");
        printf("3 : Division\n");
        printf("4 : Multiplication\n");

        printf("Please enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            add(n1, n2);
            break;

            case 2:
            subtract(n1, n2);
            break;

            case 3:
            divide(n1, n2);
            break;

            case 4:
            multiply(n1, n2);
            break;

            default:
            printf("Invalid Choice\n");
        }
        printf("Do you want to continue (y / n): ");
        scanf("%c", &ch);
        scanf("%c", &ch);

        printf("-----------------------------------\n");
    }
    while (ch == 'y');
    printf("\n Thank You!");
    return 0;
}

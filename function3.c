/* Write a program to find the sum of last two digit of a number */
#include <stdio.h>

// Function declaration

int input();
int lastdigit();
int secondLastDigit();
int add();

// Main function

int main()
{
    int num;

    printf("Enter the number to be calculated : ");
    num = input();

    int sum = add(num);
    printf("Addition of the given number %d is : %d\n", num, sum);
    return 0;
}

// Function to take input from user 

int input()
{
    int num;
    scanf("%d", &num);
    return num;
}

// Function to get the last digit 

int lastdigit(int num)
{
    return num % 10;
}

// Function to get second last digit 

int secondLastDigit(int num)
{
    return (num /10) % 10;
}

// Function to get addition of last and second last digit 

int add(int num)
{
    int result;
    result = lastdigit(num) + secondLastDigit(num);
    return result;
}
/* Write a program to convert temperature from celcius to fahrenheit */

#include <stdio.h>
int main()
{
    float temperature, fahrenheit, i;

    printf("Enter the temperature in celcius : ");
    scanf("%f", &temperature);

    printf("Temperature in Fahrenheit is : ");

    fahrenheit = temperature * (9.0 / 5.0) + 32.0;
    printf("%.1f\n", fahrenheit);

    return 0;
}
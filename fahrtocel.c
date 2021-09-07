/* Write a program to convert temperature from fahrenheit to celcius */

#include <stdio.h>
int main()
{
    float celcius, temperature, fahrenheit;

    printf("Enter the temperature in fahrenheit :");
    scanf("%f", &temperature);

    printf("Temperature in celcius is : ");

    celcius = (temperature - 32.0) * 5.0 / 9.0;
    printf("%.1f\n", celcius);

    return 0;
}
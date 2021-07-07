/* Creat C program which calculates your weekly pay */

#include <stdio.h>
#define PAYRATE 12.00
#define OVERTIMERATE 1.5 * PAYRATE
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25

int main() {
    int hours;
    double gross_pay;
    double basic_pay;
    double overtime_pay;
    double taxes;
    double net_pay;

    printf("Enter number of hours worked in a week :");
    scanf("%d", &hours);

    if(hours <= 40)
    gross_pay = hours * PAYRATE;
    else
    {
        basic_pay = (40 * PAYRATE);
        overtime_pay = (hours - 40) * (1.5 * PAYRATE);
        gross_pay = basic_pay + overtime_pay;  
    }
    printf("your gross pay of the week is : %.2f\n", gross_pay);


    // taxes calculation
    if (gross_pay <= 300)
    {
        taxes = gross_pay * TAXRATE_300;
    }
    else if (gross_pay > 300 && gross_pay <= 450)
    {
        taxes = 300 * TAXRATE_300 + ((gross_pay - 300) * TAXRATE_150);
    }
    else (gross_pay > 450);
    {
    taxes = 300 * TAXRATE_300 + 150 * TAXRATE_150 + ((gross_pay - 450) * TAXRATE_REST);
    }
    printf("your taxes of the week is : %.2f\n", taxes);


    // calculate net pay
    net_pay = gross_pay - taxes;
    printf("your net pay of the week is : %.2f\n", net_pay);

    return 0;
}

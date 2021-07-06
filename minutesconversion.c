/* Write a C program to convert number of minutes to days and years */

#include <stdio.h>
int main() {
    int minutes;
    double days;
    double years;
    double minutesinyear;
    double minutesinday;

    printf("enter the minutes to be converted : ");
    scanf("%d", &minutes); //prompt user to add minutes

    minutesinyear = 60.0 * 24.0 * 365.0;
    minutesinday = 60.0 * 24.0;
    
    days = (minutes / minutesinyear);
    years = (minutes / minutesinday);

    printf("%d minutes is equivalent to %f years and %f days\n", minutes, years, days);
    return 0;
}
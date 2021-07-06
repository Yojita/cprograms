/* display byte size of basic data type */

#include <stdio.h>
int main() {
    printf("Variables of data type int occupy %zd bytes\n", sizeof(int));
    printf("Variables of data type int occupy %zd bytes\n", sizeof(char));
    printf("Variables of data type int occupy %zd bytes\n", sizeof(long));
    printf("Variables of data type int occupy %zd bytes\n", sizeof(long long));
    printf("Variables of data type int occupy %zd bytes\n", sizeof(double));
    printf("Variables of data type int occupy %zd bytes\n", sizeof(long double));
    return 0;
}
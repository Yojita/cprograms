#include <stdio.h>  

enum company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};

int main() {
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;
    printf("value assigned to xerox is %d\n", xerox);
    printf("value assigned to xerox is %d\n", google);
    printf("value assigned to xerox is %d\n", ebay);
    return 0;
}
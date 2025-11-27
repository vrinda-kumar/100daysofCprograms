//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum R {SUCCESS, FAILURE, TIMEOUT};

int main() {
    char s[20];
    enum R r;

    scanf("%s", s);

    if(strcmp(s,"SUCCESS")==0) r=SUCCESS;
    else if(strcmp(s,"FAILURE")==0) r=FAILURE;
    else r=TIMEOUT;

    switch(r) {

        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}

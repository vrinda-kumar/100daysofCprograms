//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum R {ADMIN, USER, GUEST};

int main() {

    char s[20];

    scanf("%s", s);

    enum R x;

    if(s[0]=='A') x = ADMIN;
    else if(s[0]=='U') x = USER;
    else x = GUEST;

    switch(x) {

        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}

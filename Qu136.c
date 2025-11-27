//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum M {ADD, SUBTRACT, MULTIPLY};

int main() {

    char s[20];
    int a, b;

    scanf("%s %d %d", s, &a, &b);

    enum M x;

    if(s[0]=='A') x = ADD;
    else if(s[0]=='S') x = SUBTRACT;
    else x = MULTIPLY;

    switch(x) {

        case ADD:
            printf("%d", a+b);
            break;

        case SUBTRACT:
            printf("%d", a-b);
            break;

        case MULTIPLY:
            printf("%d", a*b);
            break;
    }

    return 0;
}

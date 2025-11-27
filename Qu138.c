//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum T {RED, YELLOW, GREEN};

int main() {

    enum T i;

    for(i = RED; i <= GREEN; i++) {

        if(i == RED) printf("RED=%d\n", i);

        if(i == YELLOW) printf("YELLOW=%d\n", i);

        if(i == GREEN) printf("GREEN=%d\n", i);
    }

    return 0;
}

//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum M {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    char s[10];
    enum M m;

    scanf("%s", s);

    if(strcmp(s,"JAN")==0) m=JAN;
    else if(strcmp(s,"FEB")==0) m=FEB;
    else if(strcmp(s,"MAR")==0) m=MAR;
    else if(strcmp(s,"APR")==0) m=APR;
    else if(strcmp(s,"MAY")==0) m=MAY;
    else if(strcmp(s,"JUN")==0) m=JUN;
    else if(strcmp(s,"JUL")==0) m=JUL;
    else if(strcmp(s,"AUG")==0) m=AUG;
    else if(strcmp(s,"SEP")==0) m=SEP;
    else if(strcmp(s,"OCT")==0) m=OCT;
    else if(strcmp(s,"NOV")==0) m=NOV;
    else m=DEC;

    switch(m) {
        case JAN: printf("31 days"); break;

        case FEB: printf("28 or 29 days"); break;

        case MAR: printf("31 days"); break;

        case APR: printf("30 days"); break;

        case MAY: printf("31 days"); break;

        case JUN: printf("30 days"); break;

        case JUL: printf("31 days"); break;

        case AUG: printf("31 days"); break;

        case SEP: printf("30 days"); break;

        case OCT: printf("31 days"); break;

        case NOV: printf("30 days"); break;

        case DEC: printf("31 days"); break;
    }

    return 0;
}

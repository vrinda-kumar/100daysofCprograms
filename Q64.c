//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main(){
    long long num;
    int digitcount[10] = {0};

    printf("Enter the integer number: ");
    scanf("%lld", &num);

    if(num<0){
        num = -num;
    }

    while(num>0){
        int digit = num%10;
        digitcount[digit]++;
        num/=10;
    }

    int maxdigit = 0;
    for(int i=0; i<10; i++){
        if(digitcount[i]> digitcount[maxdigit]){
            maxdigit = i;
        }
    }

    printf("Digit that occur max is %d", maxdigit);

    return 0;
}
//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<2){
        printf("No prime number less than 2.");
    }

    for(int i=2; i<=n; i++){
        int isprime = 1;
        for(int j=2; j*j <= i; j++){
            if(i%j != 0){
                isprime = 1;
            }
            else{
                isprime =0;
                break;
            }
        }
        if(isprime == 1){
            printf("%d ", i);
        }
        
    }
    return 0;
}
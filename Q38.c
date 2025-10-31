//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int number, originalNumber, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        remainder = number % 10; 
        sum += remainder;        
        number /= 10;            
    }

    printf("Sum of digits of %d is %d.\n", originalNumber, sum);

    return 0;
}
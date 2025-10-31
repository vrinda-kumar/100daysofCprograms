//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Division by zero not allowed\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error: Modulus by zero not allowed\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
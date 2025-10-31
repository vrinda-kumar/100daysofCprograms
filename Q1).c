//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h>
int main ()
{
int a=0,b=0;
printf("ENTER A AND B \n");
scanf("%d",&a);
scanf("%d",&b);

int sum=0;
sum= a+b;

printf("SUM = ");
printf("%d",sum);

return 0;
}
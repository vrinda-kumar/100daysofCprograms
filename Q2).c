//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main ()
{
int a=0,b=0;
printf("ENTER A AND B \n");
scanf("%d",&a);
scanf("%d",&b);

int sum=0,d=0,p=0,q=0;
sum= a+b;
d= a-b;
p= a*b;
q= a/b;
printf("SUM = ");
printf("%d",sum);

printf(" DIFF = ");
printf("%d",d);

printf(" PRODUCT = ");
printf("%d",p);

printf(" QUOTIENT = ");
printf("%d",q);

return 0;
}
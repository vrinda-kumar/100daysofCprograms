//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main ()
{

float f=0.0,c=0.0;
printf("ENTER TEMPERATURE \n");
scanf("%f",&c);

f= (c*9/5)+32;

printf(" TEMPERATURE IN FAHRENHEIT = ");
printf("%f",f);

return 0;
}
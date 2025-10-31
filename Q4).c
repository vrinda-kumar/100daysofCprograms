//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main ()
{
 float r=0.0 ;

 scanf("%f",&r);
 
 float  a=0.0,c=0.0;

 a= (22*r*r)/7;
 c= (2*22*r)/7;

 printf(" AREA = %f",a);
 printf(", CIRCUMFERENCE = %f",c);

 return 0; 
}
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main ()
{
 int l=0,b=0;

 scanf("%d",&l);
 scanf("%d",&b);
 int a=0,p=0;

 a= l*b ;
 p= 2* (l+b);

 printf(" AREA = %d",a);
 printf(", PERIMETER = %d",p);

 return 0; 
}
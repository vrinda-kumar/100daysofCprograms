//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main ()
{

int t=0 , h=0,m=0,s=0;
printf("ENTER TIME ");

scanf("%d",&t);
h= t/3600;
 int rs = t %3600 ;
 m= rs /60;
 s = rs %60; 

printf(" %d:%d:%d ",h,m,s);
return 0;
}
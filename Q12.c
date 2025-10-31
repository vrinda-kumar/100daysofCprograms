//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include<stdio.h>
int main ()
{

    int no=0;
    printf("ENTER THE NO ");
    scanf("%d",&no);

    if (no<0)
    {
        printf("Negative");
    }
    else if (no==0)
    {

       printf("ZERO"); 
    }
    else if (no>0)
    {
      printf("Positive");
    }
  return 0;
}
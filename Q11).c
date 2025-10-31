//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include<stdio.h>
int main ()
{

    int no=0;
    printf("ENTER THE NO ");
    scanf("%d",&no);

    if (no%2==0)
    {
        printf("\n %d no is even ",no);
    }
    else 
    {

       printf("\n %d no is odd",no); 
    }

  return 0;
}
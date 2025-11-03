//Q53: Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i*2-1;j++)
            printf("*");
        printf("\n");
    }
    
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i*2-1;j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}

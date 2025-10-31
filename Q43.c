//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int f(int n)
{
    if(n==0||n==1)
        return 1;
    return n*f(n-1);
}

int main()
{
    int n,t,s=0,d;
    scanf("%d",&n);
    t=n;
    
    while(t>0)
    {
        d=t%10;
        s+=f(d);
        t/=10;
    }
    
    if(s==n)
        printf("Strong number");
    else
        printf("Not strong number");
        
    return 0;
}

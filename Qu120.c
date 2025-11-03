//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i;
    
    printf("Enter a string: ");
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(i==0 || s[i-1]==' ')
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]=s[i]-32;
        }
        else
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]+32;
        }
    }
    
    printf("Sentence case: %s",s);
    
    return 0;
}

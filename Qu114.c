//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i, j, k, l, max = 0, f;
    
    printf("Enter a string: ");
    gets(s);
    
    l = strlen(s);
    
    for(i = 0; i < l; i++)
    {
        for(j = i; j < l; j++)
        {
            f = 0;
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    f = 1;
                    break;
                }
            }
            if(f)
                break;
        }
        
        if(j - i > max)
            max = j - i;
    }
    
    printf("Length of longest substring without repeating characters = %d\n", max);
    
    return 0;
}

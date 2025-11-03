//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200], t[200];
    int a[26] = {0}, b[26] = {0};
    int i, f = 1;
    
    printf("Enter first string: ");
    gets(s);
    
    printf("Enter second string: ");
    gets(t);
    
    if(strlen(s) != strlen(t))
    {
        printf("Not Anagram");
        return 0;
    }
    
    for(i = 0; s[i] != '\0'; i++)
        a[s[i] - 'a']++;
    
    for(i = 0; t[i] != '\0'; i++)
        b[t[i] - 'a']++;
    
    for(i = 0; i < 26; i++)
    {
        if(a[i] != b[i])
        {
            f = 0;
            break;
        }
    }
    

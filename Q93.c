//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str1[100];
    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);

    char str2[100];
    printf("Enter the string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1,"\n")] = 0;
    str2[strcspn(str2, "\n")]=0;

    for(int i=0; str1[i]; i++)
    str1[i] = tolower(str1[i]);

    for(int i=0; str2[i]; i++)
    str2[i] = tolower(str2[i]);

    int n1= strlen(str1);
    int n2= strlen(str2);

    if(n1 != n2){
        printf("Not anagrams.");
        return 0;
    }

    int freq[26] = {0};

    for(int i=0; i<n1; i++){
        if(isalpha(str1[i])){
            freq[str1[i]-'a']++;
        }
    }

    for(int i=0; i<n2; i++){
        if(isalpha(str2[i])){
            int idx = str2[i]-'a';
            if(freq[idx] == 0){
                printf("Not Anagram.");
                return 0;
            }
            freq[idx]--;
        }
    }

    printf("The strings are anagrams.");
    return 0;


}

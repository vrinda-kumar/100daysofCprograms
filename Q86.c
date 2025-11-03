//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

void rev(char str[], int n){
    for(int i=0; i<n/2; i++){
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main(){
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    int n= strlen(str);

    char orig[100];
    strcpy(orig,str);

    rev(str, n);

    if(strcmp(str, orig) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

    return 0;

}
//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>


void rev(char str[], int n){
    for(int i=0; i<n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    printf("Reversed string: %s", str);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n= strlen(str);

    rev(str,n);
    return 0;
}
//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main(){
    char i;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }

    return 0;

}
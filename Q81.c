//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main(){
    int i=0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        i++;
    }

    printf("Total character= %d", i);
    return 0;
}

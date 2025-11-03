//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")]='\0';

    if(!isspace(str[0] && str[0] != '\0')){
        printf("%c.", toupper(str[0]));
    }

    for(int i=1; i<strlen(str); i++){
        if(!isspace(str[i]) && isspace(str[i-1])){
            printf("%c.", toupper(str[i]));
        }
    }

    printf("\n");

    return 0;
}
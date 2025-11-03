//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")]=0;

    int len = strlen(str);

    int lastspace = -1;
    for(int i=len-1; i>=0; i--){
        if(isspace(str[i])){
            lastspace =i;
            break;
        }
    }

    if(!isspace(str[0]) && str[0] != '\0'){
        printf("%c", toupper(str[0]));
    }

    for(int i=1; i<len; i++){
        if(!isspace(str[i]) && isspace(str[i-1]) && i<lastspace ){
            printf("%c", toupper(str[i]));
        }
    }

    if(lastspace != -1){
        printf(" ");
        for(int i=lastspace+1; i<len; i++){
            printf("%c", str[i]);
        }
    }

    return 0;
    
}
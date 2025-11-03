//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    int i=0;
    while(str[i]!='\0'){
        if(islower(str[i])){
            str[i]= toupper(str[i]);
            }
            else if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        i++;
    }

    printf("%s", str);
    return 0;
}
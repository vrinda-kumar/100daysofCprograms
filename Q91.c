//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <ctype.h>

int isvowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void rmvowel(char *str){
    int j=0;
    for(int i=0; str[i]!='\0'; i++){
        if(!isvowel(str[i])){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    rmvowel(str);

    printf("%s", str);

    return 0;
}

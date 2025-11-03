//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character: ");
    getchar();
    scanf("%c", &ch);

    int count =0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]== ch){
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;

}
//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
#include<ctype.h>

void rev(char *str, int start, int end){
    char temp;
    while(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void revword(char *str){
    int start=0, end=0;
    int len = strlen(str);

    while(end <= len){
        if(str[end] == ' ' || str[end] == '\0'){
            rev(str, start, end-1);
            start = end +1;
        }
        end++;
    }
}
int main(){
    char str[100];
    printf("Enter the sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")]= '\0';

    revword(str);

    printf("%s", str);

    return 0;

}
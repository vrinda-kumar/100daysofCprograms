//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

void gensubstr(char* str, int st, int end, int len){
    if(st==len){
        return;
    }

    if(end>len){
        gensubstr(str, st+1, st+1, len);
        return;
    }

    for(int i=st; i<end; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    gensubstr(str, st, end+1, len);
}

int main(){
    char str[100];
    printf("Enter a sting: ");
    scanf("%s", str);

    int len = strlen(str);

    gensubstr(str, 0,0, len);

    return 0;
}
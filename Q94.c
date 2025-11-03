//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")]=0;

    int i=0;
    int maxlen=0, currlen = 0;
    int maxstart=0, currstart =0;

    while(str[i] != '\0'){
        if(!isspace(str[i])){

            if(currlen ==0){
                currstart = i;
            }
            currlen++;
        }
        else{
            if(currlen>maxlen){
                maxlen = currlen;
                maxstart = currstart;
            }
            currlen= 0;
        }
        i++;
    }


    if(currlen> maxlen){
        maxlen=currlen;
        maxstart = currstart;
    }

    printf("Longest word: ");
    for(int j=maxstart; j<maxstart+maxlen; j++){
        putchar(str[j]);
    }

    printf("\nLength: %d\n", maxlen);

    return 0;
}
//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    printf("Enter your string: ");
    scanf("%s", str1);

    char str2[100];
    printf("Enter the rotated string: ");
    scanf("%s", str2);

    int n1= strlen(str1);
    int n2 = strlen(str2);

    if(n1!=n2){
        printf("NO Rotation.");
        return 0;
    }



    char concat[200];
    strcpy(concat,str1);
    strcat(concat, str1);

    if(strstr(concat, str2) != NULL){
        printf("Yes, it is a rotation.");
    }
    else{
        printf("Not a rotation.");
    }

    return 0;
}

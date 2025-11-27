//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    enum Gender g;
};

int main() {

    struct Person p;
    int x;

    scanf("%d", &x);

    p.g = x;

    if(p.g == MALE)
        printf("Male");
    else if(p.g == FEMALE)
        printf("Female");
    else
        printf("Other");

    return 0;
}

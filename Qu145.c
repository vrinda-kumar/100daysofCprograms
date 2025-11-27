//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // Returning the structure
}

int main() {
    struct Student students[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    struct Student topper = findTopper(students, 3);

    printf("Top Student: %s | Roll: %d | Marks: %.2f\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}

//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {

    struct Student s;       // normal structure variable
    struct Student *ptr;    // pointer to structure

    ptr = &s;   // pointer pointing to structure variable

    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", ptr->name);

    printf("Roll: ");
    scanf("%d", &ptr->roll);

    printf("Marks: ");
    scanf("%d", &ptr->marks);

    printf("\nModified Data:\n");
    printf("Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}

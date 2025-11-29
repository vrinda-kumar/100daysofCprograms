//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    /* ------- Writing to Binary File ------- */
    fp = fopen("employee.dat", "wb");   // open in binary write mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data saved to file.\n");

    /* ------- Reading from Binary File ------- */
    fp = fopen("employee.dat", "rb");   // open in binary read mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nReading data from file...\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}

//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main(){
    char input_date[11];
    char output_date[20];
    char day[3];
    char month[3];
    char year[5];

    printf("Enter the date: ");
    scanf("%s", input_date);

    strncpy(day, input_date,2);
    day[2] = '\0';

    strncpy(month, input_date + 3, 2);
    month[2] = '\0';

    strncpy(year, input_date +6, 4);
    year[4] = '\0';

    if(strcmp(month, "04") == 0){
        sprintf(output_date, "%s-Apr-%s", day, year);
        printf("Formatted date: %s", output_date);
    }
    else{
        printf("Only month 04 i.e. april is supported");
    }
    
    return 0;
}
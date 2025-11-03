//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main(){
    int rows , col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &col);

    
    int sumarr[50];
    int arr[rows][col];
    printf("Enter elements of matrix: ");
    for(int i=0; i<rows; i++){
        int sum =0;
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        sumarr[i] = sum;
        printf("%d ", sumarr[i]);
    }

    return 0;
}
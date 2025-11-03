//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main(){
    int rows1, col1;
    printf("Enter size of first row and column: ");
    scanf("%d %d", &rows1, &col1);

    printf("Enter elements of first matrix: ");
    int matrix1[rows1][col1];
    for(int i=0; i<rows1; i++){
        for(int j=0; j<col1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }


    int rows2, col2;
    printf("Enter size of second row and column: ");
    scanf("%d %d", &rows2, &col2);

    printf("Enter the elements of second matrix: ");
    int matrix2[rows2][col2];
    for(int i=0; i<rows2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(rows1 != rows2 || col1 != col2){
        printf("Enter valid matrix for addition with equal size."); 
        return 1;
    }

    
    for(int i=0; i<rows1; i++){
        for(int j=0; j<col1; j++){
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;


}
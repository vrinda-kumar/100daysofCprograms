//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main(){
    int row, col;
    printf("Enter size of first row and column: ");
    scanf("%d %d", &row, &col);

    if(row != col){
    printf("Only square matrix can have symmetry.");
    return 1;
    }

    printf("Enter elements of first matrix: ");
    int matrix[row][col];
    int matrix2[col][row];
    int mark =1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if (matrix[i][j] != matrix[j][i]){        
            mark = 0 ;
            break;
            }
        }
        if(!mark)
        break;
    }
    
    if (mark)
    printf("True");

    else 
    printf("False");

    return 0;
}
//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>


    int sumd(int matrix[][100], int n){
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                sum += matrix[i][j];
                }
                else
                continue;
            }
        }
        return sum;
    }

    int main(){
    int n;
    printf("Enter size of matrix : ");
    scanf("%d", &n);

    printf("Enter elements of matrix: ");
    int matrix[100][100];
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrix[i][j]);

        }
    }

    printf("%d", sumd(matrix, n));

    return 0;

}
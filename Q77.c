//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>


    bool isequal(int matrix[][100], int n){
        for(int i=0; i<n; i++){
            int current = matrix[i][i];
            for(int j=0; j<i; j++){
                if(current == matrix[j][j]){
                    return false;
                }
            }
        }
        return true;
    }
    int main(){
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix: ");
    int matrix[100][100];
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrix[i][j]);

        }
    }

    if(isequal(matrix, n)){
        printf("Diagonal elements are distinct.");
    }
    else
    printf("Diagonal elements are not equal");

    return 0;
}

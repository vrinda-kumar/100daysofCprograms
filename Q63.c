//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
void merge(int *arr1, int n, int *arr2, int m){
    int t= m+n;
    int copyarr[t];
    for(int i=0; i<n; i++){
        copyarr[i] = arr1[i];
    }

    for(int i=0; i<m; i++){
        copyarr[n+ i]= arr2[i];
    }


    for(int i=0; i<t; i++){
        printf("%d ", copyarr[i]);
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    int m;
    scanf("%d", &m);
    int arr2[m];
    for(int i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    merge(arr1, n, arr2, m);
    return 0;
}

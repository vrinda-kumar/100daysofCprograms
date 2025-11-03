//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int linearsearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
        return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={ 1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(int);

    printf("%d", linearsearch(arr, n,5));
    return 0;
}

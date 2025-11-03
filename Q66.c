//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

void insertsorted(int *arr, int *n, int key){
    int i, pos;
    //find correct position.
    for(pos=0; pos< *n; pos++){
        if(arr[pos]>key)
        break;
    }

    //shift elements to right
    for(i = *n; i>pos; i--){
        arr[i] = arr[i-1];
    }

    //insert elements
    arr[pos] = key;
    (*n)++; //update size
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    insertsorted(arr, &n, key);

    printarr(arr,n);
    return 0;
}
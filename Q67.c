//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int num, index;
    printf("Enter the element you want to insert and where: ");
    scanf("%d %d", &num, &index);

    if(index<0 || index>n){
        printf("Invalid position");
        return -1;
    }

    for(int i=n; i>index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = num;
    n++;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

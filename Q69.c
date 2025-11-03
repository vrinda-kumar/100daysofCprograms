//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    if(n<2){
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int first, second;
    first = second = INT_MIN;

    for(int i=0; i<n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]> second && arr[i] != first){
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    printf("There is no second largest number.");

    else 
    printf("The second largest element is %d", second);

    return 0;


}
//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[50];
    int poscount= 0;
    int negcount=0;
    int zerocount=0;

    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        zerocount++;

        else if(arr[i] > 0)
        poscount++;

        else
        negcount++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", poscount, negcount, zerocount);
    return 0;
}
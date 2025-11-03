// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/


#include <stdio.h>

int countInRange(int arr[], int num, int st, int end){
    int count =0;
    for(int i=st; i<=end; i++){
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}

int majorityEleRec(int arr[], int st, int end){
    if(st == end){
        return arr[st];
    }

    int mid = st + (end - st)/2;
    int left = majorityEleRec(arr, st, mid);
    int right = majorityEleRec(arr, mid+1, end);

    if(left == right){
        return left;
    }

    int leftcount = countInRange(arr, left, st, end);
    int rightcount = countInRange(arr, right, st, end);

    return leftcount>rightcount ? left : right;

}

int majorityelement(int arr[], int n){
    return majorityEleRec(arr, 0, n-1);
}

int main(){
    int arr[] = {2,3,4,2,2,2,2};
    int n=7;
    int result = majorityelement(arr, n);
    printf("%d", result);

    return 0;
}
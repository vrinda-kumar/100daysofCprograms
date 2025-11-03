//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

/*N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include <stdio.h>
#include <stdlib.h>

void find_next_greater(const int arr[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        int current_element = arr[i];
        int next_greater = -1;
        
        for (int j = i + 1; j < n; j++) {
            int element_to_right = arr[j];
            
            if (element_to_right > current_element) {
                next_greater = element_to_right;
                break;
            }
        }
        
        result[i] = next_greater;
    }
}

void run_test(const char* name, const int arr[], int n) {
    int result[n];
    
    find_next_greater(arr, n, result);

    printf("%s: arr = [", name);
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1 ? ", " : ""));
    }
    printf("]\n");

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", result[i], (i < n - 1 ? ", " : ""));
    }
    printf("\n\n");
}

int main() {
    int arr1[] = {1, 3, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    run_test("Input 1", arr1, n1);

    int arr2[] = {6, 8, 0, 1, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    run_test("Input 2", arr2, n2);

    int arr3[] = {1, 2, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    run_test("Input 3", arr3, n3);

    int arr4[] = {5, 4, 3, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    run_test("Input 4", arr4, n4);

    return 0;
}

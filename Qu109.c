//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void max_subarray_sum(const int arr[], int n, int k, long long *max_sum) {
    if (n < k || k <= 0) {
        *max_sum = LLONG_MIN;
        return;
    }

    *max_sum = LLONG_MIN; 

    for (int i = 0; i <= n - k; i++) {
        long long current_sum = 0;
        
        for (int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }
        
        if (current_sum > *max_sum) {
            *max_sum = current_sum;
        }
    }
}

int main() {
    int n, k;

    printf("Enter array size (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid N. Exiting.\n");
        return 1;
    }

    printf("Enter subarray size (K): ");
    if (scanf("%d", &k) != 1 || k <= 0) {
        printf("Invalid K. Exiting.\n");
        return 1;
    }

    if (k > n) {
        printf("Error: K > N. Exiting.\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(arr);
            return 1;
        }
    }

    long long maxSum = 0;
    max_subarray_sum(arr, n, k, &maxSum);

    printf("\nInput Array: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1 ? ", " : ""));
    }
    printf("]\n");
    printf("K: %d\n", k);
    printf("Max Sum: %lld\n", maxSum);

    free(arr);

    return 0;
}

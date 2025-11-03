//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
#include <stdlib.h>

void print_max_elements(const int arr[], int n, int k) {
    if (n < k || k <= 0) {
        printf("Error: Invalid size.\n");
        return;
    }

    for (int i = 0; i <= n - k; i++) {
        int current_max = arr[i];
        
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > current_max) {
                current_max = arr[i + j];
            }
        }
        
        printf("%d%s", current_max, (i < n - k ? " " : ""));
    }
    printf("\n");
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

    printf("\nInput Array: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1 ? ", " : ""));
    }
    printf("]\n");
    printf("K: %d\n", k);
    
    printf("Maximums of each window: ");
    print_max_elements(arr, n, k);

    free(arr);

    return 0;
}

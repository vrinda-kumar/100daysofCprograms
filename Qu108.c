//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>
#include <stdlib.h>

void product_except_self(const int nums[], int n, int answer[]) {
    for (int i = 0; i < n; i++) {
        long long product = 1; 
        
        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        
        answer[i] = (int)product;
    }
}

int main() {
    int n;

    // Get array size from user
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array size. Exiting.\n");
        return 1;
    }

    // Dynamically allocate memory for input and output arrays
    int *nums = (int*)malloc(n * sizeof(int));
    int *answer = (int*)malloc(n * sizeof(int));

    if (nums == NULL || answer == NULL) {
        printf("Memory allocation failed!\n");
        free(nums);
        free(answer);
        return 1;
    }

    // Get array elements from user
    printf("Enter %d integers (separated by spaces or newlines):\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input for element %d. Exiting.\n", i + 1);
            free(nums);
            free(answer);
            return 1;
        }
    }

    // Calculate the product array
    product_except_self(nums, n, answer);

    // Print the input array
    printf("\nInput nums: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", nums[i], (i < n - 1 ? ", " : ""));
    }
    printf("]\n");

    // Print the result array
    printf("Output answer: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", answer[i], (i < n - 1 ? ", " : ""));
    }
    printf("]\n");

    // Free allocated memory
    free(nums);
    free(answer);

    return 0;
}

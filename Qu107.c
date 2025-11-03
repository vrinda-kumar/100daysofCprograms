//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int found;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    printf("Previous Greater Elements: ");
    
    for(i = 0; i < n; i++)
    {
        found = 0;
        
        for(j = i - 1; j >= 0; j--)
        {
            if(a[j] > a[i])
            {
                printf("%d", a[j]);
                found = 1;
                break;
            }
        }
        
        if(found == 0)
            printf("-1");
        
        if(i < n - 1)
            printf(", ");
    }
    
    printf("\n");
    
    return 0;
}

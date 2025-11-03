//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int main()
{
    int n,i;
    int s=0,m;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    m=a[0];
    
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s>m)
            m=s;
        if(s<0)
            s=0;
    }
    
    printf("%d",m);
    
    return 0;
}

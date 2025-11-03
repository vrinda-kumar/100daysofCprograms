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

int main()
{
    int n,k,i,j,m;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter k: ");
    scanf("%d",&k);
    
    for(i=0;i<=n-k;i++)
    {
        m=a[i];
        for(j=i;j<i+k;j++)
            if(a[j]>m)
                m=a[j];
        printf("%d ",m);
    }
    
    return 0;
}

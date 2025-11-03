//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
 int binsearch(int *arr, int n, int key){
    int st= 0;
  int end= n-1;
  while(st<=end){
       int mid= (st+end)/2;
       if(arr[mid] == key)
       return mid;

       else if(arr[mid]<key)
       st = mid+1;
       else 
        end = mid-1;
         }
    return -1;
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

     int key;
  printf("Enter key: ");
  scanf("%d", &key);

   printf("%d", binsearch(arr, n, key));
     return 0;
}

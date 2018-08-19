// 09.Implement binary search algorithm using recursion.
#include <stdio.h>
void swap(int *a, int *b);
void bubble(int arr[], int n);
void printdata(int arr[], int size);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubble(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
   {
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
    }
}

int binarysearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarysearch(arr, l, mid-1, x);
        return binarysearch(arr, mid+1, r, x);
   }
   return -1;
}

int main(void)
{
  int arr[15] ;
  int n,x;
  puts("enter the size of data");
  scanf("%d",&n);
  puts("enter the data");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  bubble(arr, n);
  puts("enter the search element");
  scanf("%d",&x);
  int result = binarysearch(arr, 0, n-1, x);
  (result == -1)?printf("Element is not present in array"):printf("Element is present at index %d", result);
  return 0;
}

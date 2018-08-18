// 04. Implement selection sort function.
#include<stdio.h>
void swap(int *a, int *b);
void selection(int arr[] ,int n);
void printData(int arr[], int size);

int main()
{
  int arr[15] ;
  int n;
  puts("enter the size of data");
  scanf("%d",&n);
  puts("enter the data");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  selection(arr,n);
  printData(arr, n);

  return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int arr[],int n)
{
    int i, j, minidx;
    for (i = 0; i < n-1; i++)
    {
        minidx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[minidx])
            minidx = j;
            swap(&arr[minidx], &arr[i]);
    }
}

void printData(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

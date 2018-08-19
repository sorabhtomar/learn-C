//06.Implement insertion sort function
#include<stdio.h>
void swap(int *a, int *b);
void insertion(int arr[],int n);
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
  insertion(arr,n);
  printf("sorted data\n" );
  printData(arr, n);

  return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int arr[],int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void printData(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

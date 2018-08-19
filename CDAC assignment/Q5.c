//05. Implement bubble sort function.
#include <stdio.h>

void swap(int *a, int *b);
void bubble(int arr[], int n);
void printdata(int arr[], int size);

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
  bubble(arr, n);
  printf("Sorted array: \n");
  printdata(arr, n);
  return 0;
}

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

void printdata(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

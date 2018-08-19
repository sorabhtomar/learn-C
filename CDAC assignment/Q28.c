//28. Allocate memory for 2-D array using malloc()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    puts("enter the size of array ");
    puts("row and columns");
    scanf("%d%d",&r,&c );

    int *arr = (int *)malloc(r * c * sizeof(int));

    int i, j, count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++count;

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", *(arr + i*c + j));

      return 0;
}

#include<stdio.h>
int main()
{
  int array[100],search,c,n;
  printf("Enter the number of element in array\n");
  scanf("%d",&n);

  printf("enter %d integer(s)\n",n);

  for(c =0;c<n;c++)
  {
    scanf("%d\n",&array[c] );
  }
  printf("enter the number to search\n");
  scanf("%d",&search);
  for(c=0;c<n;c++)
  {
    if(array[c] == search)
    {
      printf("%d is present at location %d \n",search,c+1);
      break;
    }
  }
  if(c==n)
  printf("%d isn't present in array.\n",search);
  return 0;
}

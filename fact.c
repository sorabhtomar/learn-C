#include<stdio.h>
void main()
{
int n,i,fact=1;
printf("Enter the Number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  fact = fact * i;
}
printf("The factorial of %d is equal to %d",n,fact);
}

#include<stdio.h>
#include<conio.h>

int main()
{
int n,i,fact=0;
printf("enter the number");
scanf("%d",&n);
for (i=2;i<=n/2; i++)
 {
   if(n%i==0)
      {
        fact++;
      }
  }
  if(fact==0)
        printf("the number %d is prime",n);
  else
        printf("the number %d is not prime",n);

  return 0;
}

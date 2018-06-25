#include<stdio.h>
int addition(int a,int b);
int main()
{
  int x,y,z;
  printf("Enter 2 Number\n" );
  scanf("%d%d",&x,&y);
  z=addition(x,y);
  printf("addition of %d and %d is equal to %d",x,y,z );
  return 0;
}

int addition(int a,int b)// function for addition
{
int add;
add= a+b;
return add;
}

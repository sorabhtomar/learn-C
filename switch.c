#include<stdio.h>

enum{add,sub,divid,mul}

void main()
{
  int x,y,z;
  char s[10];
  printf("enter two numbers");
  scanf("%d%d",&x,&y);

  printf("enter choice");
  printf("\n add \n  sub \n divid \n mul\n" );
  scanf("%s",&s);
  switch (s)
   {
    case add: z=x+ y;
              prin/tf("addition %d\n",z );
              break;
    case sub:z=x -y;
              printf("%d\n",z );
              break;
    case divid:z=x /y;
              printf("%d\n",z );
              break;
    case mul:z=x y;
              printf("%d\n",z );
              break;

  }


}

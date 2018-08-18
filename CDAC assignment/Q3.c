// Implement strrev() - string reverse function.
#include<stdio.h>
#include<string.h>
void main()
{
  char str[20];
  puts("enter the string");
  gets(str);

  printf("String         : %s\n",str );
  printf("Reverse String : %s\n",strrev(str) );
}

// Implement strcmpi() - compare two strings case-insensitive function.
#include<stdio.h>
#include<string.h>
void main()
{
  char first[20],second[20];
  printf("enter first string\n" );
  gets(first);
  printf("enter second string\n" );
  gets(second);

  if((strcmpi(second , first)) == 0)
    printf("the strings are same");
  else
    printf("the strings are not same");
}

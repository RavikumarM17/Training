#include<stdio.h>
int main()
{
  char buffer[50];
  int a=10,b=7;
  sprintf(buffer,"Sum of %d and %d is %d",a,b,a+b);
  printf("%s",buffer);
  return 0;
}

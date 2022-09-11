#include<stdio.h>

int main()
{
  const int x=5;
 const int *h=&x,*j=25;
  h=&j;
  printf("%d\n",*h);
  return 0;

}

#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5},sum=0;
  int size=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<size;i++)
  		sum+=a[i];
 	  printf("Sum:%d\n",sum);
  return 0;

}

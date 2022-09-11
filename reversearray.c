#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5},temp;
  int size=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<size/2;i++)
  	{ temp=a[i];
	  a[i]=a[size-i-1];
	  a[size-i-1]=temp;
  }

  for(int i=0;i<size;i++)
  {	
	  printf("%d ",a[i]);
  	}

  return 0;

}

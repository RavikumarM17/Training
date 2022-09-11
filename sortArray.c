#include<stdio.h>
int min(int arr[],int start,int end)
{	int min=999999,index;
	for(int i=start;i<end;i++)
		if(arr[i]<min)
		{

			min=arr[i];
			index=i;
		}
	return index;
}
int main()
{
  int a[]={1,22,3,84,45,78,54,12},temp;
  int size=sizeof(a)/sizeof(a[0]),temp1=size;
  for( int i=0;i<size;i++)
  	{  
		int min_idx=min(a,i,size);
		int temp=a[i];
		a[i]=a[min_idx];
		a[min_idx]=temp;
  
  }  for(int i=0;i<size;i++)
 	  printf("%d ",a[i]);
  return 0;

}

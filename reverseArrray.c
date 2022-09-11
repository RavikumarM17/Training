#include<stdio.h>

int main()
{
	   int ar[]={1,2,3,4,5},temp;
	   int size=sizeof(ar)/sizeof(ar[0]);
	         for(int i=0;i<size/2;i++)
			    {
				   temp=ar[i];
				   ar[i]=ar[size-i-1];
				   ar[size-i-1]=temp;
							        
			    }
		    for(int i=0;i<size;i++)
			           printf("%d ",ar[i]);
		          
		        return 0;
}

#include<stdio.h>

int fibb(int num)
{
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	return fibb(num-1)+fibb(num-2);
}
int main()
{
	int num=15;
	printf("Fibbanoci Sum of %d is %d",num,fibb(num) );

	return 0;
}

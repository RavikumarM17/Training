#include<stdio.h>
int main(){
	int num,sum=0,x;
	printf("Enter the Number:");
	scanf("%d",&num);

	while(num>9)
	{	sum=0;

		while(num!=0)
		{
			x=num%10;
			sum+=x;
			num=num/10;	
		}
			num=sum;
	}
	printf("Sum of Digits :%d",num);
	return 0;
}


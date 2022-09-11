#include<stdio.h>
int main()
{
	unsigned  int num,val,pos,bit;
       printf("Enter the number:");
	scanf("%x",&num);
 	printf("Enter the Number of bits:");
	scanf("%d",&bit);
	printf("Enter the Pos:");
	scanf("%d",&pos);
	val=(1<<bit)-1;
	int result=num|(val<<pos);
	printf("Result:ox%x\n",result);
	return 0;

}

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],clm,ro,i,j,k;

	printf("Enter the number of rows:");
	scanf("%d",&ro);
	printf("\nEnter the number of columns:");
	scanf("%d",&clm);

	printf("\nEnter the first Matrix elements\n");
	for(i=0;i<ro;i++)
		for(j=0;j<clm;j++)
			scanf("%d",&a[i][j]);
	printf("\nEnter the second matrix elements\n");
	for(i=0;i<ro;i++)
		for(j=0;j<clm;j++)
			scanf("%d",&b[i][j]);
       
	for( i=0;i<ro;i++)
		for(j=0;j<clm;j++)
			c[i][j]=a[i][j]+b[i][j];

	printf("Matrix Addition\n");
	for(i=0;i<ro;i++)
	{
		for(j=0;j<clm;j++)
		  printf("%d ",c[i][j]);
		printf("\n");

	}

	for(i=0;i<ro;i++)
	{
		for(j=0;j<clm;j++)
		{ 	
			c[i][j]=0;
			for(k=0;k<ro;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
		
	printf("Matrix Multiplication\n");


	for(i=0;i<ro;i++)
	{
		for(j=0;j<clm;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
return 0;
}

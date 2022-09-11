#include<stdio.h>
void (*fun)();
int (*add)(int);

void display()
{
 printf("display\n");
}

int add1 (int x)
	{
		return x+2;
}
int main()
{
	fun=display;
	(fun)();
	display();
	add=add1;
	int x=(add)(5);
	printf("x:%d\n",x);

	return 0;
}

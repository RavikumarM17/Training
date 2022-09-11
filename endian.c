#include<stdio.h>
int main()
 {
	 unsigned int x=0x12345678;
	 char *p=(char*)&x;
	printf("%d %d\n",sizeof(p),sizeof(*p));
        if(*(p)==0x78)
		 printf("little endeian");
	 else 
		 printf("big  endian");
	 return 0;

}

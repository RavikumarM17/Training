#include <stdio.h>

int main()
{
    int j;
char string[]="silent",string2[]="listen";
	for(int i=0;string[i]!='\0';i++)
	{
    		for( j=0;string[j]!='\0';j++)
   		{ 
	       		 if(string[i]==string2[j])
             			 break;
                 }
    	        	if(string[j]=='\0')
    			{
        	           printf("Not Anagram\n");
        		   return 0;
		        }
	}
        printf("Anagram\n");

    return 0;
}

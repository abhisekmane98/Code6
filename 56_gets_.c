#include<stdio.h>
#include<string.h>

/* declaration of gets()  char* gets(char*)
               calling    char *ch=gets(base & of string);
 defination     char * gets(char *s)
                  {
                  	
                  	return s;
				  }
				  */
int main()
{
	int i=0;
	char *ch=NULL,s[4];
	printf("%d \n",s);
	fflush(stdin);
	printf("Enter a string  ");
	ch=gets(s);
	
	for(i=0;i<=3;i++)
	{
		printf("%d,%d ",ch+i,s+i);
		fflush(stdin);
		printf("%c,",ch[i]);
		fflush(stdin);
		printf("%c\n",s[i]);
	}
}
	


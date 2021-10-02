#include<stdio.h>
#include<string.h>

int main()
{
	int v;
	char s[20]="kenrajukenraju",*r,*ch="raju";
	
//	printf("Enter a string ");
//	scanf("%s",s);
	
	r=strstr(s,ch);
	
	printf("%d,%d\n",r,&s[3]);
	printf("%s,%s\n",r,s);
	int i=3;
	for(;i<=strlen(s)-1;i++)
	{
		printf("%c,%c %d,%d\n",s[i],*r,&s[i],r);
		r++;
	}
	
}

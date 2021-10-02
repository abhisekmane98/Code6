#include<stdio.h>
#include<string.h>
int main()
{
	int count=1,i,j,l,l1,k;
	char s[80]="will we think we that can we survive",s1[]="we",s2[]="l",*p,t[60];
	printf("%s,%d\n",s,strlen(s));
	strcpy(t,s);
	while(strstr(t,s1)!=NULL)
	{
		p=strstr(t,s1);
		p=p+strlen(s1);
		strcpy(t,p);
		count++;
	}
	count--;
	
	for(i=1;i<=count;i++)
	{
		p=strstr(s,s1);
		
		while(j<=strlen(s2)-1 )
		{
			*p=s2[j];
			p++;
			j++;
		}
		j=0;
		
		k=strlen(s1)-strlen(s2);
		
		while( p+k<= &s[strlen(s)-1] )
		{
			*p=*(p+k);
			p++;
		}
		*p='\0';
		printf("%s,%d\n",s,strlen(s) );
		getch();
	}
	printf("%s",s);
	
}

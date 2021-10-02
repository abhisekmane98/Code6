#include<stdio.h>
#include<string.h>
int main()
{
	int count=1,i,j,l,l1;
	char s[60]="we will we think we that can we surwevivewe",s1[]="we",s2[]="ki",*p,t[60];
	
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
		for(j=0;j<=strlen(s1)-1;j++)
		{
			*(p+j)=s2[j];
		}
	}
	printf("%s",s);
	
}

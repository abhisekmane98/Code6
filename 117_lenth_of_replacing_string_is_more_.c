#include<stdio.h>
#include<string.h>
int main()
{
	int count=1,i,j,l,l1,y,k;
	char s[80]="wewill we think we that can we surwevivewe",s1[]="we",s2[]="kings",*p,t[60];
	
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
		p=p+strlen(s1);
		
		y=strlen(s)-1;
	
		k=strlen(s2)-strlen(s1);
		
		while(&s[y]>=p)
		{
			s[y+k]=s[y];
			y--;
		}
		y++; // means same position as p
		y=y-strlen(s1);
	
		for(j=0; j<=strlen(s2)-1 ;j++)
		{
			s[y]=s2[j];
			y++;
		}
		printf("%s\n",s);
		getch();
	}
	printf("%s",s);
	
}

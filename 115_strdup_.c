#include<stdio.h>
#include<string.h>
int main()
{
	int i,k;
	char *s="bhisheka is a great boy",*r;
	r=strdup(s);
	
	printf("%d,%s\n%d,%s\n",s,s,r,r);
	k=strlen(s);

	for(i=0;i<=k-1;i++)
	{
		printf("%c,%c %d,%d\n",*s,*r,s,r);
		s++;
		r++;
	}

}

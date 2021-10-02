#include<stdio.h>
#include<string.h>
int main()
{
	char ch[30];
	int j=1,k=1;
	
	for(j=1;j<=3;j++)
	{
		for(k=0;k<=9;k++)
		{
			printf("%d",k);
		}
	}
	printf("\n");
	
	sprintf(ch,"%4d\t%2.2f\n%s",12,3.452,"Merry go round");
	printf("%s\n",ch);
	k=strlen(ch);
	printf("%d",k);
}

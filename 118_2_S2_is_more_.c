#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,q=0,flag=0,k,y,count;
	char s[80]="theNepoleon was the gretheeat emperor the yes he isthe",s1[10]="the",s2[10]="kings";
	printf("%s\n",s);
	
	
//	printf("Enter the string(s1) to replaced and by which string(s2)");
//	scanf("%s%s",s1,s2);
	k=strlen(s2)-strlen(s1);

	for(i=0; i<=( strlen(s)-strlen(s1) ) ;i++)   // strlen(s) is changing
	{
		flag=0;
		count=i;
		while(s[i]==s1[j])
		{
			i++;
			j++;
	
			if(j==strlen(s1))
			{
				flag=1;
				
				y=strlen(s)-1;
				while(y>=i)
				{
					s[y+k]=s[y];
					y--;
				}
				i=i-strlen(s1);
				printf("%s\n",s);
				getch();
				
				j=0;
				while(j<=(strlen(s2)-1) )
				{
					s[i]=s2[j];
					i++;
					j++;
				}
				i--;
				j=0;
				break;
				
			}
		}
		if(flag==0)
		{
			i=count;
			j=0;
		}
		
	} 
	printf("%s",s);
	
}
	
	
	
	

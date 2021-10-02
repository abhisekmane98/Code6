#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,q=0,flag=0,k,temp,count;
	char s[60]="kingsAbhishke kings a an grkingseat kings the kings yeskings",s1[10]="kings",s2[10]="the";
	printf("%s\n",s);
	k=strlen(s1)-strlen(s2);
	
//	printf("Enter the string(s1) to replaced and by which string(s2)");
//	scanf("%s%s",s1,s2);
	
	for(i=0; i<=( strlen(s)-strlen(s1) ) ;i++)
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
				j=0;
				i=i-strlen(s1);
				
				while(j<=(strlen(s2)-1) )
				{
					s[i]=s2[j];
					i++;
					j++;
				}
				temp=i;
			
				while( i+k <= strlen(s)-1)
				{
					s[i]=s[i+k];
					i++;
				}
				s[i]='\0';
				i=temp;
				printf("%s\n",s);
				getch();
				break;
			}
		}
		if(flag==0)
		{
			i=count;
			j=0;
		}
		
	} 
	printf("%s\n",s);
	
}
	
	
	
	

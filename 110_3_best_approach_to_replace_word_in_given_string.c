#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,q=0,flag=0,count;
	char s[60]="Abhishke the  a  an greathemperanor tathe thththe the",s1[10],s2[10];
	
	
	printf("Enter the string(s1) to replaced and by which string(s2)");
	scanf("%s%s",s1,s2);
	
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
				
				while(j<=(strlen(s1)-1) )
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
	
	
	
	

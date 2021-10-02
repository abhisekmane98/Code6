#include<stdio.h>
int main()
{
	int i,shift;
	
	printf("Enter the shift value");
	scanf("%d",&shift);
	
	shift=shift%26;
	
	char s[]="Bonapart";  
	for(i=0;i<=7;i++)
	{
		if(islower(s[i]))
		{
			if((s[i]+shift)>122 )
				s[i]=s[i]+shift-26;
			else
				s[i]=s[i]+shift;	
		}
		else
		{
			if((s[i]+shift)>90)
				s[i]=s[i]+shift-26;
			else
				s[i]=s[i]+shift;
		}
		
	}
	printf("%s",s);
}

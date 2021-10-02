#include<stdio.h>
int main()
{
	int i,shift,shift2;
	
	printf("Enter the shift value");
	scanf("%d",&shift);
	
	shift2=shift%10;
	shift=shift%26;
	
	char s[]="BonAp39t";  
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
			if(isupper(s[i]))
			{
				if((s[i]+shift)>90)
					s[i]=s[i]+shift-26;
				else
					s[i]=s[i]+shift;	
			}
			else
			{
				if(s[i]>=49 && s[i]<=58)
				{
					if((s[i]+shift2)>58)
						s[i]=s[i]+shift2-10;
					else
						s[i]=s[i]+shift2;
				}
			}
			
		}
		
	}
	printf("%s",s);
}

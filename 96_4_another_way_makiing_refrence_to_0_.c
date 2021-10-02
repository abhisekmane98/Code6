#include<stdio.h>
int main()
{
	int i,shift;
	
	printf("Enter the shift value");
	scanf("%d",&shift);
	
	char s[]="BonAp39t"; 
	for(i=0;i<=7;i++)
	{
		if(islower(s[i]))
				s[i]=(s[i]-97+shift )%26+97;
		else
		{
			if(isupper(s[i]))
					s[i]=(s[i]-65+shift)%26+65;
			else
				if(s[i]>=48 && s[i]<=57)
						s[i]=(s[i]-48+shift)%10+48;
			
		}
		
	}
	printf("%s",s);
}

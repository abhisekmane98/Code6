#include<stdio.h>
void encrypt(char*,int,int);
void decrypt(char*,int,int);
int main()
{
	int i,shift,shift_s,shift_d;
	char s[]="BonAp39t"; 
	printf("%s\n",s);
	
	printf("Enter the shift value  ");
	scanf("%d",&shift);
	
	puts("\n");
	shift_s=shift%26;
	shift_d=shift%10;

	encrypt(s,shift_s,shift_d);
	printf("%s\n",s);
	
	
	decrypt(s,26-shift_s,10-shift_d);
	printf("%s",s);
	

	
	
}

void encrypt(char *s,int shift_s,int shift_d)
{
	int i;
	printf("shift_s=%d, shift_d=%d\n",shift_s,shift_d);
	
	for(i=0;i<=7;i++)
	{
		if(islower(s[i]))
				s[i]=(s[i]-97+shift_s )%26+97;
		else
		{
			if(isupper(s[i]))
					s[i]=(s[i]-65+shift_s)%26+65;
			else
				if(s[i]>=48 && s[i]<=57)
						s[i]=(s[i]-48+shift_d)%10+48;
			
		}
		
	}
}

void decrypt(char *s,int shift_s,int shift_d)
{
	int	i;
	printf("shift_s=%d, shift_d=%d\n",shift_s,shift_d);
	
	for(i=0;i<=7;i++)
	{
		if(islower(s[i]))
				s[i]=(s[i]-97+shift_s )%26+97;
		else
		{
			if(isupper(s[i]))
					s[i]=(s[i]-65+shift_s)%26+65;
			else
				if(s[i]>=48 && s[i]<=57)
						s[i]=(s[i]-48+shift_d)%10+48;
			
		}
		
	}
}

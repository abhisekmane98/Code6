#include<stdio.h>
#include<string.h>
void encrypt(char *, int, int);

int main()
{
	char s[60];
	int sh,sh_t,sh_d;
	printf("Enter a string  ");
	scanf("%s",s);
	printf("Enter the value of shift  ");
	scanf("%d",&sh);
	
	sh_t=sh%26;
	sh_d=sh%10;
	
	encrypt(s,sh_t,sh_d);
	printf("%s\n",s);

	encrypt(s,26-sh_t,10-sh_d); // to decrypt
	printf("%s",s);
	
}

void encrypt(char *s,int sh_t,int sh_d)
{
	int i;
	for(i=0;i<=strlen(s);i++)
	{
		if(islower(s[i]))
		{
			if((s[i]+sh_t)>=123)
				s[i]=96+((s[i]+sh_t)-122 );
			else
				s[i]=s[i]+sh_t;
		}
		else
		{
			if(isupper(s[i]))
			{
				if((s[i]+sh_t)>=91)
					s[i]=64+((s[i]+sh_t)-90 );
				else
					s[i]=s[i]+sh_t;
			}
			else
				if(s[i]>=48 && s[i]<=59)
				{
					if((s[i]+sh_d)>=58)
						s[i]=47+((s[i]+sh_d)-57 );
					else
						s[i]=s[i]+sh_d;
				}
		}
	}

}

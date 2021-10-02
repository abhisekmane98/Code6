#include<stdio.h>
#include<string.h>
void encrypt(char *,int);

int main()
{
	char s[60];
	int sh;
	printf("Enter a string  ");
	scanf("%s",&s);
	printf("Enter the value of shift  ");
	scanf("%d",&sh);
	
	sh=sh%256;
	
	encrypt(s,sh);
	printf("Encrypted %s\n",s);

	encrypt(s,256-sh); // to decrypt
	printf("Decpryted %s",s);
	
}


void encrypt(char *s,int sh)
{
	int i;
	
	for(i=0;i<=strlen(s)-1;i++)
	{
		
		if((s[i]+sh)>=128)
		{
			s[i]=-129+((s[i]+sh)-127);
		}
		else
			s[i]=s[i]+sh;
	}

}

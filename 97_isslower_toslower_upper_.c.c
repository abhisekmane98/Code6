#include<stdio.h>
int main()
{
	char s[]="BonAprt";
	int i;
	for(i=0;i<=7;i++)
	{
		if(islower(s[i]))
			s[i]=toupper(s[i]);
		else
			s[i]=tolower(s[i]);
	}
	printf("%s",s);
}

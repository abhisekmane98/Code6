//checking gets in argument we add adress or variablae name
#include<stdio.h>
int main()
{
	char ch[20];
	gets(ch);   // give warning
	printf("%s",ch);
}

// conclusion we have to provide adress only


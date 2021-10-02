#include<stdio.h>
#include<string.h>
#include<math.h>
//#define ten 10
int power(int);
int convert(char*);

int main()
{
	char s[20];
	int a;
	
	printf("Enter a string");
	scanf("%s",s);
	
	a=convert(s);
	printf("%d",a);
}

int power(int k)
{
	int v=1,i;
	for(i=1;i<=k;i++)
	{
		v=v*10;
	}
	
	return v;
}

int convert(char *s)
{
	int a=0,i=0,k;
	k=strlen(s);
	k--;
	
	for(k;k>=0;k--)
	{
		a=a+(s[i]-48)*power(k);
		i++;	
	}
	
	return a;
}

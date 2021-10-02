#include<stdio.h>
int main()
{
	int i,shift=3;
	char s1[]="Bon3Apartzy"; // zy 125 124
	for(i=0;i<=10;i++)
	{
		s1[i]=s1[i]+shift;
	}
	printf("%s",s1);
}

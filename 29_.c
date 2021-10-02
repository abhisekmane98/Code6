#include<stdio.h>
int main()
{
	int i=2,j=1,k=1;
	float f=2.5367;
	for(j=1;j<=3;j++)
	{
		for(k=0;k<=9;k++)
		{
			printf("%d",k);
		}
	}
	
	char str[]="Life is like that";
	printf("\n%4d\t%3.3f\t%4s\n",i,f,str);
	
}

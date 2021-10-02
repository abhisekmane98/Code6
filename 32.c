W#include<stdio.h>
int main()
{
	int d,m,y;
	scanf("%d%*c%d%*c%d",&d,&m,&y); //supprssion of character 
	printf("%d,%d,%d",d,m,y);
}

#include<stdio.h>
int main()
{
	int a[3][4]={
				 2,3,5,7,
				 11,13,17,19,
				 23,29,31,37
				},i,j;
				
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%d,",a[i][j] );
		}
		printf("\n");
	}
}

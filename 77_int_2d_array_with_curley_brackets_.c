#include<stdio.h>
int main()
{
	int a[2][2]={	
					{2},{3},
					{5},{7}
				},i,j;
				
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
				printf("%d,",a[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	
	int a[3][4][2]={
					  2,4,
					  7,8,
					  3,4,
					  5,6,
					  
					  7,6,
					  3,4,
					  5,3,
					  2,3,
					  
					  8,9,
					  7,2,
					  3,4,
					  5,1
					},i,j,k;
					
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			for(k=0;k<=1;k++)
			{
				printf("%d,",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

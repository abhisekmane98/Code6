#include<stdio.h>
int main()
{
	char ch[2][2]={	
					{
					{'a'},{'b'}	
					},
					{
					{'c'},{'d'}
					}
					
				},i,j;
				
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
				printf("%d,",ch[i][j] );
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	// wrong
	char ch[2][2]={	
					{
					{"abhishek"},{"kristen"}	
					},
					{
					{"Aashutosh"},{"emma"}
					}
					
				},i,j;
				
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
				printf("%s,",ch[i][j] );
		}
		printf("\n");
	}
}

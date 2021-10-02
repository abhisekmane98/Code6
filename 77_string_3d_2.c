#include<stdio.h>
int main()
{
	char ch[3][4][20]={	
						{
							{"abhishek"},
							{"kristen"},
							{"Aashutosh"},
							{"emma"}
						},
						{
							{"raju"},
							{"ravi"},
							{"pandu"},
							{"kailsh"},	
						},
						{
							{"jeevan"},
							{"ravan"},
							{"ram"},
							{"karna"}	
						}	
							
				},i,j;
				
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%s\n",&ch[i][j][0] );
		}
		printf("\n");
	}
}

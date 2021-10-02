#include<stdio.h>
int main()
{
	char ch[4][20]={	
					
					{"abhishek"},
					{"kristen"},
					{"Aashutosh"},
					{"emma"}
				
				},i,j;
				
	for(i=0;i<=3;i++)
	{
	//	for(j=0;j<=2;j++)
		{
				printf("%s,",&ch[i][0] );
		}
		printf("\n");
	}
}

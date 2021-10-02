#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i,j;
	
	STUDENT s2[3][4];										
				     
	for(i=0;i<=2;i++)
	{
		printf("%d row\n",i);
		for(j=0;j<=3;j++)
		{
				printf("Enter the name  ");
				fflush(stdin);
				gets(s2[i][j].name);
				printf("Enter the age  ");
				scanf("%d",&s2[i][j].age);
		}
		printf("\n");
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d%d. %s,%d\n",i,j,s2[i][j].name,s2[i][j].age);
		}
		printf("\n");
	}
}

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
	// this all done is totally wrong check 78 
	// 0
	s2[0][0].name[40]="ruturaj";
	s2[0][0].age=1;
	s2[0][1].name[40]="kailash";
	s2[0][1].age=2;
	s2[0][2].name[40]="rohit";
	s2[0][2].age=3;
	s2[0][3].name[40]="sakshi";
	s2[0][3].age=4;
	// 1
	s2[1][0].name[40]="aaditya";
	s2[1][0].age=5;
	s2[1][1].name[40]="tejas";
	s2[1][1].age=6;
	s2[1][2].name[40]="santosh";
	s2[1][2].age=7;
	s2[1][3].name[40]="pankaj";
	s2[1][3].age=8;
	// 2
	s2[2][0].name[40]="samruddhi";
	s2[2][0].age=9;
	s2[2][1].name[40]="kristen";
	s2[2][1].age=10;
	s2[2][2].name[40]="emma";
	s2[2][2].age=11;
	s2[2][3].name[40]="brad";
	s2[2][3].age=12;

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%d%d. %s,%d\n",i,j,s2[i][j].name,s2[i][j].age);
		}
		printf("\n");
	}
	
}

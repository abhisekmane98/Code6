#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i,j;
	
	STUDENT s2[3][4]={
						{
							{"ruturaj",0},{"kails",1},{"rohit",2},{"sakshi",3}
						},
						{
							{"aaditya",10},{"tejas",11},{"santosh",12},{"pankaj",13}
						},
						{
							{"samruddhi",20},{"kristen",21},{"emma",22},{"brad",23}
						}																			
				     };
				     
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%-9s,%-2d	",s2[i][j].name,s2[i][j].age);
		}
		printf("\n");
	}
	
}

#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i;
	STUDENT s2[12]={
						 {"ruturaj",0},{"kails",1},{"rohit",2},{"sakshi",3},
					     {"aaditya",10},{"tejas",11},{"santosh",12},{"pankaj",13},
						 {"samruddhi",20},{"kristen",21},{"emma",22},{"brad",23}
																				
				     };
	for(i=0;i<=11;i++)
	{
		printf("%d. %s,%d\n",i,s2[i].name,s2[i].age);
	}
	
}

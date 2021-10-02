#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	STUDENT s;
//	printf("Enter name of student");
//	gets(s.name);
	s.name[40]="kristen";
	printf("%s",s.name);
}

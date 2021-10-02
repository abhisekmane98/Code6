#include<stdio.h>

struct student
{
	int roll_no;
	char name[40];
	char dept[40];
	char course[40];
	int e_y;  // enroll year
};

void f1(int,struct student*);
void f2(int,struct student*);

int main()
{
	int i,y,roll_no,p;
	struct student s[450];
	printf("Enter the details of student roll_no,name,dept,course\n");
	for(i=0;i<=10;i++)
	{
		printf("Student %d:\n",i);
		scanf("%d%s%s%d\n",s[i].roll_no, s[i].dept, s[i].course, s[i].e_y );
		gets(s[i].name);
	}
	printf("Enter 1: To print the names of student who joined in particular year\nEnter 2: To print the data of student whose roll_no is received\n");
	scanf("%d",p);
	printf("\n");
	switch(p)
	{
		case 1: 
			printf("Enter the year in which you wanna check ");
			scanf("%d",y);
			f1(y,s);
			break;
		case 2:
			printf("Enter the Roll_no ");
			scanf("%d",roll_no);
			f2(roll_no,s);
			break;
			
	}
	printf("\n");
		
}

void f1(int y,struct student *s)
{	int i;
	printf("following students are enrolled in %d year\n",y);
	for(i=0;i<=10;i++)
	{
		if(s[i].e_y==y)
			printf("%s\n",s[i].name);
	}	
}

void f2(int roll_no,struct student *s)
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(s[i].roll_no==roll_no)
			break;
	}
	printf("roll_no: %d\name: %s\ndept: %s\ncourse: %d\nEnroll year: %d\n", s[i].roll_no, s[i].name, s[i].dept, s[i].course, s[i].e_y);
}



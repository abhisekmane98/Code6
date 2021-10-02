#include<stdio.h>

struct student
{
	int roll_no;
	char name[40];
	char dept[40];
	char course[40];
	int e_y;  // enroll year
};

void input(struct student*);
void display(struct student*);
void choose(struct student*);
void f1(int,struct student*);
void f2(int,struct student*);


int main()
{
	struct student s[450];
	input(s);// s=&s[0];
	display(s);
	choose(s);
		
}

void f1(int y,struct student *s)
{	int i;
	printf("following students are enrolled in %d year\n",y);
	for(i=0;i<=3;i++)
	{
		if(s[i].e_y==y)
			printf("%s\n",s[i].name);
	}	
}

void f2(int roll_no,struct student *s)
{
	int i;
	for(i=0;i<=3;i++)
	{
		if(s[i].roll_no==roll_no)
			break;
	}
	printf("Student %d:\n1.Roll_number %d\n2.Name %s\n3.Department %s\n4.Course %s\n5.Enrollement year %d\n",i+1,s[i].roll_no,s[i].name,s[i].dept,s[i].course,s[i].e_y);
}

void input(struct student *s)
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Enter the name of student %d ",i+1);
		fflush(stdin);
		gets(s[i].name);
		printf("Enter the Roll_number,\nDepartment name,\nCourse name,\nenrollement year\n");
		scanf("%d%s%s%d",&s[i].roll_no, s[i].dept, s[i].course, &s[i].e_y );
		
		printf("Student %d:\n1.Roll_number %d\n2.Name %s\n3.Department %s\n4.Course %s\n5.Enrollement year %d\n",i+1,s[i].roll_no,s[i].name,s[i].dept,s[i].course,s[i].e_y);
		getch();
		system("CLS");
		
	}
}

void display(struct student *s)
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Student %d:\n1.Roll_number %d\n2.Name %s\n3.Department %s\n4.Course %s\n5.Enrollement year %d\n\n",i+1,s[i].roll_no,s[i].name,s[i].dept,s[i].course,s[i].e_y);
	}
}

void choose(struct student *s)
{
	int p,y,roll_no;
	printf("Enter 1: To print the names of student who joined in particular year\nEnter 2: To print the data of student whose roll_no is received\n");
	scanf("%d",&p);
	printf("\n");
	switch(p)
	{
		case 1: 
			printf("Enter the year in which you wanna check ");
			scanf("%d",&y);
			f1(y,s);
			break;
		case 2:
			printf("Enter the Roll_no ");
			scanf("%d",&roll_no);
			f2(roll_no,s);
			break;
			
	}
	printf("\n");
}



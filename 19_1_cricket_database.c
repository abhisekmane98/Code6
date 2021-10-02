#include<stdio.h>
struct cricketer
{
	char name[30];
	int age;
	int no_of_test;
	float avg_runs;
}c[4];

void input(void);
void display(void);
void qsort(void);

int main()
{
	int choose;
	char check;
	do
	{
		printf("Enter 1.T0 input()\n      2.To display()\n      3.To qsort()\n");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
				input();
				break;
			case 2:
				display();
				break;
			case 3:
				qsort();
				break;
				
		}
		
		printf("Enter any key");
		getch();
		 
		system("CLS");
		
		printf("To continue Enter 'Y'\nTo End 'Q'");
		fflush(stdin);
		scanf("%c",&check);
		printf("\n");
		
	}while(check=='Y');
	
}

void input()
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Enter the details of cricketer %d\n",i+1);
		
		printf("Name ");
		fflush(stdin);
		gets(c[i].name);
		
		printf("age  ");
		scanf("%d",&c[i].age);
		
		printf("No. of  Test played  ");
		scanf("%d",&c[i].no_of_test);
		
		printf("Avg. runs  ");
		scanf("%f",&c[i].avg_runs); // this is wrong
		
		printf("\n");

	}
}

void display()
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Cricketer %d %s\nAge %d\nNo. of Test matches played %d\nAvg. Runs %.2f\n",i+1, c[i].name, c[i].age, c[i].no_of_test, c[i].avg_runs );
		printf("\n");
	}
	printf("\n");
	
}

void qsort()
{
	int i,j;
	struct cricketer temp;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2-i;j++)
		{
			if(c[j+1].avg_runs<c[j].avg_runs)
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
}

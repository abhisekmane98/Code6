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

int compare(const void *p,const void *q);

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
				qsort(c,4,sizeof(struct cricketer),compare);
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

int compare(const void *p,const void *q)
{
//	struct cricketer l=*(struct cricketer*)p, m=*(struct cricketer*)q;
//	return (l.avg_runs-m.avg_runs);
   return (  (*(struct cricketer*)p).avg_runs - (*(struct cricketer*)q).avg_runs );	// you can use above technique
}

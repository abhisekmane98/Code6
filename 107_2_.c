#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int n;
	char name[20];
}STUDENT;

struct linklist
{
	STUDENT data;
	struct linklist *next;
}*start;
void add(void); 
void del(int);
void print(void);

int main()
{
		int n,i,choice;
		struct linklist *start=NULL;
		while(1)
		{
			printf("Enter 1.To add\n      2.To delete\n      3.To print\n");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					add();
					break;
				case 2:
					puts("Enter the number of linklist to be deleted");
					scanf("%d",&n);
					del(n);
					break;
				case 3:
					print();
				
			}
		}
		
		FILE *fp1,*fp2;
		fp1=fopen("107_Master_.dat","wb");
		fwrite(s,24*5,1,fp1);
		fclose(fp1);
		
		fp2=fopen("107_Transactiion_.dat","wb");
		i=0;
		while(i<=5)
		{
			fwrite(&s[i].n,4,1,fp2)	
			i++;
		}
		
}

void add()
{
	int flag=0;
	struct linklist *l,*temp=start,*temp2;
	
	l=(struct linklist*)(malloc(sizeof(struct linklist)) );
	
	puts("Enter the no. and name");
	scanf("%d%s",&l->data.n,l->data.name);
	
	if(start==NULL)
	{
		l->next=start;
		start=l;
	}
	else
	{
		if(l->data.n < start->data.n)  // before the start of linked list
		{
			l->next=start;
			start=l;
		}
		else
		{
			while(l->data.n > temp->data.n)
			{
				if(temp->next==NULL) // end of linkedlist
				{
					temp->next=l;
					l->next=NULL;
					flag=1;
					break;
				}
				temp2=temp;
				temp=temp->next;
			}
		
			if(flag==0) // mid of linked list
			{
				temp2->next=l;
				l->next=temp;
			}	
		}
			
	}
}

void del(int n)
{
	int i=1;
	struct linklist *temp=start,*temp2;
	if(n==1)
	{
		start=start->next;
		free(temp);
	}
	else
	{
		while(i<n)
		{
			temp2=temp;
			temp=temp->next;
			i++;
		}
		temp2->next=temp->next;
		free(temp);	
	}
	
}

void print()
{
	struct linklist *temp=start;
	if(start==NULL)
		puts("linked list is empty");
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d,%s\n",temp->data.n,temp->data.name);
			temp=temp->next;
			getch();
		}
		printf("%d,%s\n",temp->data.n,temp->data.name);
	}	
}
	




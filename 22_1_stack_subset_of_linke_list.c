#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;

void push(int);
int pop(void);
void display(void);

int main()
{
	int choice,x;
	
	do
	{
		printf("Enter 1.To push\n      2.To pop\n      3.To display\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter a data to push in stack\n");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				printf("popped data is %d\n",pop() );
				break;
			case 3:
				display();
		}
		
	}while(1);
	
}

void push(int data)
{	
	struct node *l,*temp;
	
	l=(struct node*)(malloc(sizeof(struct node)));
	l->data=data;
	l->next=NULL;
	
	if(start==NULL)
	{
		start=l;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=l;
	}
	
}

int pop()
{
	int k;
	struct node *temp=start,*temp2=NULL;
	
	if(start==NULL)
		printf("String is Empty\n");
	
	while(temp->next!=NULL)
	{
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=NULL;
	k=temp->data;
	free(temp);
	return k;
}

void display()
{
	int count=1;
	struct node *temp=start;
	while(temp->next!=NULL)
	{
		printf("Node %d=%d\n",count,temp->data);
		temp=temp->next;
		count++;
	}
	printf("Node %d=%d\n",count,temp->data);
}





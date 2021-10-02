#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;

void Add_node_at_end(int);
void delete_node_at_begining();
void display();

int main()
{
	int choice,data;

	do
	{
		printf("Enter 1.To add node at the end of queue\n      2.To delete node from begining of queue\n      3.To display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter a data to add in queue\n");
				scanf("%d",&data);
				Add_node_at_end(data);
				break;
			case 2:
				delete_node_at_begining();
				break;
			case 3:
				display();
		}
		
	}while(1);
}

void Add_node_at_end(int data)
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

void delete_node_at_begining()
{
	struct node *temp=start;
	
	if(start==NULL)
		printf("String is Empty");
	else
	{
		if(start->next==NULL)
		{
			free(start);
			start=NULL;
		}
		else
		{
			start=start->next;
			free(temp);
		}
	}
}

void display()
{
	struct node *temp=NULL;
	temp=start;
	int count=1;
	while(temp->next!=NULL)
	{
		
		printf("Node %d=%d\n",count,temp->data);
		temp=temp->next;
		count++;
	}
	printf("Node %d=%d\n\n",count,temp->data);
	
}



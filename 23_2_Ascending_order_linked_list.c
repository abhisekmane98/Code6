#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;

void Add_node(int);
void display(void);

int main()
{	

	int choice,data;
	
	do
	{
		printf("Enter 1.To add node\n      2.To display\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter a data to add in node\n");
				scanf("%d",&data);
				Add_node(data);
				break;
			case 2:
				display();
		}	
		
	}while(1);
	
	
}

void Add_node(int data)
{
	struct node *r,*temp=start,*temp2=NULL; // connect1
	r=(struct node*)malloc(sizeof(struct node));
	r->data=data;
	
	if(start==NULL)
	{
		r->next=NULL;
		start=r;
	}
	else
	{
		
		while(data> temp->data)
		{
			if(temp->next==NULL)
			{
				r->next=NULL;
				temp->next=r;
				break;
			}
			else
			{
				temp2=temp; // connect2
				temp=temp->next;
				continue;
			}
			
		}
		
		if(data< temp->data)
		{
			if(temp2==NULL) // connect3
			{
				r->next=temp;
				start=r;
			}
			else
			{
				r->next=temp;
				temp2->next=r;
					
			}		
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






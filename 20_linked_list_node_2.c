#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void Add_node_at_begining(int);
void Add_node_at_end(int);
void Add_node_at_location(int,int);
void display();

struct node *start=NULL;

int main()
{
	int x,y,z,loca;
	int choice,check;
	
	do
	{
		printf("Enter 1.To add data at begining\n      2.To add data at end\n      3.To add data at particular location\n      4.To display linked list from beginig\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter a data to add at begining\n");
				scanf("%d",&x);
				Add_node_at_begining(x);
				break;
			case 2:
				printf("Enter a data to add at end\n");
				scanf("%d",&y);
				Add_node_at_end(y);
				break;
			case 3:
				printf("Enter a data and location to add a data\n");
				scanf("%d%d",&loca,&z);
				Add_node_at_location(loca,z);
				break;
			case 4:
				display();
				break;
			
		}
	
		printf("Enter 1.To continue\n      2.To stop\n");
		scanf("%d",&check);
		
	}while(check==1);
	
}

void Add_node_at_begining(int data)
{
	struct node *f;
	f=(struct node*)(malloc(sizeof(struct node)));
	f->data=data;
	f->next=start;
	start=f;
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
		while(temp->next==NULL)
		{
			temp=temp->next;
		}
		temp->next=l;
	}
	
}

void Add_node_at_location(int loca,int data) // loca must be >=2 as if loca=1 then there is program to add node at begining
{
	int i=2;
	struct node *r,*temp;
	r=(struct node*)(malloc(sizeof(struct node)));
	r->data=data;
	
	temp=start;
	while(i!=loca)
	{
		temp=temp->next;
		i++;
	}

	r->next=temp->next;
	temp->next=r;
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







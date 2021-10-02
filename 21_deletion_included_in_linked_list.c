#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;

void Add_node_at_begining(int);
void Add_node_at_end(int);
void Add_node_at_location(int,int);

void delete_node_at_begining();
void delete_node_at_end();
void delete_node_at_location(int);

void display();

int main()
{
	int x,y,z,loca;
	int p;
	int choice,check;  
	
	do
	{
		printf("Enter 1.To add data at begining\n      2.To add data at end\n      3.To add data at particular location\n");
		printf("      4.To delete data from begining\n      5.To delete data from end\n      6.To delete data from partic");
		printf("ular location\n      7.To display linked list from beginig\n");
		
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
				printf("Enter a location and data respectively\n");
				scanf("%d%d",&loca,&z);
				Add_node_at_location(loca,z);
				break;
			case 4:
				delete_node_at_begining();
				break;
			case 5:
				delete_node_at_end();
				break;		
			case 6:
				printf("Enter the location from which you have to delete a node\n");
				scanf("%d",&p);
				delete_node_at_location(p);
				break;
			case 7:	
				display();
				break;		
		}
	
		//printf("Enter 1.To continue\n      2.To stop\n");
	//	scanf("%d",&check);
		
	}while(1);//check==1);
	
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
		while(temp->next!=NULL)
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

void delete_node_at_end()
{
	struct node *temp=start,*temp2=NULL;
	
	if(start==NULL)
		printf("String is Empty");
	
	while(temp->next!=NULL)
	{
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=NULL;
	free(temp);
}

void delete_node_at_location(int loca)
{
	printf("a");
	struct node *temp=start;
	struct node *temp2=NULL;
	int i=2;
	while(i!=loca)
	{
		printf("b");
		temp=temp->next;
		i++;
	}
	printf("c");
	temp2=temp->next;
	temp->next=temp2->next;
	free(temp2);
	printf("d");
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






	


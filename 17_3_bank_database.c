#include<stdio.h>

struct Account
{
	long int No;
	char Name[40];
	int balance;
};

void input(struct Account*);
void display(struct Account*);
void Min_balance(struct Account*);
void Transaction(struct Account*);

int main()
{
	int choice;
	char check;
	struct Account Ac[200];
	
	do
	{
		printf("Enter Respective no. to call reqired function\n1.input()\n2.display()\n3.Min_balance()\n4.Transaction()\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				input(Ac); // &Ac[0]	
				break;
			case 2:
				display(Ac);
				break;
			case 3:
				Min_balance(Ac);
				break;
			case 4:
				Transaction(Ac);
				break;
		}
		
		getch();
		system("CLS");
		printf("To End Enter 'Y'\n2.To Continue Enter'N'\n");
		fflush(stdin);
		scanf("%c",&check);
		
	}while(check=='N');
	
}
void input(struct Account *Ac)
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Enter the name of Customer  ");
		fflush(stdin);
		gets(Ac[i].Name);
		printf("Enter the 1.Account No.\n          2.Account Balance\n");
		scanf("%d%d",&Ac[i].No,&Ac[i].balance);
		printf("\n1.Name of Customer %s\n2.Account No. %d\n3.Balance %d",Ac[i].Name,Ac[i].No,Ac[i].balance);
		getch();
		system("CLS");
	}
		
}

void display(struct Account *Ac)
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("\n1.Name of Customer %s\n2.Account No. %d\n3.Balance %d\n",Ac[i].Name,Ac[i].No,Ac[i].balance);
	}
	printf("\n");
}

void Min_balance(struct Account *Ac)
{
	int i,count=0;
	for(i=0;i<=3;i++)
	{
		if(Ac[i].balance<10000)
		{
			if(++count==1)
				printf("These are customers with min Balance\n\n");
			
			printf("1.%s\n2.Balance %d\n",Ac[i].Name,Ac[i].balance);
		}
	}
	printf("\n");
}

void Transaction(struct Account *Ac)
{
	int i,p,Ac_num,amount;
	printf("Enter Acoount No.");
	scanf("%d",&Ac_num);
	
	for(i=0;i<=3;i++)
	{
		if(Ac_num==Ac[i].No)
			break;
	}
	
	printf("Enter 1.To Deposit\n      0 To Withdrawal\n");
	scanf("%d",&p);
	
	if(p==1)
	{
		printf("\nEntre ammoun to be deposited\n");
		scanf("%d",&amount);
		Ac[i].balance= Ac[i].balance+ amount;
		printf("\nTransaction Succeded\nYour Balance now %d\n",Ac[i].balance);
	}
	else
	{
		if(Ac[i].balance<10000)
		{
			printf("Insufficient balance for withdrawal\n");
		}
		else
		{
			Ac[i].balance=Ac[i].balance-amount;
			printf("\nTransaction Succeded\nYour Balance now %d\n",Ac[i].balance);
		}
		
	}
	
}

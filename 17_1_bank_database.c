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
	struct Account Ac[200];
	input(Ac);// &Ac[0]	
	display(Ac);
	Min_balance(Ac);
	Transaction(Ac);
}
void input(struct Account *Ac)
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Enter the name of Customer  ");
		fflush(stdin);
		gets(Ac[i].Name);
		printf("Enter the 1.Account No.\n2.Account Balance");
		scanf("%d%d",Ac[i].No,Ac[i].balance);
		printf("\n1.Name of Customer %s\n2.Account No.\n3.Balance",Ac[i].Name,Ac[i].No,Ac[i].balance);
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
}

void Min_balance(struct Account *Ac)
{
	int i,count=0;
	for(i=0;i<=3;i++)
	{
		if(Ac[i].balance<100)
		{
			if(++count==1)
				printf("These are customers with min Balance\n\n");
			
			printf("1.Name of customer %s\n2.Balance %d\n",Ac[i].Name,Ac[i].balance);
		}
	}
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
		if(Ac[i].balance<100)
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

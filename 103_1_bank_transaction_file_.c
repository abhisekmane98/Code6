#include<stdio.h>
#include<stdlib.h>
typedef struct customer
{
	int accno;
	char name[30];
	float balance;
}CUSTOMER;

typedef struct trans
{
	int accno;
	char trans_type;
	float amount;
}TRANS;

void transaction(void);
int main()
{
	int choice;
	CUSTOMER c[6]={ {13,"kristen",43000}, {15,"brad",85500}, {17,"leo caprio",11300},
					{19,"james anderson",34000}, {23,"Mahi dhoni",21800}, {29,"Kevin",18000} 
				},c_r;
	TRANS t_r;
	FILE *fp1,*fp2;
	fp1=fopen("103_CUSTOME.dat","wb");
	fwrite(c,sizeof(c),1,fp1);
	fclose(fp1);
	
	while(1)
	{
		printf("Enter 1.Transaction\n      2.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				transaction();
				break;
			case 2:
				exit(1);
				
		}	
	}
	
	fp1=fopen("103_CUSTOME.dat","rb");
	puts("data from custom.dat\n\n");
	while(fread(&c_r,38,1,fp1)!=0)
	{
		printf("Account Number %d\nName %s\nBalance %f\n",c_r.accno,c_r.name,c_r.balance);
		
	}
	puts("\n\n");
	
	fp2=fopen("103_TRANS.dat","rb");
	puts("data from trans.dat\n\n");
	while(fread(&t_r,9,1,fp2)!=0)
	{
		printf("Account Number %d\nTransacton type %c\namount %f\n",t_r.accno,t_r.trans_type,t_r.amount);
		
	}
	
	
}
void transaction()
{
	CUSTOMER c;
	TRANS t;
	int flag=0;
	printf("Enter the Account Number\n");
	scanf("%d",&t.accno);

	FILE *fp1,*fp2;
	fp1=fopen("103_CUSTOME.dat","rb+");
	while(fread(&c,38,1,fp1)!=0)
	{
		printf("Account Number %d\nName %s\nBalance %f\n",c.accno,c.name,c.balance);
		if(c.accno==t.accno)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Enter 'W' for Withdrawal\nEnter 'D' for Deposite\n");
		scanf("%c",&t.trans_type);
		if(t.trans_type=='w')
		{
			printf("Enter the amount to withdraw\n");
			scanf("%f",t.amount);
			c.balance=c.balance-t.amount;
			
		}
		else
		{
			printf("Enter the amount to deposite\n");
			scanf("%f",t.amount);
			c.balance=c.balance+t.amount;
		}
	}
	fseek(fp1,-38,SEEK_CUR);
	fwrite(&c,38,1,fp1);
	close(fp1);
	
	fp2=fopen("103_TRANS.dat","wb");
	fwrite(&t,9,1,fp2);
	fclose(fp2);

}

#include<stdio.h>
#include<stdlib.h>
typedef struct customer// size 40
{
	int accno;
	char name[30];
	float balance;
}CUSTOMER;

typedef struct trans //size=12
{
	int accno;
	char trans_type;
	float amount;
}TRANS;

void transaction(void);
int main()
{
	int n;
	CUSTOMER c[6]={ {13,"kristen",43000}, {15,"brad",85500}, {17,"leo caprio",11300},
					{19,"james anderson",34000}, {23,"Mahi dhoni",21800}, {29,"Kevin",18000} 
				},c_r;
	TRANS t_r;
	FILE *fp1,*fp2;

	fp1=fopen("103_CUSTOME.dat","wb");
	fwrite(c,sizeof(c),1,fp1);
	fclose(fp1);

	do
	{
		transaction();
		puts("Enter 1.To continue\n      2.To out of looop");
		scanf("%d",&n);
		
	}while(n==1);
	getch();
	
	fp1=fopen("103_CUSTOME.dat","rb");
	puts("data from custom.dat\n\n");
	while(fread(&c_r,40,1,fp1)!=0)
	{
		printf("Account Number %d\nName %s\nBalance %.2f\n\n",c_r.accno,c_r.name,c_r.balance);
		
	}
	puts("\n\n\n");
	
	fp2=fopen("103_TRANS.dat","rb");
	puts("data from trans.dat\n\n");
	while(fread(&t_r,12,1,fp2)!=0)
	{
		printf("Account Number %d\nTransacton type %c\namount %.2f\n\n",t_r.accno,t_r.trans_type,t_r.amount);
		
	}
	
	
}
void transaction()
{
	CUSTOMER c;
	TRANS t;
	int flag=0;
	printf("Welcome,Enter the Account Number\n");
	scanf("%d",&t.accno);

	FILE *fp1,*fp2;
	fp1=fopen("103_CUSTOME.dat","rb+");
	while(fread(&c,40,1,fp1)!=0)
	{
		if(c.accno==t.accno)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Account Number %d\nName %s\nBalance %.2f\n",c.accno,c.name,c.balance);
		printf("Enter 'W' for Withdrawal\nEnter 'D' for Deposite\n");
		fflush(stdin);
		scanf("%c",&t.trans_type);
		if(t.trans_type=='W')
		{
			printf("Enter the amount to withdraw\n");
			scanf("%f",&t.amount);
			c.balance=c.balance-t.amount;

			
		}
		else
		{
			printf("Enter the amount to deposite\n");
			scanf("%f",&t.amount);
			c.balance=c.balance+t.amount;
		}
	}
	fseek(fp1,-40,SEEK_CUR);
	fwrite(&c,40,1,fp1);
	fclose(fp1);
	
	fp2=fopen("103_TRANS.dat","wb");
	fwrite(&t,12,1,fp2);
	fclose(fp2);

}

#include<stdio.h>
#include<string.h>

struct Engine_parts
{
	int y_of_manuf,Quantity;
	char material[30],serial_no[4];
}p[10];

void put_serial_no(void);
void display_serial_no(void);

void material(void);
void y_of_manuf(void);
void Quantity(void);

void AA3_AA7(void);
void getl1l2_1(int*,int*);
void getl1l2_2(int*,int*);
void display();

int main()
{
	int choice;
	char check;
	put_serial_no();
	
	do
	{
		
		printf("Enter 1.To display Serial No.\n      2.To Add material type\n      3.To Add year of Manufacture\n      4.To Add Quantity\n");
		printf("      5.To get details AA3-AA7\n      6.To display everything\n");
		scanf("%d",&choice);
		printf("\n\n");
		
		switch(choice)	
		{
			case 1:
				display_serial_no(); 
				break;
			case 2:
				material();
				break;
			case 3:
				y_of_manuf();
				break;
			case 4:
				Quantity();
				break;
			case 5:
				AA3_AA7();
				break;
			case 6:
				display();
				break;
			
			
		}
		printf("Any Key ");
		getch();
		system("CLS");
		printf("Enter 'Y' To continue\n      'N' To stop\n");
		fflush(stdin);
		scanf("%c",&check);
		printf("\n\n");
		
	}while(check=='Y');
	

	
}

void put_serial_no()
{
	int i,j,k,l=0;
	for(i=65;i<=65;i++)
	{
		for(j=65;j<=65;j++)
		{
			for(k=48;k<=57;k++)
			{
				p[l].serial_no[0]=i;
				p[l].serial_no[1]=j;
				p[l].serial_no[2]=k;
				l++;
				
			}
		}
	}
}

void display_serial_no()
{
	int i;
	for(i=0;i<=9;i++)
	{
		printf("%d. %s\n",i+1, p[i].serial_no);
	}
	printf("\n");
}

void material()
{
	int i;
	printf("Enter type of material of serial no.\n\n");
	
	for(i=0;i<=9;i++)
	{
		printf("%d %s ",i+1,p[i].serial_no);
		scanf("%s",p[i].material); 
		//printf("\n");  it go to next line as we enter a enter key
		
	}
	printf("\n");
	
}

void y_of_manuf()
{
	int i;
	printf("Enter year of manufacture of engine part of Serial no.\n\n");
	for(i=0;i<=9;i++)
	{
		printf("%d %s ",i+1,p[i].serial_no);
		scanf("%d",&p[i].y_of_manuf);
	//	printf("\n"); it go to next line as we enter a enter key
		
	}
	printf("\n");
	
}

void Quantity()
{
	int i;
	printf("Enter Quantity of engine part of Serial no.\n\n");
	for(i=0;i<=9;i++)
	{
		printf("%d %s ",i+1,p[i].serial_no);
		scanf("%d",&p[i].Quantity);
	//	printf("\n");
		
	}
	printf("\n");
	
}

void AA3_AA7()
{
	int l1,l2,i=0;
//	getl1l2_1(&l1,&l2);
	getl1l2_2(&l1,&l2);
	
	printf("l1=%d,l2=%d",l1,l2);
	getch();

	printf("These are asked details\n\n");
	
	for(l1;l1<=l2;l1++)
	{
		printf("%d %s %s %d %d\n",++i, p[l1].serial_no, p[l1].material, p[l1].y_of_manuf, p[l1].Quantity);
	}
	printf("\n");
}

void getl1l2_1(int *l1,int *l2)
{
	int i,j,k,l=0,flag1=1;
	
	for(i=65;i<=65;i++)
	{
		for(j=65;j<=65;j++)
		{
			for(k=48;k<=57;k++)
			{
				
				if(flag1==1)
				{
					if(i==65 && j==65 && k==51)
					{
						*l1=l;
						flag1=0;
					}
				}
				else
				{
					if(i==65 && j==65 && k==55)
					{
						*l2=l;
						break;
					}
			
				}
				
				l++;
					
			}
		}
	}
}

void getl1l2_2(int *l1,int *l2)
{
	int i,m,flag1=1;
	char *a="AA3", *b="AA7";
	
	for(i=0;i<=9;i++)
	{
		
		if(flag1==1)
		{
			m=strcmp(p[i].serial_no,a);
			
			if(m==0)
			{
			
				*l1=i;
				flag1=0;
			}	
		}
		else
		{
			
			m=strcmp(p[i].serial_no,b);
			if(m==0)
			{
				*l2=i;
				break;
			}	
		}
		
	}
}

void display()
{
	int i;
	for(i=0;i<=9;i++)
	{
		printf("Serial No. %s\nMaterial %s\nQuantity %d\nYear of Manufacture %d\n\n",p[i].serial_no,p[i].material, p[i].Quantity, p[i].y_of_manuf );	
	}
}

#include<stdio.h>
typedef struct date
{
	int d,m,y;
}DATE;
typedef struct employee
{
	int empcode; //24
	char empname[40];// 20
	DATE join_date;// 12
	float salary; // 4
}EMPLOYEE;
int main()
{
	int n,i,j;
	EMPLOYEE e1[4]={ 
						{1147,"kunal kamara",{13,3,2021},13000},
						{1148,"virat kohali",{21,6,2019},15000},
						{1149,"Alexander Arnold",{18,6,2019},17000},
						{1150,"sunil chattri",{16,6,2018},15000}
	
					},e2,e3[10],temp;
	FILE *fp1,*fp2;
	fp1=fopen("104_records.dat","wb");
	fwrite(e1,sizeof(e1),1,fp1);
	fclose(fp1);
	
	fp1=fopen("104_records.dat","rb");
	
	n=0;
	while(fread(&e2,sizeof(e2),1,fp1)!=0)
	{
		e3[n]=e2;
		n++;
	} // all data stored in e3 
	fclose(fp1);
	n=n-1; // n=3
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1-i;j++)
		{
			if( e3[j].join_date.y > e3[j+1].join_date.y )
			{
				temp=e3[j+1];
				e3[j+1]=e3[j];
				e3[j]=temp;
			}
			else
			{
				if(e3[j].join_date.y == e3[j+1].join_date.y)
				{
					if(e3[j].join_date.m > e3[j+1].join_date.m)
					{
						temp=e3[j+1];
						e3[j+1]=e3[j];
						e3[j]=temp;
					}
					else
					{
						if(e3[j].join_date.m == e3[j+1].join_date.m)
						{
							if(e3[j].join_date.d > e3[j+1].join_date.d)
							{
								temp=e3[j+1];
								e3[j+1]=e3[j];
								e3[j]=temp;
							}
						
						}
					}
					
				} // 2nd if year==same
			}
			
		} // j is end
	}
	fp2=fopen("104_records_target.dat","wb");
	fwrite(e3,240,1,fp2);	
	fclose(fp2);
	
	fp2=fopen("104_records_target.dat","rb");
	while(fread(&e2,sizeof(e2),1,fp2)!=0)
	{
		printf("code %d\nname %s\ndate %d/%d/%d\nsalary %f\n\n",e2.empcode,e2.empname,
						e2.join_date.d,e2.join_date.m,e2.join_date.y,e2.salary);
	}
	
	
					
}

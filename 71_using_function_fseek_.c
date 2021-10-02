#include<stdio.h>
struct date
{
	int d,m,y;
};
struct employee
{
	int id,sal;
	char name[40];
	struct date b_date;
}e;
int main()
{
	FILE *fp;
	fp=fopen("70_Employee_data.txt","r");
	printf("pos=%d\n",ftell(fp));
	
	fread(&e,60,1,fp);
	printf("pos=%d\n",ftell(fp));
	
	fread(&e,60,1,fp);
	printf("pos=%d\n\n",ftell(fp));
	
	printf("id=%d\nname=%s\nSal=%d\nBirth date=%d/%d/%d",e.id,e.name,e.sal,
			e.b_date.d,e.b_date.m,e.b_date.y);	
}

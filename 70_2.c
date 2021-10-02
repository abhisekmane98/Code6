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
}e1[5],e;
int main()
{
	int id,i,count=1;  // check id purpose
	
	FILE *fp;
	fp=fopen("70_Employee_data.txt","wb");

	for(i=0;i<=4;i++)
	{
		printf("Employee e1[%d]\n",i);
		
		printf("Enter the name  ");
		fflush(stdin);
		gets(e1[i].name);
		
		printf("Enter the id and salary separated by comma  ");
		scanf("%d,%d",&e1[i].id,&e1[i].sal);
		
		printf("Enter the Birthdate  ");
		scanf("%d%*c%d%*c%d",&e1[i].b_date.d,&e1[i].b_date.m,&e1[i].b_date.y);
		printf("\n");
	} 
	fwrite(&e1[0],60,5,fp);
	fclose(fp);
	
	
	// part 2 update
	
	fp=fopen("70_Employee_data.txt","rb+");
	
	printf("Enter the id of employee whose data you want to update  ");
	scanf("%d",&id);
	
	printf("\n");
	
	while( fread(&e,60,1,fp)!=0)
	{
		if(id==e.id)
		{
			printf("count %d\n",count);
			printf("Enter a new name  ");
			fflush(stdin);
			gets(e.name);
			
			printf("Enter new id and salary separated by comma  ");
			scanf("%d,%d",&e.id,&e.sal);
			
			printf("Enter a new Birthdate  ");
			scanf("%d%*c%d%*c%d",&e.b_date.d,&e.b_date.m,&e.b_date.y);
			
			break;
		}	
		count++;
		
	}
	printf("\n");
	printf("pos of fp=%d\n",ftell(fp));
	fseek(fp,-60,SEEK_CUR);
	printf("pos of fp=%d\n",ftell(fp));
	fwrite(&e,60,1,fp);
	
	// part3 read all again
	
	
	rewind(fp);  // fseek(fp,0,SEEK_SET)
	printf("pos of fp=%d\n",ftell(fp));
	
	while(fread(&e1[0],60,5,fp)!=0)
	{
		for(i=0;i<=4;i++)
		{
			printf("Employee e1[%d]\nid=%d\nname=%s\nSal=%d\nBirth date=%d/%d/%d\n\n",i,e1[i].id,e1[i].name,e1[i].sal,
			e1[i].b_date.d,e1[i].b_date.m,e1[i].b_date.y);
		}
	}
	printf("\npos of fp=%d",ftell(fp));
	fclose(fp);
	
}

#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i;
	STUDENT s;	     
	FILE *fp;
	
	fp=fopen("120_para_5.dat","r");
	
	for(i=0;i<=12;i++)
	{
		printf("i=%-2d,%d\n",i,ftell(fp));
		fread(&s,sizeof(STUDENT),1,fp);
		printf("%s,%d\n\n",s.name,s.age);
	}
	printf("i=%-2d,%d\n",i,ftell(fp));
	
	fseek(fp,220,SEEK_SET);
	printf("fseek -> %d",ftell(fp));
	fclose(fp);
	
}





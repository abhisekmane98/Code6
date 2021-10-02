#include<stdio.h>
#include<string.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i,j;
	STUDENT s[3][4];
	FILE *fp1,*fp2;

	fp1=fopen("81_sorting_student.dat","rb");
	fp2=fopen("82_copy_of_sorting_student.dat","wb");
	
	fread(&s,sizeof(s),1,fp1);
	fclose(fp1);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			strupr(s[i][j].name);
		}
	}
	fwrite(&s,sizeof(s),1,fp2);
	fclose(fp2);
	
	// to check final status of fp2
	fp2=fopen("82_copy_of_sorting_student.dat","rb");
	fread(&s,sizeof(s),1,fp2);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%-9s,%-2d  ",s[i][j].name,s[i][j].age);
		}
		printf("\n");
	}
}

#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i;
	STUDENT s[12]={
						 {"ruturaj",0},{"kails",1},{"rohit",2},{"sakshi",3},
					     {"aaditya",10},{"tejas",11},{"santosh",12},{"pankaj",13},
						 {"samruddhi",20},{"kristen",21},{"emma",22},{"brad",23}
															
				     },s1;
				     
	FILE *fp;
	fp=fopen("120_para_5.dat","w");
	printf("%-2d\n",ftell(fp));

	for(i=0;i<=11;i++)
	{
		fwrite(&s[i],sizeof(STUDENT),1,fp);
		printf("i=%-2d  %d\n",i,ftell(fp));
	}

	fwrite(&s[3],sizeof(STUDENT),1,fp);
	printf("i=%-2d  %d\n",i,ftell(fp));
	
	fseek(fp,220,SEEK_SET);
	printf("fseek -> %d",ftell(fp));
	fclose(fp);
}





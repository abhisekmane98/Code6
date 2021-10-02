#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

int main()
{
	int i;
	char ch;
	STUDENT s[12]={
						 {"ruturaj",0},{"kails",1},{"rohit",2},{"sakshi",3},
					     {"aaditya",10},{"tejas",11},{"santosh",12},{"pankaj",13},
						 {"samruddhi",20},{"kristen",21},{"emma",22},{"brad",23}
															
				     },s1;
				     
	FILE *fp;
	fp=fopen("121_para_5.dat","w");
	printf("fp-> %d\n",ftell(fp));

	for(i=0;i<=11;i++)
	{
	    fwrite(&s[i],sizeof(STUDENT),1,fp);
		printf("i=%-2d  fp-> %d\n",i,ftell(fp));
	}
	
	fseek(fp,220,SEEK_SET);
	printf("fseek -> %d\n",ftell(fp));
	ch=fgetc(fp);
	printf("%d",ch);
}





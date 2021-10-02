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
					     {"aaditya",10},{"tejas                                 ab",11},{"santosh",12},{"pankaj",13},
						 {"samruddhi",20},{"kristen",21},{"emma",22},{"brad",23}
															
				     },s1;
				     
	FILE *fp;
	fp=fopen("121_para_5.dat","w");
	printf("%d\n",ftell(fp));

	for(i=0;i<=11;i++)
	{
	    fwrite(&s[i],sizeof(STUDENT),1,fp);
		printf("i=%d  %d\n",i,ftell(fp));
	}

	fwrite(&s[3],sizeof(STUDENT),1,fp);
	printf("i=%d  %d\n",i,ftell(fp));
	fclose(fp);
	
	
	
	fp=fopen("121_para_5.dat","r");
	
	fseek(fp,221,SEEK_SET);
	printf("fseek -> %d\n",ftell(fp));
	for(i=0;i<=39;i++)
	{
	    ch=fgetc(fp);
		printf("%c",ch);
	}
	getch();
	
	fread(&s1,sizeof(STUDENT),1,fp ); 
	printf("%s %d\n",s1.name,s1.age);
	printf("%d,%d\n",i,ftell(fp));
	
	fclose(fp);
	
}





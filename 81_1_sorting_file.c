#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;
int main()
{
	int i,j;
	char temp[40];	
	FILE *fp;
	fp=fopen("81_sorting_student.dat","wb");		
	STUDENT s2[3][4]={
						{
							{"ruturaj",0},{"kails",1},{"rohit",2},{"sakshi",3}
						},
						
						{
							{"aaditya",10},{"tejas",11},{"santosh",12},{"pankaj",13}
						},
						
						{
							{"samruddhi",20},{"kristen",21},{"emma",22},{"brad",23}
						}
																									
				     },s3[3][4];
	fwrite(&s2,sizeof(s2),1,fp);
	fclose(fp);	
	
	
	fp=fopen("81_sorting_student.dat","rb");
	fread(&s3,sizeof(s3),1,fp);
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%-9s,%-2d	",s3[i][j].name,s3[i][j].age);
		}
		printf("\n\n");
	}
	
	rewind(fp);
	for(k=0;k<=10;k++) // repeat process for 11 times
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				n=strcmp(s3[i][j].name,s3[i][j+1].name);
				if(n>0) // Totally wrong
				{
					strcpy( s3[i][j+1].name, temp);
					strcpy(s3[i][j].name, s3[i][j+1].name);
					strcpy(temp, s3[i][j].name);
				}
			}
			n=strcmp(s3[i][j].name,s3[i+1][0].name);
			if(i!=2)
			{
				if(n>0)
				{
					strcpy( s3[i+1][0].name, temp);
					strcpy(s3[i][j].name, s3[i+1][0].name);
					strcpy(temp, s3[i][j].name);
				}	
			} //j
		}	
	}//k
	
				   	
}

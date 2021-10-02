#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;

void print(STUDENT (*)[4]);
int main()
{
	int i,j,k,n,count=1;
	STUDENT temp;	
	FILE *fp;	
	
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
				     
	fp=fopen("81_sorting_student.dat","wb");	
	fwrite(&s2,sizeof(s2),1,fp);
	fclose(fp);	
	
	
	fp=fopen("81_sorting_student.dat","rb");
	fread(&s3,sizeof(s3),1,fp);
	fclose(fp);
	
	print(&s3[0] ); 
	
	for(k=0;k<=10;k++) // repeat process for 11 times
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				n=strcmp(s3[i][j].name,s3[i][j+1].name);
				if(n>0) 
				{
					temp=s3[i][j+1];
					s3[i][j+1]=s3[i][j];
					s3[i][j]=temp;
				}
			} // j finish
			// j=3 now think.....
			n=strcmp(s3[i][j].name,s3[i+1][0].name);
			if(i!=2)
			{
				if(n>0)
				{
					temp=s3[i+1][0];
					s3[i+1][0]=s3[i][j];
					s3[i][j]=temp;
				}	
			} 
			
		}// i finish
		
	}//k finish
	
	print(&s3[0]);
				   	
}

void print(STUDENT (*s)[4])  // s =&s3[0]
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%-9s,%-2d	",s[i][j].name, s[i][j].age);
		}
		printf("\n");
	}
	printf("\n");
}

 

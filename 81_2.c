#include<stdio.h>
typedef struct student
{
	char name[40];
	int age;
}STUDENT;
int main()
{
	int i,j,k,n,count=1;
	STUDENT temp;	
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
																									
				     },s3[3][4],s4[3][4];
	fwrite(&s2,sizeof(s2),1,fp);
	fclose(fp);	
	
	
	fp=fopen("81_sorting_student.dat","rb");
	fread(&s3,sizeof(s3),1,fp);
	fclose(fp);
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%-9s,%-2d	",s3[i][j].name,s3[i][j].age);
		}
		printf("\n");
	}
	printf("\n");

	
	for(k=0;k<=10;k++) // repeat process for 11 times
	{
		printf("k=%d\n",k);
		for(i=0;i<=2;i++)
		{
			printf("i=%d\n",i);
			for(j=0;j<=2;j++)
			{
				printf("j=%d  ",j);
				n=strcmp(s3[i][j].name,s3[i][j+1].name);
				printf("%s,%s  ",s3[i][j].name, s3[i][j+1].name );
				if(n>0) 
				{
					temp=s3[i][j+1];
					s3[i][j+1]=s3[i][j];
					s3[i][j]=temp;
					printf("%s,%s\n",s3[i][j].name, s3[i][j+1].name );
				}
				else
					printf("as it is\n");
			
			} // j finish
			// j=3 now think.....
			printf("j=%d  ",j);
			n=strcmp(s3[i][j].name,s3[i+1][0].name);
			if(i!=2)
			{
				printf("i  %s,%s  ",s3[i][j].name, s3[i+1][0].name );
				if(n>0)
				{
					temp=s3[i+1][0];
					s3[i+1][0]=s3[i][j];
					s3[i][j]=temp;
					printf("%s,%s\n\n",s3[i][j].name, s3[i+1][0].name );
				}	
				else
					printf("ias it is\n\n");
			} 
			else
				puts("No change\n\n");
		}// i finish	
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=3;j++)
			{
				printf("%-9s,%-2d	",s3[i][j].name,s3[i][j].age);
			}
			printf("\n");
		}
		printf("\n");
	}//k finish
	
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
				printf("%-9s,%-2d	",s3[i][j].name,s3[i][j].age);
		}
		printf("\n");
	}
	printf("\n");

	
	
	
	
				   	
}

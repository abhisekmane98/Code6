#include<stdio.h>
typedef struct
{
	int n;
	char name[20];
}STUDENT;

int main()
{
		int n;
		STUDENT s[5]={ 
					    {1,"vedant"},
						{2,"rohit"},
						{3,"kailash"},
						{4,"Deepak"},
						{5,"Jeneliya"}
					},s1;
		FILE *fp;
		fp=fopen("106_students_data.dat","wb");
		fwrite(s,24*5,1,fp);
		fclose(fp);
		
		fp=fopen("106_students_data.dat","rb");
		printf("Enter the Roll.No. of student\n");
		scanf("%d",&n);
		
		while(fread(&s1,24,1,fp)!=0 )
		{
			if(n==s1.n)
				printf("%s",s1.name);
		}	
		fclose(fp);	
}

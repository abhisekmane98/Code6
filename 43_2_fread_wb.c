#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i=1;
	char s[20];
	FILE *fp;
	fp=fopen("43_file.dat","rb");
	if(fp==NULL)
	{
		printf("file can't open");
		exit(1);
	}
	
//	while( a=(fread(&s,20,1,fp))!=0)  wrong but fark nahi pad raha hai
//                     a=1!=0
//                     a=true
//                     a=1   but concept is wrong

	while( fread(&s,20,1,fp)!=0 )
	{
		printf("16=%c ",s[16]);
		printf("17=%c ",s[17]);
		printf("18=%c ",s[18]);
		printf("19=%c ",s[19]);
		printf("0=%c ",s[0]);
		printf("1=%c ",s[1]);
		printf("2=%c ",s[2]);
		printf("3=%c ",s[3]);
	
		printf("%s\n\n",s);
		
	}
	getch();
	
}

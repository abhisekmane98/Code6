#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i=1;
	char s[56];
	FILE *fp;
	fp=fopen("43_file.dat","rb");
	if(fp==NULL)
	{
		printf("file can't open");
		exit(1);
	}
	
	 fread(&s,14,4,fp);
//	{
		printf("%s\n",s);
//	}
/*	{
		
		printf("%d. %s\n",i,s);
		i++;
		printf("10=%c ",s[10]);
		printf("11=%c ",s[11]);
		printf("12=%c ",s[12]);
		printf("13=%c ",s[13]);
		printf("0=%c ",s[0]);
		printf("1=%c ",s[1]);
		printf("2=%c ",s[2]);
		printf("3=%c\n\n",s[3]);
	}*/
	
	for(i=0;i<=55;i++)
	{
		printf("%d,%c\n",i,s[i]);
	}
	
	getch();
	
}

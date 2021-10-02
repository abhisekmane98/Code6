#include<stdio.h>
int main()
{
	int k;
	FILE *fp;
	fp=fopen("57_file.txt","w");
	char *s="raju";
//	printf("%d",sizeof(s));
//	getch();
	k=fwrite(s,8,1,fp);
	printf("%d",k);
	fclose(fp);
	getch();
}

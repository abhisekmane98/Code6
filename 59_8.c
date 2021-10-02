#include<stdio.h>
int main()
{
	int k;
	FILE *fp;
	fp=fopen("57_file.txt","w");
	char s[20]="raju is a poor boy";
//	printf("%d",sizeof(s));
//	getch();
	k=fwrite(s,20,1,fp);
	printf("%d",k);
	fclose(fp);
	getch();
}

#include<stdio.h>
int main()
{
	int k;
	FILE *fp;
	fp=fopen("57_file.txt","w");
	char s[46]="raju is a poor\nboy who wants to be a rich and";// 45 chars + \n
//	printf("%d",sizeof(s));
//	getch();
	k=fwrite(s,46,1,fp);
	printf("%d",k);
	getch();
	fclose(fp);
}

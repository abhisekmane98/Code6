#include<stdio.h>
int main()
{
	int k;
	FILE *fp;
	fp=fopen("57_file.txt","w");
	char *s="raju is a poor boy";  // at a time memory alloc it is not necessary you get a memory in continious mannne so 
	                         //   you use malloc or s[60]
//	printf("%d",sizeof(s));
//	getch();
	k=fwrite(s,8,4,fp);
	printf("%d",k);
	fclose(fp);
	getch();
}

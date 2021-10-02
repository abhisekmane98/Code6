#include<stdio.h>
#include<string.h>
int main()
{
	char s1[60]="Nepolian is greatest emperor of all time\n",s2[60]="i love girls and there cloths too much",s[60];
	FILE *fp;
	fp=fopen("87_data.txt","w");
	printf("%d,",ftell(fp));
	
	fputs(s1,fp);
	printf("%d,",ftell(fp));
	
	fputs(s2,fp);
	printf("%d",ftell(fp));
	
	fclose(fp);
}

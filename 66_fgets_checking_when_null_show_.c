#include<stdio.h>
int main()
{
	int k,i;
	char s[11];
	FILE *fp;
	fp=fopen("57_file.txt","r");
	for(i=0;i<=5;i++)
	{
		k=fgets(s,11,fp); // acess 10 characters+'\0' at a time 
		printf("%d. k=%d,string Acessed %s\n",i,k,s); // k is base adress of s[11] means &s[0]
	}
	
	
}

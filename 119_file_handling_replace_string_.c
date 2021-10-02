#include<stdio.h>
#include<string.h>
void replace(char*,int,char*,char*,FILE*);
int main()
{
	char s[40],s1[]="we",s2[]="ki";
	FILE *fp1,*fp2;
	fp1=fopen("119_para_.txt","r");
	fp2=fopen("119_updated_.txt","w");
	
	while(fgets(s,sizeof(s),fp1)!=NULL)
	{
		replace(s,sizeof(s),s1,s2,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}

void replace(char *s,int size,char *s1,char *s2,FILE *fp)
{
	int count=0,i,j;
	char t[size],*p;
	strcpy(t,s);
	while(strstr(t,s1)!=NULL)
	{
		p=strstr(t,s1);
		p=p+strlen(s1);
		strcpy(t,p);
		count++;	
	}
	for(i=1;i<=count;i++)
	{
		p=strstr(s,s1);
		
		for(j=0;j<=strlen(s2)-1;j++)
		{
			*(p+j)=s2[j];
		}
	}
	
	fputs(s,fp);
}


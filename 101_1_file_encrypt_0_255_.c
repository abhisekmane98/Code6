#include<stdio.h>
#include<string.h>
int main()
{
	int sh,i; // shift
	char s[60];
	FILE *fp1,*fp2,*fp3;
	
	fp1=fopen("101_file_source.txt","r");
	fp2=fopen("101_file_target.txt","w");
	
	printf("Enter the shift you want for encryption  ");
	
	scanf("%d",&sh);
	sh=sh%256;

	while( (fgets(s,sizeof(s),fp1) )!=NULL )
	{
		printf("%d,%d\n",sizeof(s),strlen(s));
		for(i=0;i<=strlen(s)-1;i++)
		{
			if( (s[i]+sh)>=128)
			{
				s[i]=-129+((s[i]+sh)-127);
			}
			else
				s[i]=s[i]+sh;
				
		}
		
		fputs(s,fp2);
		
	}
	
	fclose(fp1);
	fclose(fp2);
	fp2=fopen("101_file_target.txt","r");
	
	while((fgets(s,sizeof(s),fp2))!=NULL)
	{
		printf("%s",s);
	}
	puts("\n\n");
	rewind(fp2);
	sh=256-sh;
	fp3=fopen("101_file_decrypt_.txt","w");
	while( (fgets(s,sizeof(s),fp2) )!=NULL )
	{
		for(i=0;i<=strlen(s)-1;i++)
		{
			if( (s[i]+sh)>=128)
			{
				s[i]=-129+((s[i]+sh)-127);
			}
			else
				s[i]=s[i]+sh;
				
		}
		
		fputs(s,fp3);
		
	}
	fclose(fp3);
	fclose(fp2);
	fp3=fopen("101_file_decrypt_.txt","r");
	while((fgets(s,sizeof(s),fp3))!=NULL)
	{
		printf("%s",s);
	}
	
}

#include<stdio.h>
#include<string.h>
void r_w(char*, FILE *, FILE*,int);
void read(char*,FILE *fp);

int main()
{
	int sh,i; // shift
	char s[60];
	FILE *fp1,*fp2,*fp3;
	
	fp1=fopen("101_file_source.txt","r");
	fp2=fopen("101_file_target.txt","w");
	
	puts("your given file\n");
	read(s,fp1);
	
	printf("Enter the shift you want for encryption  ");
	scanf("%d",&sh);
	sh=sh%256;
	
	r_w(s,fp1,fp2,sh);  // encryption done
	fclose(fp1);
	fclose(fp2);
	
	
	fp2=fopen("101_file_target.txt","r");
	puts("your given file encrypted take look\n");
	read(s,fp2);
	rewind(fp2);
	
	sh=256-sh;
	fp3=fopen("101_file_decrypt_.txt","w");
	
	r_w(s,fp2,fp3,sh); // decryption done
	fclose(fp3);
	fclose(fp2);
	
	fp3=fopen("101_file_decrypt_.txt","r");
	puts("decrypting the file\n");
	read(s,fp2);
}

void r_w(char *s,FILE *fp1,FILE *fp2,int sh)
{
	puts("k");
	printf("sizeof s  %d\n",strlen(s));
	getch();
	int i,count=1;
	while( (fgets(s,sizeof(s),fp1) )!=NULL )
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
		fputs(s,fp2);	
		printf("%d",count++);
		getch();
	}	
}

void read(char *s, FILE *fp)
{
	while((fgets(s,sizeof(s),fp))!=NULL)
	{
		printf("%s",s);
	}
	puts("a\n\n");
}

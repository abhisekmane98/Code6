#include<stdio.h>
#include<string.h>
int main()
{
	int flag1=1,flag2=1;
	char s1[60],s2[60],s3[60],*ch1,*ch2;
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("85_1.txt","r");
	fp2=fopen("85_2.txt","r");
	fp3=fopen("85_3.txt","w");
	
	while(1) 
	{
		ch1=fgets(s1,sizeof(s1),fp1);
		ch2=fgets(s2,sizeof(s2),fp2);
		
		if(ch1!=NULL && ch2!=NULL)
		{
			fputs(s1,fp3);
			fputs(s2,fp3);
			continue; // to stop further checks
		}
		
		if(ch1==NULL && ch2==NULL)
			break;
		
		if(ch1==NULL)
		{
			if(flag1==1)
			{
				printf("\n");// bhai print nahi karna hai file me put karna hai
				flag1==0;
			}
			fputs(s2,fp3);
		}
			
		if(ch2==NULL)
		{
			
			if(flag2==1)
			{
				printf("\n");// bhai print nahi karna hai file me put karna hai
				flag2==0;
			}	
			fputs(s1,fp3);
		}
		
		
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	
	// to check status of fp3
	fp3=fopen("85_3.txt","r");
	while(fgets(s3,sizeof(s3),fp3)!=NULL)
	{
		printf("%s",s3);
	}
	fclose(fp3);
}

#include<stdio.h>
#include<string.h>
int main()
{
	int k1,k2;
	char s1[60],s2[60],s3[60];
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("85_1.txt","r");
	fp2=fopen("85_2.txt","r");
	fp3=fopen("85_3.txt","w");
	
	while( !( fgets(s1,sizeof(s1),fp1)==NULL && fgets(s2,sizeof(s2),fp2)==NULL) )  // same reason as back 
	{
		printf("%-3d,%-3d  ",ftell(fp1), ftell(fp2));
		
		fseek(fp1,-strlen(s1),SEEK_CUR);
		fseek(fp2,-strlen(s2),SEEK_CUR);
		
		printf("%-3d,%-3d  ",ftell(fp1), ftell(fp2));
		
		if(fgets(s1,sizeof(s1),fp1)!=NULL)
			fputs(s1,fp3);
		if(fgets(s2,sizeof(s2),fp2)!=NULL)
			fputs(s2,fp3);
			
		printf("%-3d,%-3d  \n",ftell(fp1), ftell(fp2));
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

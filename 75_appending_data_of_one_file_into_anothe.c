#include<stdio.h>
int main()
{
	int a[4]={2,3,5,7};
	int b[5]={11,13,17,19,23};
	int b2[5],a2[9],i;
	FILE *fp1,*fp2;
	fp1=fopen("75_1.dat","wb");
	fp2=fopen("75_2.dat","wb");
	fwrite(a,16,1,fp1);
	fwrite(b,20,1,fp2);
	fclose(fp1); // fp1 is deactivated
	fclose(fp2);
	// to append data of file 75_2.dat in file 75_1.dat
	
	fp1=fopen("75_1.dat","ab+"); // 
	fseek(fp1,0,SEEK_END);
	fp2=fopen("75_2.dat","rb");
	fread(b2,20,1,fp2);
	fwrite(b2,20,1,fp1);
	// done now checking
	
	rewind(fp1);
	fread(a2,sizeof(a2),1,fp1);
	for(i=0;i<=8;i++)
	{
		printf("%d,",a2[i]);
	}
	
	
	
}

#include<stdio.h>
int main()
{
	int k;
	char s[46]=" 1769\nOne of the greatest Emperore\nof all time";
	FILE *fp;
	fp=fopen("43_file.dat","wb");
	k=fwrite(s,sizeof(s)/2,2,fp);
	printf("%d,",k);
	k=fwrite(s,sizeof(s)/2,1,fp);
	printf("%d",k);
//	fwrite(s,sizeof(s),1,fp);
	
}

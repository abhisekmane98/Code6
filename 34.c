#include<stdio.h>
int main()
{
	char buffer[50];
	int no=97,x;
	double val=2.34174;
	char name[10]="shweta";
	
	sprintf(buffer,"%d%lf%s",no,val,name);
	x=sscanf(buffer,"%2d %3.3f %s",&no,&val,name);
	
	printf("%s\n",buffer);
	printf("%d %lf %s\nx=%d",no,val,name,x);
}

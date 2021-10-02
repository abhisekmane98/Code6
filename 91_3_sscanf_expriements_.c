#include<stdio.h>
int main()
{
	int k,a;
	float b;
	char s[]="i love to kiss girls panties\n 80 40.50 andwearthem",s1[40],s2[40];
	 
	k=sscanf(s,"%*[^\n] %d %f %s",&a,&b,s2);  //  %*s to skip the string
	
	printf("%d\n",k);
	printf("%d\n%f\n%s",a,b,s2);
}

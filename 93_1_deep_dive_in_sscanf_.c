#include<stdio.h>
int main()
{
	int k,a;
	float b;
	char s[]="i love to kiss girls panties? 80 40.50 andwearthem",s1[40],s2[40];
	 
	k=sscanf(s,"%[^?]%*c %d %f %s",s1,&a,&b,s2); 
	
	printf("%d\n",k);
	printf("%s\n%d\n%f\n%s",s1,a,b,s2);
}

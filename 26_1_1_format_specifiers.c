#include<stdio.h>
int main()
{
	short int a=32767;                             // 2*15-1   32767
	int b=2147483647,i;        			           // 2*31-1   2147483647
	long int c=2147483647;     			           // 2*31-1
	long long int d=9223372036854775807;           // 2*63-1   9223372036854775807 

	
	short unsigned int e=65535;          // 2*16-1   65535
	unsigned int f=4294967295;           // 2*32-1   4294967295
	long unsigned int g=4294967295;      // 2*32-1   
	long long unsigned int h=18446744073709551615;          // 2*64-1   18446744073709551615 just give unnecesssary warning
	
	
	printf("%d,%d,%d,%d\n",sizeof(short int),sizeof(int),sizeof(long int),sizeof(long long int));
	printf("%d,%d,%d,%d\n",sizeof(short int),sizeof(int),sizeof(long int),sizeof(long long int));
	
	printf("signed: %hd,%d,%ld,%lld \nunsigned: %hu,%u,%lu,%llu",a,b,c,d,e,f,g,h);
}

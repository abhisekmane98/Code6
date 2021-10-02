#include<stdio.h>
int main()
{
	short int a=32767;          // 2*15-1
	int b=2147483647,i;         // 2*31-1
	long int c=2147483647;      // 2*31-1
	long long int d=1;          // 2*63-1
	

	
	short unsigned int e=65535; // 2*16-1
	unsigned int f;             // 2*32-1
	long unsigned int g;        // 2*32-1
	long long unsigned int h=1; // 2*64-1

	// d
	for(i=1;i<=63;i++)
	{
		d=d*2;
	}
	d=d-1; // 9223372036854775807
	
	//f
	for(i=1;i<=32;i++)
	{
		f=f*2;
	}
	f=f-1;
	
	//g
	for(i=1;i<=32;i++)
	{
		g=g*2;
	}
	g=g-1;
	
	//h
	for(i=1;i<=64;i++)
	{
		h=h*2;
	}
	h=h-1; // 18446744073709551615
	
	printf("%d,%d,%d,%d\n",sizeof(short int),sizeof(int),sizeof(long int),sizeof(long long int));
	printf("%d,%d,%d,%d\n",sizeof(short int),sizeof(int),sizeof(long int),sizeof(long long int));
	
	printf("signed: %hd,%d,%ld,%lld \nunsigned: %hu,%u,%lu,%llu",a,b,c,d,e,f,g,h);
}

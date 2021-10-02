#include<stdio.h>
union item
{
	int x;
	float y;
	char z;	
};

int main()
{
	union item i1;
	i1.x=4;
	printf("%d,%.2f,%c\n",i1.x,i1.y,i1.z);
		
	i1.y=32.35;
	printf("%d,%.2f,%c\n",i1.x,i1.y,i1.z);
	
	i1.z='a';
	printf("%d,%.2f,%c\n",i1.x,i1.y,i1.z);
	
	printf("%.2f\n",i1.y);
	
	i1.x=54;
	printf("%.2f",i1.y);
	
}

#include<stdio.h>
void read(int[]);
int main()
{
	int a[4]={3,2,5,6};
	read(a);
	printf("main() %d",sizeof(a));
}
void read(int a[])
{
	int i;
	printf("%d\n",sizeof(a));
	for(i=0;i<=3;i++)
	{
		printf("%d,",a[i]);
	}

}

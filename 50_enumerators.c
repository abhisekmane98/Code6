#include<stdio.h>

int main()
{
	int p;
	int jan=1,feb=2,mar=3,apr=4,may=5,jun=6
			,july=7,aug=8,sept=9,oct=10,nov=11,dec=12;
	
	printf("Enter any month");
	scanf("%d",&p);
	if(p>=2 && p<=5)
		printf("summer");
	else
		if(p>=6 && p<=9)
			printf("Rainy");
		else
			printf("winter");
}

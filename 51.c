#include<stdio.h>
enum month
{
	jan=1,feb,mar,apr,may,jun
			,july,aug,sept,oct,nov,dec
};
int main()
{
	enum month p;
	
	printf("Enter any month");
	scanf("%s",&p);
	
	if(p>=2 && p<=5)
		printf("summer");
	else
		if(p>=6 && p<=9)
			printf("Rainy");
		else
			printf("winter");
}

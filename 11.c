#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct match
{
	struct date d;
	char T1_name[20];
	char T2_name[20];
};



int main()
{
	struct match _13={17,1,2020,"liverpool","Manchester"},_14;
	_14=_13;
	printf("%d/%d/%d\n%s Vs %s",_14.d.day,_14.d.month,_14.d.year,_14.T1_name,_14.T2_name);
}

#include<stdio.h>
#include"kristen\stewart\80_difference.h"
#include"kristen\80_sum.h"
#include"..\80_product.h"
#include"..\..\80_divison.h"
#include"f:\movies\80_square.h"
int main()
{
	int a=3,b=2,count=1;
	int s,d,p,d2,s2;
	
	s=sum(a,b);
	d=difference(a,b);
	p=product(a,b);
	d2=division(a,b);
	s2=square(a);
	
	printf("%d. %d\n",count++, s );
	printf("%d. %d\n",count++,d);
	printf("%d. %d\n",count++,p);
	printf("%d. %d\n",count++,d2);
	printf("%d. %d\n",count++,s2);
}

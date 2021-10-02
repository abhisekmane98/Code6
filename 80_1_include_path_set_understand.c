#include<stdio.h>
#include"kristen\stewart\80_difference.h"
#include"kristen\80_sum.h"
#include"..\80_product.h"
#include"..\..\80_divison.h"
#include"f:\movies\80_square.h" // absoulte path
//#include"..\..\..\f:\movies\80_square.h" 
int main()
{
	int a=3,b=2,count=1;
	
	printf("%d. %d",count++,sum(a,b) ) ;
	printf("%d. %d",count++,differnce(a,b) );
	printf("%d. %d",count++,product(a,b) );
	printf("%d. %d",count++,division(a,b) );
	printf("%d. %d",count++,square(a) );
}

#include<stdio.h>
int compare(const void*,const void*);
int main()
{
	int a[]={1,7,4,9,2,5,11,8};
	int i;
	qsort(a,8,sizeof(int),compare);
	for(i=0;i<=7;i++)
	{
		printf("%d,",a[i]);
	}
	
}

int compare(const void *p,const void *q)
{
	int l=*(int*)p, m=*(int*)q;
	return (l-m);  // if l>m then q p 
				 //  if m>l then p q
	
}

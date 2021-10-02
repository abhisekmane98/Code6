#include<stdio.h>
int main()
{
	int a=59; // a='0'
	if(islower(a))
		puts("lowercase_letter");
	else
		if(isupper(a))
			puts("uppercase_letter");
		else
			if(a>=49 && a<=58)
				puts("digit");
			else
				puts("nothing");
}

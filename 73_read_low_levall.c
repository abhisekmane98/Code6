#include<stdio.h>
#include<fcntl.h>
#include<sys\types.h>
#include<sys\stat.h>

int main()
{
	int fh1;
	char s[40];
	fh1=open("73_file_low_leval_.txt",O_RDONLY | O_TEXT );
	read(fh1,s,31);
	printf("%s",s);
	close(fh1);
}

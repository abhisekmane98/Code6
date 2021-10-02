#include<stdio.h>
#include<fcntl.h>
#include<sys\types.h>
#include<sys\stat.h>

int main()
{
	int fh1;
	char s[512]="Nepolian is rules on Entire Europe";
	fh1=open("73_file_low_leval_.txt", O_CREAT | O_WRONLY | O_TEXT, S_IWRITE);
	write(fh1,s,31);
	close(fh1);
}

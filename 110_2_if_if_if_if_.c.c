#include<stdio.h>
int main()
{
	int i;
	char s[60]="Abhishke the  a  an greathemperanor tathe thththe the";
	for(i=0;i<=56;i++)
	{
		if(s[i]==32)
			if(s[i+1]=='t')
				if(s[i+2]=='h')
					if(s[i+3]=='e')
						if(s[i+4]==32 || s[i+4]=='\0')
				    	{
					   		s[i]='v';
							s[i+1]='w';
							s[i+2]='x';
							s[i+3]='y';
							s[i+4]='z';
						}
		if(s[i]==32)
			if(s[i+1]=='a')
				if(s[i+2]==' ' || s[i+2]=='\0')
				{
					s[i]='p';
					s[i+1]='q';
					s[i+2]='r';
				}
		
		if(s[i]==' ')
			if(s[i+1]=='a')
				if(s[i+2]=='n')
					if(s[i+3]==' ' || s[i+3]=='\0')
					{
						s[i]='j';
						s[i+1]='k';
						s[i+2]='l';
						s[i+3]='m';
					}
	}
	printf("%s",s);
}

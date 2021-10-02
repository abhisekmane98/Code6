#include<stdio.h>
#include<string.h>
void replace(char*,char*);
int main()
{
	char s[65]="a brave boy can built an onion with the help of housethe the";
	char s1[4]=" a ",s2[5]=" an ",s3[6]=" the ";

	replace(s,s1);

	printf("%s\n",s);

//	replace(s,s2);
//	printf("%s\n",s);
	
//	replace(s,s3);
//	printf("%s\n",s);
	
}

void replace(char *s,char *s1) // pointer s and s1 can determine length(\n) of string but not size
{
	int i,j=0,flag,count;
	for(i=0; i<=( strlen(s)-strlen(s1) ) ;i++)
	{
		printf("i=%d,j=%d\n",i,j);
		flag=0;
		count=i;
		printf("%c,%c\n",s[i],s1[j]);
		while(s[i]==s1[j])
		{
			puts("into the while loop");
			i++;
			j++;
	
			if(j==strlen(s1))
			{
				puts("string matched");
				flag=1;
				j=0;
				i=i-strlen(s1);
				
				while(j<=(strlen(s1)-1) )
				{
					s[i]='x';
					i++;
					j++;
				}
				i--;
				j=0;
				break;
			}
		}
		if(flag==0)
		{
			i=count;
			j=0;
		}
		getch();
		printf("New new\n\n");

		
	} 
}

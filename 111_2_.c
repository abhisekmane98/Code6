#include<stdio.h>
#include<string.h>
void replace(char*,char*);
int main()
{
	char s[65]="an brave boy can a built an onion with the help of housethe the";
	char s1[4]=" a ",s2[5]=" an ",s3[6]=" the ";

	replace(s,s1);

	printf("%s\n",s);

	replace(s,s2);
	printf("%s\n",s);
	
	replace(s,s3);
	printf("%s\n",s);
	
}

void replace(char *s,char *s1) // pointer s and s1 can determine length(\n) of string but not size
{
	int i=0,j=1,flag,count;
	
	while(s[i]==s1[j])  // if starts with lette a,an,the
	{
		i++;
		j++;
		if(j==strlen(s1) )
		{
			i=0;
			j=1;
			while(j<=strlen(s1)-1)
			{
				s[i]='x';
				i++;
				j++;
			}
			break;	
		}
	}
	i=0;
	j=0;
	
	for(i=0; i<=( strlen(s)-strlen(s1) ) ;i++)
	{
		flag=0;
		count=i;
	
		while(s[i]==s1[j])
		{
			i++;
			j++;
	
			if(j==strlen(s1))
			{
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
		
	} // i=strlen(s)-strlen(s1)+1 
	// j=0
	
	while(s[i]==s1[j])   // if ends with lette a,an,the
	{
		i++;
		j++;
		if(j==strlen(s1)-1 )
		{
			j=j-( strlen(s1)-1 ); // j=0;
			i=i-( strlen(s1)-1 );
			while(j<=( strlen(s1)-2 ))
			{
				s[i]='x';
				i++;
				j++;
			}
			break;
		}
		
	}
}

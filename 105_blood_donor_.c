#include<stdio.h>
#include<string.h>
typedef struct donor
{
	char name[20];
	char address[40];
	int age;
	char blood_type[3]; //4
}DONOR; // 68

int main()
{
	FILE *fp1;
	
	DONOR d1[4]={
					{"Vedant","T20 Colony, Parbhani",20,"AB+"}, 
					{"Abhishek","Samta Colony, sangli",22,"A+"},
		    		{"Aashutosh Mane","Laxmi hotel, kolhapur",19,"B+"},
			 	  	{"Kailsh","Near Railway, Gulbarga",23,"B+"}
				},d;
	fp1=fopen("105_donor_data.dat","wb");
	fwrite(d1,68*4,1,fp1);			
	fclose(fp1);
	
	fp1=fopen("105_donor_data.dat","rb");
	while(fread(&d,68,1,fp1)!=0)
	{
		printf("%s\n",d.blood_type);
		if(d.age<25 && strcmp(d.blood_type,"B+")==0 )
		{
			printf("%s,%s\n", d.name, d.address);
		}
	}
	fclose(fp1);
}

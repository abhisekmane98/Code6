#include<stdio.h>
typedef struct
{
	char name[40];
	int age;
}STUDENT;
void print(STUDENT*);
int main()
{
	STUDENT s1={"bonapart",54};
	print(&s1);
}

void print(STUDENT *s)
{
	printf("%s,%d", s->name, s->age);
	printf("%s,%d", *s.name, *s.age); // give error
	printf("%s,%d", (*s).name, (*s).age) ;
	
	
}

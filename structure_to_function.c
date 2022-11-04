#include<stdio.h>
#include<string.h>
struct student {
	int age;
	char name[100];
	char div[28];
};
void printinfo(struct student s1);
int main()
{
	struct student s1={20,"nikhil","B"};
	printinfo(s1);
	
}
void printinfo(struct student s1)//structure using function
{
	printf("the age of student is =%d",s1.age);
	printf("the name of student is%s",s1.name);
	printf("the div of student is=%s",s1.div);
}

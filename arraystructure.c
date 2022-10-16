#include<stdio.h>
#include<String.h>
struct student
{
	int rollno;
	int cgpa;
	float percentage;
	char name[199];
};
int main()
{
/*	//structure using the arry format
	struct student p[100];
	p[0].rollno=200;
	p[0].cgpa=300;
	p[0].percentage=35;
	strcpy(p[0].name,"nikhil");
	printf("the student name =%s\n",p[0].name);
	printf("the student ncgpa =%d\n",p[0].cgpa);
	printf("the student name =%f\n",p[0].percentage);
	printf("the student rollno =%s\n",p[0].rollno);
	*/
	//strcture using the initializing by arry method
	struct student p={123,99,77.9,"nikhil"
	
	};
	printf("student data=%d\n",p.rollno);
	struct student *ptr=&p;
	printf("student data=%d\n",(*ptr).rollno);
	printf("student data=%s\n",ptr->name);//with using arrow method
	return 0;
}

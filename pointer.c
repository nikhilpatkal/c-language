#include<Stdio.h>
int main()
{
	int age=20;
	int *ptr=&age;
	int _age=*ptr;
	printf("the value of _age is%d\n",_age);
	printf("the value of *ptr%d\n",*ptr);
	printf("the value of &age%d",&age);
	return 0;
	
}

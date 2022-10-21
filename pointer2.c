#include<stdio.h>
int main()
{
	int a=100;
	int *ptr=&a;//and simple *ptr store the address of value
	int **pptr=&ptr;//**pptr pointer to pointer store the address of pointer
	printf("**ptr=%d",**pptr);
	return 0;
	
}

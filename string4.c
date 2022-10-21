//program to find the length of string

#include<stdio.h>
int main()
{
	int i;
	int count=0;
	char name[200];
	fgets(name,200,stdin);
	//puts(name);
	for(i=0;name[i]!='\0';i++)
	{
	count++;
		
	}
	printf("%d",count-1);
}

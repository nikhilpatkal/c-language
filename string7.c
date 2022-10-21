//strcmp use to compayr by asci value 

#include<stdio.h>
#include<string.h>
int main()
{
	char name1[10]="a";
	char name2[10]="x";
	printf("%d",strcmp(name1,name2));//it compair the ascii value and subtract between two (name1-name2)
	return 0;
}

#include<stdio.h>
#include<string.h>//this string libaray
int main()
{
//	char name[200];
//	fgets(name,200,stdin);
//	int length=strlen(name);
//	printf("the length of string is=%d",length-1);

char oldstr[]="nikhil";//after changes old contain dipak
char newstr[]="dipak";//this sholud not chage it remain dipak
strcpy(oldstr,newstr);//hear new copy in old
printf("%s",oldstr);
	return 0;
}

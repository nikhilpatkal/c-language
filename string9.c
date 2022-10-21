#include<stdio.h>
#include<string.h>
int main()
{
	char password[100];
	char saltin[100];
	char newpassword[100];
	fgets(password,100,stdin);
	saltin="123";
	newpassword=strcat(password,saltin);
	puts(newpassword);
	
	
}

#include<stdio.h>
int main()
{
int a;
int *ptr;
ptr=&a;
*ptr=1;
printf("x=%d\n",ptr);
printf("*ptr=%d\n",*ptr);
*ptr+=5;
printf("x =%d\n",a);
printf("*ptr= %d\n",*ptr);
(*ptr)++;
printf("a=%d\n",a);

printf("*ptr=%d",*ptr);
return 0;
}

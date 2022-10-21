#include<String.h>
int main()
{
int i=90;
int *ptr=&i;
int **pptr=&ptr;
printf("the value of i is=%d",**pptr);
}

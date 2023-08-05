#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=10,*p;
p=malloc(sizeof(int));
p=&a;
printf("%d\n",*p);
}

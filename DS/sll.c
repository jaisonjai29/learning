#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <unistd.h>
typedef struct student
{
    int roll;
    char name[10];
    struct student *next;
} ST;
void add_begin(ST **);
void print(ST *);
int main()
{
    ST *hptr;
    hptr = 0;
    int n;
    char name[10], ch;
    do
    {
        printf("&hptr = %p\n",&hptr);
        add_begin(&hptr);
        printf("want to add new student details?\n");
        scanf(" %c", &ch);
    } while (ch == 'y');
    printf("hptr = %p\n",hptr);
    print(hptr);
}
void add_begin(ST **ptr)
{
    ST *temp;
    temp = (ST *)malloc(sizeof(ST));
    printf("temp = %p\n",temp);
    printf("enter roll num and name\n");
    scanf("%d %s",&temp->roll, temp->name);
    //printf("&temp = %p\n",&temp);
    //printf("*ptr = %p &ptr = %p\n",*ptr,&ptr);
    printf("*ptr = %p\n",*ptr);
    temp->next = *ptr;
    *ptr = temp;
    printf("temp->next = %p\n",temp->next);
    printf("*ptr = %p\n",*ptr);
}
void print(ST *ptr)
{
    
    while (ptr)
    {
        printf("inside print ptr = %p\n",ptr);
        printf("Roll : %d Name: %s\n", ptr->roll, ptr->name);
        ptr = ptr->next;
    }
}
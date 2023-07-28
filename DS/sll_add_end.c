#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int roll;
    struct student *next;
}ST;
void add_begin(ST **);
void print(ST *);
int main()
{
    char ch; ST *hptr;
    hptr = 0;
       
    do
    {
        add_begin(&hptr);
        printf("Need to enter student name\n");
        scanf(" %c",&ch);

    }while(ch == 'y');

    print(hptr);
}

void add_begin(ST **ptr)
{
    ST *temp = (ST*)malloc(sizeof(ST));
    printf("Enter student roll\n");
    scanf("%d",&temp->roll);
    temp->next = *ptr;
    *ptr = temp;
}

void print(ST *ptr)
{
    while(ptr)
    {
        printf("roll num is %d\n",ptr->roll);
        ptr = ptr->next;
    }
}
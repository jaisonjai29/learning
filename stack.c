#include<stdio.h>
#define MAX 5
int stack[MAX],opt,top=0;
void push();
void pop();
void display();
int main()
{
while(1)
{
    printf("Enter 1.PUSH 2.POP 3.DISPLAY 4.EXIT\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
        case 4:printf("exit\n");return 0;
        default:printf("invalid option\n");
    }
}
}
void push()
{
    if(top == MAX)
    {
        printf("stack is full\n");
        return;
    }
    else
    {
        int val;
        printf("Enter value to add stack\n");
        scanf("%d",&val);
        stack[top++] = val;
    }
}
void pop()
{
    if(top == 0)
    {
        printf("stack is underflow\n");
        return;
    }
    else
    {
        printf("Element deleted %d\n",stack[top-1]);
        stack[--top] = 0;
    }
}
void display()
{
    int i;
    printf("Elements are\n");
    for(i=0;i<top;i++)
    printf("%d ",stack[i]);
    printf("\n");
}
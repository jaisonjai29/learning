#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int (*fptr[5])(int, int);
int main()
{
    int n, a, b, res;
    int (*fptr[5])(int, int) = {0, add, sub, mul, div};
    printf("enter a and b value\n");
    scanf("%d %d", &a, &b);
    while (1)
    {
        printf("enter user choice 1.add 2.sub 3.mul 4.div\n");
        scanf("%d", &n);
        if (n <= 4)
        {
            res = (*fptr[n])(a, b);
            printf("result is %d\n", res);
        }
        else
            break;
    }
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
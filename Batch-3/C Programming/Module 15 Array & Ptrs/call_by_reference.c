#include<stdio.h>
void fun(int* p)
{
    // printf("p er value - %p\n",p);
    printf("main er x er value - %d\n",*p);
    *p=500;
}
int main()
{
    int x=100;
    // printf("p er value - %p\n",p);
    fun(&x);
    printf("%d",x);
    return 0;
}
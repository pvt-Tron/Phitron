#include<stdio.h>
void fun(int x)
{
    x=200;
    // printf("fun x er address - %p\n",&x);
}

int main()
{
    int x=10;
    // printf("main x er address - %p\n",&x);
    fun(x);
    printf("main er x er value - %p\n",&x);
    return 0;
}
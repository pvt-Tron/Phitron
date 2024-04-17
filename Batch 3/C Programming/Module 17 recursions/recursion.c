#include<stdio.h>
void fun()
{
    printf("Fun\n");
    fun();
    printf(" ");
}
int main()
{
    printf("Main Start\n");
    fun();
    printf("Main End\n");
    return 0;
}
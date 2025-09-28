#include<stdio.h>

// global
int x=500;
void fun(void)
{
    // int s=100;
    // printf("fun er s er address%p\n",&s);
    // printf("%d\n",s);
    printf("%d\n",x);
    printf("fun er s er address%p\n",&x);
}
int main()
{
    // int s=200;
    // printf("fun er s er address%p\n",&s);
    // printf("%d\n",s);

    printf("%d\n",x);
    printf("fun er s er address%p\n",&x);
    fun();
    return 0;

}
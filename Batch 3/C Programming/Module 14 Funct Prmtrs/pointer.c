#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n",&x);
    int* p=&x;
    printf("%p\n",p);
    // dereference
    printf("%p\n",*p);
    *p=500;


    printf("%d\n",*p);
    
    printf("%p\n",*p);


    return 0;

}
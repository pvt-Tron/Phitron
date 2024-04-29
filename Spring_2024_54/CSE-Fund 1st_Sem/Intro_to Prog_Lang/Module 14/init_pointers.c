#include<stdio.h>
int main()
{
    int x = 10;
    int* p = &x;
    printf("1\n");
    printf("%p\n", &x);
    printf("%p\n", p);
    // dereference
    printf("2\n");
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("3\n");
    // p = 500; << Segmentation fault
    *p = 500;
    printf("%d\n", x);
    printf("%d\n", *p);
    
    return 0;
}
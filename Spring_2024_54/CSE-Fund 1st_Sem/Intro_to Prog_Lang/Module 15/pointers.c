#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    int *ptr2 = ptr; // = &x;
    printf("x for ******* \t -\t  %d\n", x);
    printf("x for ******* \t -\t  %p\n", x);
    printf("x for address \t -\t  %p\n", &x);
    printf("ptr for value \t -\t  %d\n", *ptr);
    printf("ptr for value \t -\t  %d\n", &ptr);
    printf("ptr for memory size - %p\n", sizeof(ptr));
    
    return 0;
}
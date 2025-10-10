#include<stdio.h>

void val1(int a){ // pass by value
    a++;
    printf("pass a val %d\n", a);
    return;
}

void ref2(int* p){ // pass by value
    *p = 21;
    printf("pass x ref %d\n", *p);
    return;
}
int* inpt(int *a){
    scanf("%d", a);
    printf("func a scanf %d\n", *a);
    return a;
}

int main()
{
    int a;
    // scanf("%d", &a);
    
    int *ptr;
    ptr = &a;
    ptr = inpt(&a);
    printf("main a scanf val %d\n", a);
    val1(a);
    printf("main => a val %d\n", a);
    int x = 10;
    ref2(&x);
    printf("main => x ref %d\n", x);
    
    return 0;
}
#include<stdio.h>

void func1(int arr1[], int n, int *p){ // = void func1(int *arr1, int n)
    *p=200;
    printf("pointer by value (-> var address) %p\n", p);
    printf("pointed value %d\n", *p);
    printf("func change value\n");
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("input value %d\n", x);
    int arr2[x];
    int x2 = x;
    func1(arr2, x, x);
    printf("address %p\n", &x);
    printf("value %d\n", x);
    x = 100;
    printf("address %p\n", &x);
    printf("value %d\n", x);
    printf("original value %d\n", x2);


    return 0;
}
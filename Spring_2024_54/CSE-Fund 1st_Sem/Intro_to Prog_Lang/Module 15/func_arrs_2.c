#include<stdio.h>

void func1(int arr1[], int n, int x2){ // = void func1(int *arr1, int n)
    int *p;
    p = &x2;
    x2 = (x2 * 100);
    arr1[0] = 10;
    arr1[1] = 20;
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
    for(int i = 0; i < x; i++){
        scanf("%d", &arr2[i]);
    }
    int x2 = x;
    func1(arr2, x, x2);
    printf("address %p\n", &x);
    printf("value %d\n", x);
    x = 100;
    printf("address %p\n", &x);
    printf("changed value = x %d\n", x2);
    printf("original value %d\n", x);
    for(int i = 0; i < x; i++){
    printf("%d ", arr2[i]);
    }

    return 0;
}
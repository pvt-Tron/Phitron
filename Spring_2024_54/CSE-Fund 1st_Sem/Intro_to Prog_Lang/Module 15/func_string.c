#include<stdio.h>
#include<string.h>

void func1(char arrc1[], int n, int *p){ // = void func1(int *arr1, int n)
    int sz = sizeof(arrc1) / sizeof(char);
    int sz2 = strlen(arrc1);
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
    char arrc2[x];
    int x2 = x;
    int sz = sizeof(arrc2) / sizeof(char);


    return 0;
}
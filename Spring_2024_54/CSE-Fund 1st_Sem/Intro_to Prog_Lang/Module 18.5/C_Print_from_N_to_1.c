#include<stdio.h>

void func1(int n1){
    if(n1 <= 0){return;}
    printf("%d", n1);
    if(n1 > 1){printf(" ");}
    func1(n1 - 1);
}

int main()
{
    int nx;
    scanf("%d", &nx);
    func1(nx);
    return 0;
}
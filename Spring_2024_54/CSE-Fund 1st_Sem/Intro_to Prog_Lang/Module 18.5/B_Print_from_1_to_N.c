#include<stdio.h>

void func1(int n1){
    if(n1 < 1){return;}
    func1(n1 - 1);
    printf("%d\n", n1);

}

int main()
{
    int nx;
    scanf("%d", &nx);
    func1(nx);
    return 0;
}
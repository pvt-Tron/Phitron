#include<stdio.h>

void fNt1(int n, int i){
    if(n < i) return;
    printf("%d", n);
    if(n > i)printf(" ");
    fNt1(n - 1, i);
}
int main()
{
    int n;
    scanf("%d", &n);
    fNt1(n, 1);

    return 0;
}
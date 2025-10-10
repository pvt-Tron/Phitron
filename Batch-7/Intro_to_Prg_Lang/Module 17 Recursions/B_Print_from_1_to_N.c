#include<stdio.h>
void f1tN(int n, int i){
    if(i > n) return;
    printf("%d\n", i);
    f1tN(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    f1tN(n, 1);

    return 0;
}
#include<stdio.h>
void f1tN(int n, int i){
    if(i > n) return;
    printf("%d", i);
    f1tN(n, i + 1);
}
void fNt1(int n, int i){
    if(n < i) return;
    printf("%d", n);
    fNt1(n - 1, i);
}
void pntR(int n) {
    if(n <= 0) return;
    printf("I love recursion\n");
    pntR(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    f1tN(n, 1);
    fNt1(n, 1);
    pntR(n);

    return 0;
}
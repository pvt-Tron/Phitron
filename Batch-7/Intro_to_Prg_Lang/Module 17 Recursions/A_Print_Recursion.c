#include<stdio.h>
void pntR(int n) {
    if(n <= 0) return;
    printf("I love Recursion\n");
    pntR(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    pntR(n);
    return 0;
}
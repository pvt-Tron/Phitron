#include<stdio.h>
void rec1N(int n, int idx){
    if(idx > n) return;
    printf("%d\n", idx);
    rec1N(n, idx += 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    rec1N(n, 1);
    
    return 0;
}
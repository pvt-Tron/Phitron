#include<stdio.h>
void rec1N(int n){
    if( n < 1) return;
    printf("%d", n);
    if(n > 1) printf(" ");
    rec1N(n -= 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    rec1N(n);
    return 0;
}
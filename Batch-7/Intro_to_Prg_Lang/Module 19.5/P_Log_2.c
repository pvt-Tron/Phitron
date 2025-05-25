#include<stdio.h>
long long log2N(long long n){
    return (n > 1) ? log2N(n / 2) + 1 : 0; 
}
int main()
{
    long long n;
    scanf("%lld", &n);
    long long res = log2N(n);
    printf("%lld", res);    
    return 0;
}
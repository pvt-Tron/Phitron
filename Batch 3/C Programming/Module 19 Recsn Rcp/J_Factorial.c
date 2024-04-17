#include<stdio.h>
long long int fun(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    long long int ans=fun(n-1);
    return ans*n;
    // if(n==1 || n==2)
    // {
    //     return n;
    // }
    // long long int x=2;
    // if(x==n) return;
    // x=x*(x+1);
    // fun(x+1);
    // return x;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int k=fun(n);
    printf("%lld",k);
    return 0;
}
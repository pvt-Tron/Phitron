#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int sum = 0;
    if(n != 1){
        for(int i = 1; i <= n; i++){
            sum += i;
        }
    }
    else sum = 1;
    
    printf("%lld", sum);
    return 0;
}
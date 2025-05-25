// // https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
#include<stdio.h>
long long int sumN(long long int *ar, int n){
    
    if(n < 0) return 0;

    return (sumN(ar, n - 1) + ar[n]);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long ar[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &ar[i]);
    }
    // for(int i = 0; i < n; i++){
    //     printf("%lld ", ar[i]);
    // }
    // printf("\n");
    long long res = sumN(ar, n - 1);
    printf("%lld", res);

    return 0;
}



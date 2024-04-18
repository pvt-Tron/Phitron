#include<stdio.h>
int main()
{
    int n;
    long long int res1 = 0;
    scanf("%d", &n);
    long int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr1[i]);
    }
    for(int i = 0; i < n; i++){
        res1 += arr1[i];
    }
    if(res1 < 0){res1 = (-1) * res1;}
    printf("%lld", res1);


    return 0;
}
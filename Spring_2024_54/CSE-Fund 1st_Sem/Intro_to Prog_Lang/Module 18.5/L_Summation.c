#include<stdio.h>

long long int func1(long long int arr2[], int n1, int idx){
    if(idx >= n1 - 1){return arr2[n1 - 1] + arr2[0];}
    arr2[idx + 1] += arr2[idx];
    func1(arr2, n1, idx + 1);
}

int main()
{
    //...
    int nx;
    scanf("%d", &nx);
    long long int arr1[nx];
    for(int i = 0; i < nx; i++){
        scanf("%lld", &arr1[i]);
    }
    if(nx == 1){printf("%lld", arr1[0]);}
    else if(nx == 2){printf("%lld", arr1[0] + arr1[1]);}
    else{
        long long int result = func1(arr1,nx,1);
        printf("%lld", result);
    }
    return 0;
}
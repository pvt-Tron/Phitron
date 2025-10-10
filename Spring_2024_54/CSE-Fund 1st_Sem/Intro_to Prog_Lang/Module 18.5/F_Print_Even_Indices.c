#include<stdio.h>

void func1(int arr2[], int n1, int idx){
    if(idx >= n1){return;}
    func1(arr2, n1, idx + 1);
    if(idx%2 == 0){
        printf("%d", arr2[idx]);
        if(idx <= n1 - 1){printf(" ");}
    }
}

int main()
{
    int nx;
    scanf("%d", &nx);
    int arr1[nx];
    for(int i = 0; i < nx; i++){
        scanf("%d", &arr1[i]);
    }
    func1(arr1,nx,0);
    return 0;
}
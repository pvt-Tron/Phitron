#include<stdio.h>

void func1(int arr2[], int n1, int idx){
    if(n1 == 0){
        printf("%d", idx);
        return;}
    idx += arr2[n1 - 1];
    //arr2[idx + 1] += arr2[idx];
    func1(arr2, n1 - 1, idx);
    
    
}

int main()
{
    int nx;
    scanf("%d", &nx);
    int arr1[nx];
    for(int i = 0; i < nx; i++){
        scanf("%d", &arr1[i]);
    }
    // if(nx == 1){printf("%d", arr1[0]);}
    // else if(nx == 2){printf("%d", arr1[0] + arr1[1]);}
    // else{
    func1(arr1,nx,0);
    
    // }
    return 0;
}
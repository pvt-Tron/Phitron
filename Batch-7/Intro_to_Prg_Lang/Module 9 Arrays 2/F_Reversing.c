#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

void prar(int arr[], int n, bool q){
    if(q == 1){
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }
    else{
        for(int i = n - 1; i >= 0; i--){
            printf("%d ", arr[i]);
        }
        
    }
    
}

int main()
{
    int n, max, min;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // printf(".");
    prar(arr, n, 0);

    return 0;
}
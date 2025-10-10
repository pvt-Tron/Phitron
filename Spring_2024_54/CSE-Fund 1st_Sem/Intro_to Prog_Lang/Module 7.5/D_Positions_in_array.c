#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr1[i]);
    }
    int j = 0;
    while(j < n){
        if(arr1[j] <= 10 && arr1[j] >= 0){
            printf("A[%d] = %d", j, arr1[j]);
        }
        if(j == n - 1){break;}
        if(arr1[j] <= 10 && arr1[j] >= 0){
            printf("\n");
        }
        j++;
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    for(int j = 0; j < n1; j++){
        scanf("%d ", &arr1[j]);
    }
    // for(int j = 0; j < n1; j++){
    //     printf("%d ", arr1[j]);
    // }
    int i = 0;
    int tmp1;
    for(i = 0; i < n1 - 1; i++){
        for(int j = i + 1; j < n1; j++){
            if(arr1[i] > arr1[j]){
                tmp1 = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp1;
            }
        }
    }
    for(int j = 0; j < n1; j++){
        printf("%d ", arr1[j]);
    }
    
    return 0;
}
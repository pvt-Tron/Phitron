#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr1[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
    int pos1;
    scanf("%d", &pos1);
    printf("%d\n", pos1);
    for(int i = pos1; i < n; i++){
        arr1[i] = 0;
        arr1[i] = arr1[i + 1];
        printf("%d ", i);
    }
    // int x1 = 0;
    // int x2 = n - 1;
    // while(x1 < x2){
    //     int tmp1 = arr1[x1];
    //     arr1[x1] = arr1[x2];
    //     arr1[x1] = tmp1;
    //     x1++;
    //     x2++;
    // }


    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr1[i]);
    }
    
    return 0;
}
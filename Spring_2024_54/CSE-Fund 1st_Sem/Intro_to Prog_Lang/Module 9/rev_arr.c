#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    int x = 0;
    int y = n - 1;
    while(x < y){
        int tmp1 = arr1[x];
        arr1[x] = arr1[y];
        arr1[y] = tmp1;
        x++;
        y--;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }

    return 0;
}
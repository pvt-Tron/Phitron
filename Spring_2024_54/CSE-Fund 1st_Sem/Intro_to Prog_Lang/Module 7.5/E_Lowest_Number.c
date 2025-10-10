#include<stdio.h>
int main()
{
    int n, min1 = 0, pos1 = 0;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr1[i]);
        if(i == 0){
            min1 = arr1[i];
        }
        if(min1 > arr1[i]){
            pos1 = i;
            min1 = arr1[i];
        }
    }
    printf("%d %d", arr1[pos1], pos1 + 1);


    return 0;
}
#include<stdio.h>
void minmax1(int *arr1, int n2){
    int min1 = arr1[0], max1 = arr1[0];
    for(int i = 1; i < n2; i++){
        if(arr1[i] < min1){min1 = arr1[i];}
        if(arr1[i] > max1){max1 = arr1[i];}
    }
    printf("%d %d", min1, max1);
}

int main()
{
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        scanf("%d ", &arr1[i]);
    }
    minmax1(arr1, n1);

    
    return 0;
}
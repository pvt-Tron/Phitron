#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < n; i ++){
        if(arr1[i] > 0){printf("1");}
        else if(arr1[i] < 0){printf("2");}
        else{printf("0");}
        if(i < n -1)printf(" ");
    }

    return 0;
}
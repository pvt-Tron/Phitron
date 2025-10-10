#include<stdio.h>
int main()
{
    int n,p1,flg1 = 0;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &p1);
    for(int i = 0; i < n; i ++){
        if(arr1[i] == p1){
            printf("%d", i);
            flg1 = 1;
            break;
        }
    }
    if(flg1 == 0){printf("-1");}

    return 0;
}
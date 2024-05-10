#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long int arr1[n];
    long int min = 0;
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr1[i]);
    }
    int cnt1 = 0;
    min = arr1[0];
    for(int i = 1; i < n; i++){
        if(arr1[i] < min){
            min = arr1[i];
        }
    }
    // printf("%d ", min);
    for(int i = 0; i < n; i++){
        //printf("%d%d ", arr1[i], cnt1);    
        if(arr1[i] == min){cnt1++;}
    }
    //printf("%d ", cnt1);
    if(cnt1%2 != 0){printf("Lucky");}
    else{printf("Unlucky");}

    return 0;
}
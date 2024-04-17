#include<stdio.h>
int main()
{
    int n,odd1 = 0,even1 = 0,pos1 = 0,neg1 = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 0 || arr[i]%2 == 0){even1++;}
        else{odd1++;}
        if(arr[i] > 0){pos1++;}
        else if(arr[i] < 0) {neg1++;}
        else{continue;}
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even1, odd1, pos1, neg1);
    
    
    return 0;
}
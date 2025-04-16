#include<stdio.h>
#include<limits.h>
int main()
{

    // n 10 array input 12 34 5 67 22 14 53 11 1 3
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("-- Extra Practice Solutions module 7 batch7 --\n");
    printf("\nThe EVEN number(s) in the array are: ");
    for(int i = 0; i < n; i++){
        if(arr1[i]%2 == 0) printf("%d ", arr1[i]);
    }
    // printf("\n");
    int result = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i]%2 != 0) result++;
    }
    printf("\nIn the array are present %d ODD number(s)", result);
    result = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr1[i] > result) result = arr1[i];
    }
    printf("\nThe array the MAX number(s): %d", result);
    result = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr1[i] < result) result = arr1[i];
    }
    printf("\nThe array the MIN number(s): %d", result);


    return 0;
}
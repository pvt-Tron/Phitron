#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

// void getArr(int *arr, int n){
//     int inpt;
//     for(int i = 0; i < n; i++){
//         scanf("%d", &inpt);
//         (*arr + i) = inpt;
//     }
//     // return *arr;    
// }
int a_ispal(int arr[],int n){
    int j = n - 1;
    int midle;
    if(n%2 == 0) midle = n / 2;
    else midle = (n / 2) + 1;
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[j]) return 0;
        if(i >= midle) break;
        j--;
    }
    return 1;

}
int fdMax(int mx[], int n, bool q){
    int maxr = INT_MIN;
    int idr = 0;
    for(int i = 0; i < n; i++){
        if(maxr < mx[i]){
            maxr = mx[i];
            idr = i;
        } 
    }
    if(q = 1) return idr;
    return maxr;
}
int fdMin(int mn[], int n, bool q){
    // int n = sizeof(mn) / sizeof(mn[0]);
    int minr = INT_MAX;
    int idr = 0;
    for(int i = 0; i < n; i++){
        if(minr > mn[i]){
            minr = mn[i];
            idr = i;
        }
    }
    if(q = 1) return idr;
    return minr;
}
void Swap(int swp1, int swp2){
    int tmp = swp1;
    swp1 = swp2;
    swp2 = tmp;
}
void SwapID(int *arr, int swid1 , int swid2){
    int tmp = *(arr + swid1);
    *(arr + swid1) = *(arr + swid2);
    *(arr + swid2) = tmp;
}
void prar(int arr[], int n, bool q){
    if(q == 1){
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }
    else{
        for(int i = n - 1; i >= 0; i--){
            printf("%d ", arr[i]);
        }

    }
    
}

int main()
{
    int n, max, min;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // arr = getArr(&arr, n);
    max = fdMax(arr, n, 1);
    min = fdMin(arr, n, 1);
    SwapID(arr, max, min);
    // printf(".");
    prar(arr, n, 0);

    return 0;
}
    // for(int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }
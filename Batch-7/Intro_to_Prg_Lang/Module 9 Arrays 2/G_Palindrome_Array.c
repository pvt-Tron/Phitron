#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

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
    int palYN = 0;
    palYN = a_ispal(arr, n);
    if(palYN) printf("YES");
    else printf("NO");
    // printf(".");
    // prar(arr, n, 0);

    return 0;
}
// void sortAR(int *ar, int n){ // long long
//     if(n == 0) return;
//     int max = INT_MIN;
//     for(int i = n - 1; i >= 0; i--){
//         if(ar[n] > ar[i - 1]){
//             int tmp = ar[i];
//             ar[i] = ar[i - 1];
//             ar[i - 1] = tmp;
//         }
//     }
//     printf("%d ", ar[n - 1]);
//     sortAR(ar, n - 1);
// } 
    // for(int i = n - 1; i >= 0; i-=1){
    //     printf("%d %d ", i, ar[i]);
    // }
#include<stdio.h>
#include<limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[1001];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    long int sum = 0; // long long
    int ki = 0;
    // sortAR(ar, n);
    int max = INT_MIN;
    for(int j = n - 1; j > 0; j--){
        for(int i = j - 1; i >= 0; i--){
            if(ar[i] > ar[i - 1]){
                int tmp = ar[i];
                ar[i] = ar[i - 1];
                ar[i - 1] = tmp;
            }
        }
    }

    for(int i = n - 1; i >= 0; i-=1){
        // printf("%d %d ", i, k);
        if(ki < k) sum += ar[i];
        ki++;
    }
    printf("%ld", sum); // ll
    
    return 0;
}
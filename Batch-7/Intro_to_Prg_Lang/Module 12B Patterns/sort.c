#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    
    // int idx = 0;
    // for(int i = 0; i < n - 1; i++){
    //     int max = ar[i];
    //     for(int j = i + 1; j < n; j++){
    //         if(max < ar[j]){
    //             max = ar[j];
    //             idx = j;
    //         }
    //     }
    //     if(idx){
    //         int tmp = ar[idx];
    //         ar[idx] = ar[i];
    //         ar[i] = tmp;
    //         idx = 0;
    //     }
    // }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(ar[i] > ar[j]){
                int tmp = ar[j];
                ar[j] = ar[i];
                ar[i] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }


    return 0;
}
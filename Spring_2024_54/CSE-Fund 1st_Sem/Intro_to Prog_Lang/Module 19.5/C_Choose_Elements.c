#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long int arr[n];
     
    for(int i = 0; i < n; i++){
        scanf("%ld", &arr[i]);    
    }
    long tmp1;
    int i;
    for(i = 0; i < n - 1; i++){
        for(int j = i; j < n - 1; j++){    
            if(arr[j] > arr[j + 1]){
                tmp1 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp1;            
            }
        }    
    }
    long int res1 = 0;
    for(int j = n - 1; j >= 0; j--){    
        if(k == 0){break;}
        res1 += arr[j];
        k--;         
    }
    if(res1 <= 0){printf("0");} //printf("%d", 0);}
    else{printf("%ld", res1);}
    return 0;
}
#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);    
    }
    int x;
    scanf("%d", &x);
    // printf("%d ", x);  
    int flag = -1;
    for(int i = 0; i < n; i++){
        // printf("%di ", i);
        if(arr[i] == x){
            flag = i;
            // printf("%d ", arr[i]);
            break;
        } 
    }
    // printf(" fl %d", flag);
    if(flag != -1) printf("%d", flag);
    else printf("-1");
    
    
    
    
    return 0;
}
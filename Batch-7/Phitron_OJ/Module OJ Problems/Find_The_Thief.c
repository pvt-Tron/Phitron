#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n = 0;
        scanf("%d", &n);
        int arr1[10001];
        if(n == 1){
            scanf("%d", arr1[0]);
            break;
        }
        int result = 0;
        int extran = 1;
        int codes = 0;
        int arr2[10001] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d", &arr1[i]);
        }
        for(int i = 0; i < n; i++){
            int flag = 1;
            if(codes = 0){
                 arr2[0] = arr1[0];
                 codes++;
            }
            else{
                for(int j = 0; j <= codes; j++){
                    if(arr1[i] == arr2[j]){
                        flag = 0;
                        extran += j;
                    }
                }
                if(flag){
                    for(int j = 0; j < n; j++){
                        if(arr2[j] == 0){
                            arr2[j] = arr1[i];
                            codes++;
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            if(i == 2 && n == 3){
                if(arr1[0] == arr1[1]) result = arr1[1];
                else result = arr1[2];
            }
        }      
        int first = 0;
    if(n > 3){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr1[j] == arr2[j]){

                }
            }
        }
        int n2 = codes;
        n2 = n2 / n;
        
    }
    printf("%d", result);
    if(t > 0) printf("\n");

    }
}
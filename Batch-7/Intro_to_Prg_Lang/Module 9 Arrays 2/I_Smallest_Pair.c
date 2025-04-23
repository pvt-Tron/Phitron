#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

int fp2MinSum(int arr[], int n){    
    int minr = arr[0] + arr[1] + 1;
    printf("%d ", minr);
    int pj = 0;
    int pij = 0;
    for(int i = 0; i < n; i++){
        printf("%di ", pj);
        for(int j = i + 1; j < n; j++){
            printf("%d, j ", pj);
            printf("m%d ", minr);
            pij = arr[i] + arr[j] + n + j - i;
            if((minr) > pij) minr = pij;
            pj++;
        }
        printf("%d\n");
        
    }
    return minr;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]); 
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        int j = 2, ij = 0, i = 1;
        int min = arr[0] + arr[i + 1] + 1;
        int tmpMN = min;
        while(i < n){
            int nj = i;
            while(j <= nj){

                printf("%d ", tmpMN);
                if(tmpMN < min) min = tmpMN; 
                j++;
                ij++;
                tmpMN = arr[ij] + arr[j] + j - ij;
            }
            i++;
            ij = i;
        }
          
        printf("/n%d", min);
        // printf("%d", fp2MinSum(arr, n));
        if(t > 0) printf("\n");
    }
    return 0;
}
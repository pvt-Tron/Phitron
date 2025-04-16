#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + k; j++){
            printf("*");
        }
        k++;
        if(i == n - 1) break;
        printf("\n");
    }
    
    return 0;
}
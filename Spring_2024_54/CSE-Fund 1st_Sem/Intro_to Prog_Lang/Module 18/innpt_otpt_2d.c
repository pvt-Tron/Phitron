#include<stdio.h>
int main()
{
    int arr1d[5][3];
    int i; // i row j col
    for(i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){

            scanf("%d ", &arr1d[i][j]);
            
        }    
    }

        for(i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            
            printf("%d ", arr1d[i][j]);
            //printf("[%d][%d]", i, j);

        }
        printf("\n");
    }
    
    return 0;
}
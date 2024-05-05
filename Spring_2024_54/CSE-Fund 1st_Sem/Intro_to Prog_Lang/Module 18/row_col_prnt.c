#include<stdio.h>
int main()
{
    int arr1d[5][3];
    int row , col; // row col
    for(row = 0; row < 5; row++){
        for(col = 0; col < 3; col++){

            scanf("%d ", &arr1d[row][col]);
            
        }    
    }

    for(row = 0; row < 5; row++){
        for(col = 0; col < 3; col++){
            
            printf("%d ", arr1d[row][col]);
            //printf("[%d][%d]", row, col);

        }
        printf("\n");
    }
    printf("\n");
    for(col = 0; col < 3; col++){
        for(row = 0; row < 5; row++){    
            printf("%d ", arr1d[row][col]);
            //printf("[%d][%d]", row, col);
        }
        printf("\n");
    }
    
    return 0;
}
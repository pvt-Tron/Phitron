#include<stdio.h>
int main()
{
     
    
    int row , col, rown1 , coln1; // row col
    scanf("%d %d", &rown1, &coln1);
    int arr1d[rown1][coln1];
    for(row = 0; row < rown1; row++){
        for(col = 0; col <  coln1; col++){

            scanf("%d ", &arr1d[row][col]);
            
        }    
    }
    int cnt1 = 0;

    for(row = 0; row < rown1; row++){
        for(col = 0; col <  coln1; col++){
            
            if(arr1d[row][col] == 0){
                cnt1++;    
            }
            //printf("[%d][%d]", i, j);

        }
        printf("\n");
    }
    int elem1 = rown1 * coln1;

    if(cnt1 == elem1){printf("Zero Matrix");}
    else{printf("No Zero Matrix");}

    printf("\n");
    for(col = 0; col <  coln1; col++){
        for(row = 0; row < rown1; row++){    
            printf("%d ", arr1d[row][col]);
            //printf("[%d][%d]", row, col);
        }
        printf("\n");
    }
    
    return 0;
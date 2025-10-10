#include<stdio.h>
int main()
{
    int row1, col1;
    scanf("%d %d", &row1, &col1);
    int arr1[row1][col1];
    int i = 0;
    int flag = 0;
    for(i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int k1;
    scanf("%d", &k1);
    for(i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            if(arr1[i][j] == k1){
                flag = 1;
                break;    
            }
        }
    }
    //printf("%d %d\n", sum1, sum2);
    if(flag){printf("will not take number");}
    else{printf("will take number");}
    
    return 0;
}
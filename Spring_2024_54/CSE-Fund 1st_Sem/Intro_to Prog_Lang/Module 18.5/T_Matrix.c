#include<stdio.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    int arr1[n1][n1];
    int row1 = n1;
    int col1 = n1;
    int i = 0;
    for(i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    int rev1 = n1 - 1;
    for(i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            if(j == i){sum1 += arr1[i][j];}
        }
        sum2 += arr1[i][rev1];
        rev1--;
    }
    //printf("%d %d\n", sum1, sum2);
    sum1 -= sum2;
    if(sum1 < 0){sum1 = (sum1 * (-1));}
    printf("%d", sum1);
    return 0;
}
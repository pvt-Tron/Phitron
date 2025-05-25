#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int mt[row][col];
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            scanf("%d", &mt[r][c]);
        }
    }
    for(int r = 0; r < row; r++){
        for(int c = col - 1; c >= 0; c--){
            printf("%d ", mt[r][c]);
        }
        printf("\n");
    }   

    return 0;
}
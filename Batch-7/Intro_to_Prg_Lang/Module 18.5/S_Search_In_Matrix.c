#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int mt[row][col];
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            scanf("%d", &mt[r][c]);
        }
    }
    int x;
    scanf("%d", &x);
    int prd = 0;
    int snd = 0;
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            if(mt[r][c] == x){
                printf("will not take number");
                return 0;
            }
        }
    }
    printf("will take number");
    return 0;
}
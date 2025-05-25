#include<stdio.h>
int main()
{
    int row = 5;
    int col = 5;
    // scanf("%d %d", &row, &col);
    int mt[row][col];
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            scanf("%d", &mt[r][c]);
        }
    }
    int x, y;
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            if(mt[r][c] == 1){
                x = r;
                y = c;       
            }
        }
    }
    // printf("%d %d ", x, y);
    int cnt = 0;
    int k = 0;
    while(k < 6){
        if(x != 2){
            if(x > 2){
                x--;
                cnt++;
            }
            else{
                x++;
                cnt++;
            }
        }
        if(y != 2){
            if(y > 2){
                y--;
                cnt++;
            }
            else{
                y++;
                cnt++;
            }
        }
        k++;
    }
    printf("%d", cnt);
    
    return 0;
}
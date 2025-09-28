#include<stdio.h>
int main()
{    /*4 3
    1 2 3
    4 5 6
    7 8 9
    10 11 12
    3*/
    
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("[%d] ",a[i][j]);
        // printf("%d ",a[i][j]);
        }
    
    printf("\n");
    }
}
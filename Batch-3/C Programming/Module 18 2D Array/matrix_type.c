#include<stdio.h>
int main()
{
/*row matrix   column matrix    0/null matrix 
   (a b c)          [a]             [0][0]
                    [b]             [0][0]
                    [c]             [0][0]
  diag, mat.   scalar matrix     unit matrix
    (a 0 0)       (5 0 0)         [1][0][0]
    (0 b 0)       (0 5 0)         [0][1][0]
    (0 0 c)       (0 0 5)         [0][0][1]
    
    0 0 0
    0 0 0
    0 0 0
    0 0 0
    0 0 0*/

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
    return 0;
}
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d/n",&row,&col);
    int a[row][col];
    int b[row][col];
    int i;
    int j;

    for (i=0;i<row;i++)
    {   for (j=0;j<col;j++)
        {
            // if(j==col-1)
            // {
            //     scanf("%d\n",&a[row][col]);
            // }
            // else
            // {
            scanf("%d",&a[i][j]);
            // }
        }
    }
    for (i=0;i<row;i++)
    {   
        for (j=0;j<col;j++)
        {
            // if(j==col-1)
            // {
            //     scanf("%d\n",&b[row][col]);
            // }
            // else
            // {
            scanf("%d",&b[i][j]);
            // }
        }
    }
    int c[row][col];
    int tr=0;
    int tc=0;    
    for (i=0;i<row;i++)
    {   
        for (j=0;j<col;j++)
        {
            tr=a[i][j];
            tc=b[i][j];
            c[i][j] = tr + tc;
        }
    }
    
    for (i=0;i<row;i++)
    {   
        for (j=0;j<col;j++)
        {
            printf("%d",c[i][j]);
            if(j<col-1)
            {
                printf(" ");
            }            
        }
        printf("\n");
    }
    
    return 0;

}
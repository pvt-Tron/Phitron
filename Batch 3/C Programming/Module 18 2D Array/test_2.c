#include<stdio.h>
int main()
{
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
    int flag=3;
    int k=0;
    int d=0;
    // if(a[0][0]==0)
    // {
    //     k=a[0][col];        
    // }
    // else
    // {
    k=a[0][0];       
    // }
    if(row != col)
    {
        flag=0;
        d=d+1;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            
            if(i+j==row-1)
            {                
                if (i==j)
                {
                    flag=flag+1;                    
                }
                else if (a[i][j]==k)
                {
                    flag=flag+1;
                }
                
                else if(a[i][j]==1)
                {
                    flag=flag+1;                
                }
                else
                {
                    continue;                
                }
                if(a[i][j]!=0)
                {
                    flag=0;
                    d=d+1;
                }
            //     {
            //         flag=0;
            //     }
            // }
            // if(a[i][j]!=0)
            // {
            //     flag=0;
            // }
            }
        }
    }
    if(flag==3)
    {
        printf("Unit Matrix\n");
    }
    else
    {
        printf("Not Unit Matrix\n");
    }
    if(flag>=2)
    {
        printf("Scalar Matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }
    if(flag>=1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
        printf("Times flag zero: %d\n",d);
        printf("Times flag: %d\n",flag);
        
    }
    return 0;
}
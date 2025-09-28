#include<stdio.h>
int main()
{
    /*2 5 4
      1 2 3
      4 5 6
      2 3 5
     10 2 4*/

    //declare 2D array
    int a[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }

    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("[%d] ",a[i][j]);
        // printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}
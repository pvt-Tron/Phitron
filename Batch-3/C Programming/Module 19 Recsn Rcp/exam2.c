#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n;
    scanf("%d",&n);
    long int mat[n][4];
    long d;
    long abc;
    int i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<4;i++)
        {
            scanf("%ld",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<4;i++)
        {
            printf("%ld",mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        abc=(mat[i][1]+mat[i][2]+mat[i][3]);
        d=(mat[i][0]-abc);
        printf("%ld\n",d);
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

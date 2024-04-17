#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        for(int i=n;i<=1;i++)
        {printf("%d ",i);}  
    }    
    int j=0;
    for(int i=j;i<n+2;i++)
    {
        if(n==0){printf("%d ",i);}
        else
        {
            if(i==n){break;}
            printf("%d ",i+1);    
        }
    }
    return 0;

}
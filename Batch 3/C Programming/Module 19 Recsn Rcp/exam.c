#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int tiger=0;
    int pathan=0;
    scanf("%d",&n);
    long tgr[n];
    long pth[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&tgr[n]);
        scanf("%ld",&pth[n]);       
    }
    for(int i=0;i<n;i++)
    {
        printf("%ld ",tgr[n]);
        printf("%ld ",pth[n]);       
    }
    
    for(int i=0;i<n;i++)
    {
        if(tgr[n]>pth[n])
        {
            tiger=tiger+1;
        }
        if(tgr[n]<pth[n])
        {
            pathan=pathan+1;
        }
        
    }
    if(tiger > pathan)
    {
        printf("Tiger");
    }
    else if(pathan > tiger)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

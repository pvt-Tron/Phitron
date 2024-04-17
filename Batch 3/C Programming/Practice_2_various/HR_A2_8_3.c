#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    int na=0;
    int nb=0;
    int nx;
    int tota=0;
    int totb=0;
    scanf("%d",&n);
    
    int a[n];
    int b[n];
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&nx);
        
        if(nx%2==0)
        {
            a[i]=nx;
            na=na+1;
        }
        
        else
        {
            b[i]=nx;
            nb=nb+1;
        }
    }
    
    for(int j=na;j>=0;j--)
    {
        //if(a[j]==0) {break;}
        
        tota=tota+(a[j]);
    }
    
    printf("%d ",tota);
    
    for(int j=nb;j>=0;j--)
    {
        //if(b[j]==0) {break;}
        
        totb=totb+(b[j]);
    }
    
    printf("%d ",totb);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

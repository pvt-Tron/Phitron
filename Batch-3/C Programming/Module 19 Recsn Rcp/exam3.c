#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int ar2[n];
    // int m=0;
    int min=0;
    int max=0;
    int medAr=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>max)
        {
            max=ar[i];
        }
        if(ar[i]<min)
        {
            min=ar[i];
        }        
    }
    ar2[0]=min;
    ar2[n-1]=max;
    int i;
    for(i=0;i<n-1;i++)
    {
        // for(int i=n-1;i>=0;i--)
        for(int j=1;j<n-1;j++)
        {
            if(ar[i]>ar[j])
            {
                ar2[j]=ar[j];
                ar[i]=ar[j];
            }
        }
    }
    //
     for(int i=0;i<n;i++)
    {
        printf("%d %d ",ar2[i],ar[i]);
    }
    //
    
    if(n%2!=0)
    {
        // m=1;
        medAr=((n-1)/2)+1;
        printf("%d",ar2[medAr]);
    }
    else
    {
        // m=2;
        medAr=(n/2);
        printf("%d %d",ar2[medAr-1],ar2[medAr]);
    }
    
    // do
    // {
    //     printf("%d ",ar2[medAr-1]);
    //     medAr=medAr+1;
    //     m=m-1;
    // }
    // while(m>=1);

    return 0;
}
    
        // {
        //     continue;
        // }
        // esle
        // {
        //     m=((ar[i-1]+ar[i+1])/2);
        //     if(ar[i]==m+1)
        // }
    
    

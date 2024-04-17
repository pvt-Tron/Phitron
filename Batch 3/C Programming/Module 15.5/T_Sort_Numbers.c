#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int nlng=3;    
    long int n[nlng];
    
    for(int i=0;i<nlng;i++)
    {
        scanf("%d",&n[i]);
    }
    int min,med,max;
    for(int i=0;i<nlng;i++)
    {
        if(n[i]<min){min=n[i];}
        // else if(n[i]=min){med=n[i];}
    }
    for(int i=0;i<nlng;i++)
    {
        if(n[i]>max){max=n[i];}
        // else if(n[i]=max){med=n[i];}
    }
    for(int i=0;i<nlng;i++)
    {
        if(n[i]>=min || n[i]<=max){med=n[i];}
    }
    printf("%d\n%d\n%d\n",min,med,max);
    printf("\n");
    for(int i=0;i<nlng;i++)
    {
        printf("%d\n",n[i]);
    }  
    return 0;
    
}
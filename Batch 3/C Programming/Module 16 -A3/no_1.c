#include<stdio.h>
#include<string.h>
#include<math.h>

// void fun(a,b)
// {

// }

int main()
{
    int n;
    scanf("%d",&n);
    int k=0;
    int diff=n;
    int u=n-2;
    for(int i=0;i<n;i++)
    { 
        for(int i=0;i<u+1;i++)
        {
            printf(" ");
        }
        for(int i=1;i<(n-u+k);i++)
        {
            printf("%d",i);
            
        
        }
        printf("\n");
        u=u-1;
        k=k+1;
        diff=diff+2;
        // printf("%d",k);
    }
   u=1;
//    k=0;
   for(int i=n-1;i>=0;i--)
    { 
        u=u+1;
        for(int i=0;i<u;i++)
        {
            if(i>0)
            {            
            printf(" ");
            }
        }
        for(int i=1;i<(n+k-2);i++)
        {
            printf("%d",i);
        }
        printf("\n");
        
        k=k-2;
        diff=diff+2;
        // printf("%d",k);
    }
   
    // for(int i=0;i<n;i++)
    // { 
    //     for(int i=n+1;i>u;i--)
    //     {
    //         printf(" ");
            
    //     }
    //     for(int i=1;i<k;i++)
    //     {
    //         printf("%d",i);
    //     }
    //     printf("\n");
    //     u=u-1;
    //     // k=k+1;
    // }


     

    return 0;
}

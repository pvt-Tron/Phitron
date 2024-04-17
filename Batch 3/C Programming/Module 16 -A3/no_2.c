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
    int k=1;
    int diff=n;
    int u=n-2;
    for(int i=0;i<n;i++)
    { 
        for(int i=0;i<u+1;i++)
        {
            printf(" ");

        }
        for(int i=1;i<(n-u);i++)
        {
            
            printf("%d",k);
                   
        }
        printf("\n");
        u=u-1;
        k=k+1;
    }
    return 0;
}

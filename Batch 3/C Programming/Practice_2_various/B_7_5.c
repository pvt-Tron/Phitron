#include<stdio.h>
int main()
{
    int n;
    int x;
    
    scanf("%d\n",&n);

    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d ",&ar[i]);
    }
    
    for(int i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    
    scanf("%d\n",&x);
    
    printf("%d\n",x);

    int xn=0;

    for(int i=0;i<n;i++)
    {
        if(x=ar[i])
        {
            xn=xn+i;
            printf("\n%d %d\n",i,xn);
            break;
        }
    }
    
    if(xn=0)
    {   
        printf("-1");
    }
    
    else
    {
        printf("%d",xn);
    }

    return 0;
}
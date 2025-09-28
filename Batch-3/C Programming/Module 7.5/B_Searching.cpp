#include<stdio.h>
int main()
{
    int n;
    int x;
    
    scanf("%d\n",&n);

    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    scanf("\n%d\n",&x);

    int xn=0;

    for(int i=0;i<n;i++)
    {
        if(x==(ar[i]))
        {
            xn=xn+i;
            break;
        }
    }
    
    if(xn=0)
    {   
        printf("-1\n");
    }
    
    else
    {
        printf("%d\n",xn);
    }

    return 0;
}
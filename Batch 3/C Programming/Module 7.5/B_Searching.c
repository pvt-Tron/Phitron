#include<stdio.h>
int main()
{
    int n;
    int x;
    
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    scanf("%d",&x);

    int xn=-1;

    for(int i=0;i<n;i++)
    {
        if(x == ar[i])
        {
            xn=i;
            break;
        }
    }
    
    //if(xn=0)
    //{   
    //    printf("-1\n");
    //}
    
    //else
    //{
    printf("%d\n",xn);
    //}

    return 0;
}
#include<stdio.h>
int main()
{
    int n;


    scanf("%d",&n);
    
    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=k+ar[i];
    }
    printf("%d, ",k);

    //for(int i=n-1;i>=0;i--)
    //{
    //    printf("%d ",ar[i]);
    //}

    return 0;

}
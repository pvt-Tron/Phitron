#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    int k=1;
    for(int i=0;i<n-1;i++)
    {

        if(a[i]>a[k])
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
    k=k+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1)
        {
            printf(" ");
        }
    }
    return 0;
}

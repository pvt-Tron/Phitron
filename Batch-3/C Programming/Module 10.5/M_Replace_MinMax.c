#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int max=0,min=0,indh=0,indl=0,swp=0;
    for(int i=0;i<n;i=i+1)
    {
        scanf("%d ",&arr[i]);
        if(arr[i] > max)
        {
            max=arr[i];
            indh=i;
        }
        if(arr[i] < min || arr[i]==1)
        {
            min=arr[i];
            indl=i;
        }
    }
    swp=arr[indh];
    arr[indh]=arr[indl];
    arr[indl]=swp;
    for(int i=0;i<n;i=i+1)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
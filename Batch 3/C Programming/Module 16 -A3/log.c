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
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}

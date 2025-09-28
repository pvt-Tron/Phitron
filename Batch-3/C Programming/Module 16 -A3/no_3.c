#include<stdio.h>
#include<string.h>
#include<math.h>
// #define int count_before_zero(int,int)
int count_before_zero(int *x,int m)
{
    // return & parms 
    int c=0;
    while(x[c]!='\0')
    {
        c=c+1;
    }
    return c;
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // Return & Parameters
    int result=count_before_zero(a,n);
    printf("%d\n",result);
    
    return 0;
}


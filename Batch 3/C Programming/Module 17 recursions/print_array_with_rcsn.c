#include<stdio.h>

void fun(int *ar,int i,int n)
{
    if(i==n) return; // base case
    printf("%d\n",ar[i]);
    fun(ar,i+1,n);
}
int main()
{
    int n,e=0;
    // printf("Insert Start and Ending values \n");
    scanf("%d %d",&e,&n);
    int ar[n];
    for(int k=0;k<n;k++)
    {    
        scanf("%d",&ar[k]);
    }
    fun(ar,e,n);
    
    return 0;
}
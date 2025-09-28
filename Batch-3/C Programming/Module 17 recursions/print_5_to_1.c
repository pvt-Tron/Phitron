#include<stdio.h>

void fun(int i,int j)
{
    int x=j;
    if(i==j+1) return; // base case
    fun(i+1,x);
    printf("%d\n",i);
    
}
int main()
{
    int n,e;
    // printf("Insert Start and Ending values \n");
    scanf("%d %d",&n,&e);
    fun(n,e);
    
    return 0;
}
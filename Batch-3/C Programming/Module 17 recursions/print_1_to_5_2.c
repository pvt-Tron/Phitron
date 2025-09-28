#include<stdio.h>

void fun(int i)
{
    if(i==6) return; // base case
    // fun(i+1);
    printf("%d\n",i);
    fun(i+1);
}
int main()
{
    // int n,e;
    // // printf("Insert Start and Ending values \n");
    // scanf("%d %d",&n,&e);
    // fun(n,e);
    fun(1);
    
    return 0;
}
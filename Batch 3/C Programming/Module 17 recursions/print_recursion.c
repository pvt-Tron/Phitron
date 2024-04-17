#include<stdio.h>
void fun0(int i)
{
    for(int j=1;j<=i;j++)
    {
        printf("%d\n",j);
    }
}void fun(int i,int j)
{
    int x=0;
    if(i==j) return; // base case
    printf("%d\n",i);
    fun(i+1,x);
}
int main()
{
    int n,e;
    scanf("%d %e",&n,&e);
    fun(n,e);
    
    return 0;
}
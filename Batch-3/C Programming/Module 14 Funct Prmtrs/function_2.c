#include<stdio.h>

int sum(void) // x=10 y=20
{
    //code
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    return sum;
}

int main()
{
    int s = sum();
    printf("%d\n",s);
    return 0;
}
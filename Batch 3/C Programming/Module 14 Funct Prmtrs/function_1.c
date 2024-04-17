#include<stdio.h>


// return_type name(parameter(s))
// {
//     code
//     return What?
// }
int sum(int x,int y) // x=10 y=20
{
    //code
    int sum = x + y;
    return sum;
}

int main()
{
    // int s=sum(10,20);
    // printf("%d",s);
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(100,200));
    return 0;
}
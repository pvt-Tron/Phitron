#include<stdio.h>

int ref(int x)
{
    x=250;
    return x;
}
int val(int y)
{
    printf("b address of memory: %p",y);
}

int main()
{

int a,b;
scanf("%d %d",&a,&b);

printf("a value after change\n it by reference: %d\n",ref(a));
val(b);

return 0;

}
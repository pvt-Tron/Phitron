#include<stdio.h>

void func1(int x){
    x=200;
    printf("func cannot change value\n");    
}
int main()
{
    int x;

    func1(x);
    printf("address %p\n", &x);
    printf("value %d\n", x);
    //x = 100;
    printf("address %p\n", &x);
    printf("value %d\n", x);


    return 0;
}
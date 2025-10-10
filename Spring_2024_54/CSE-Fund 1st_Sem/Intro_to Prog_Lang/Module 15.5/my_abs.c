#include<stdio.h>

void my_abs(int *p){
    int x = *p;
    if(x < 0){
        x = (x * (-1));
        *p = x;
        }
}

int main()
{
    int c1;
    scanf("%d ", &c1);
    my_abs(&c1);
    printf("%d\n", c1);
    
    return 0;
}
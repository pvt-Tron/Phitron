#include<stdio.h>

void world(){
    printf("World!\n");
    printf("End2\n");
}

void hello(){
    printf("Hello! \n");
    world();
    printf("End1\n");
}
int main()
{
    hello();
    printf("End3");
    
    return 0;
}
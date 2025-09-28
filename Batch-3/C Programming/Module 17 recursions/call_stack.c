#include<stdio.h>
void world()
{
    printf("World Start\n");
    printf("World End\n");
}
void hallo()
{
    printf("Hallo Start\n");
    world();
    printf("Hello End\n");
}
int main()
{
    printf("Main Start\n");
    hallo();
    printf("Main End\n");
    return 0;
}
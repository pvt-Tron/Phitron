#include<stdio.h>
#include<string.h>
#include<math.h>
void swap_it(int *a2, int *b2){
    int p;
    p = *a2;
    *a2 = *b2;
    *b2 = p;
}

int main()
{
    int a1,b1;
    scanf("%d %d ", &a1, &b1);
    swap_it(&a1,&b1);
    printf("%d %d\n", a1, b1);
    
    return 0;
}
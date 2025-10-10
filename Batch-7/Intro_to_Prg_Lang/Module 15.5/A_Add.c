#include<stdio.h>

int sumab(int *a, int *b){
    int sum;
    sum = *a + *b;
    return sum;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", sumab(&a, &b));
    
    return 0;
}
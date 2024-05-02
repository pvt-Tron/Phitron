#include<stdio.h>

int sum1(int *a, int *b){
    int result = *a + *b;
    return result;
}

int main()
{
    int *a1, *b1;
    scanf("%d %d", &a1, &b1);

    //printf("The sum %d + %d is: %d", a1, b1, sum1(&a1,&b1));
    printf("%d", sum1(&a1,&b1));

    
    return 0;
}
#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n/2; i++){
        printf("%d Hello World!\n", i);
    }
    printf("n: %d\n", n);
    for(int i = n; i >= 2; i-=2){
        printf("%d Hello World!\n", i);
    }

    return 0;
}
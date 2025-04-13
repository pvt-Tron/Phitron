#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        // printf("Actual sum is: %d\n", sum);
    }
    printf("Final sum is: %d\n", sum);

    return 0;
}
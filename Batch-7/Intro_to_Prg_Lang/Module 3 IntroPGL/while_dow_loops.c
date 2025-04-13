#include<stdio.h>
int main()
{
    // printf(".");
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 0;
    while(i <= n){
        sum += i;
        // printf("Actual sum is: %d\n", sum);
        i++;
    }
    printf("Final sum is: %d\n", sum);
    int flag = 0;
    printf("i = %d\n", i);
    do{
        if (i == n + 1 && flag == 0){
            i = 0;
            printf("new sum: adding only even numbers (i = %d)\n", i);
            sum = 0;
            flag = 1;
        }
        if(i%2 == 0) sum += i;
        i++;
    }while (i <= n);
    printf("Final sum (even numbers) is: %d\n", sum);

    return 0;
}
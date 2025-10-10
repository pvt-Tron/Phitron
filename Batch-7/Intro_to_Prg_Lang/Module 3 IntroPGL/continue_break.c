#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i == 3){
            printf("continue at i = %d not added\n", i);
            continue;
        } 
        else if(i == 11){
            printf("break at i = %d not added\n", i);
            break;
        }
        else sum += i;
        // printf("Actual sum is: %d\n", sum);
    }
    printf("Final sum is: %d\n", sum);    
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 10;
    for(int i = 0; i < n; i += 1) printf("I value is: %d\n", i);
    while(n--) printf("%d ", n);
    printf("\n");
    n = 10
    int sum = 0;
    for(int i = 1; i < n; i += 1) sum += i;
    printf("Sum from 1 to %d is: %d ",n , sum);
    printf("\n");
    while(n--) if(n%2 != 0) printf("%d ", n);
    printf("\n");
    n = 10
    for(int i = 1; i < n; i += 1){
        if(i == 5) continue;
        sum += i;
        printf("Actual sum value is: %d\n", sum);
        if(i == 7) break;
    }
    printf(" Skipping 5 and breaking \n");
    printf("on 7 the Sum from 1 to %d is:\n %d",n , sum);
    
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            printf("i = %d is even\n", i);
        } 
        else{
            printf("i = %d is odd\n", i);
        }
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int j = 0; j < t; j++){
        int n;
        scanf("%d", &n);
        long long int result = 1;
        if(n == 0){
            result = 1;
        }
        else{
            for(int i = 1; i <= n; i++){
                result *= i;
            }
        }
        

        printf("%lld\n", result);
    }
    return 0;
}
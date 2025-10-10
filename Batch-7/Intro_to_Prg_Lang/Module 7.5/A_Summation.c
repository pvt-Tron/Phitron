#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1){
        long int x;
        scanf("%ld", &x);
        printf("%ld", x); 
    }
    else{
        long int arr[n];
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%ld", &arr[i]);
            sum += arr[i];
        }
        if(sum < 0) sum *= -1;

        printf("%lld", sum);//abs(sum));
    }

    
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1){
        printf("-1");
        return 0;
    }
    // int flag = 1;
    // int i = 1;
    // while(i <= n){  // 46ms
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            printf("%d\n", i);
            // if(flag) flag = 0;
        }
        // i++;
    }
    // if(flag) printf("-1");
    
    return 0;
}
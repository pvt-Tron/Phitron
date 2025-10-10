#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int num;

    while(n--){
        scanf("%lld", &num);
        do{
            printf("%lld ", num%10);
            num = num/10;
        } while(num);
        printf("\n");
    }
    return 0;
}
// int arr[10];
    // int cnt = 0;
    // int tcnt = 0;
    // while(n--){
        // while(scanf("%d", &num) != EOF){
            // scanf("%lld", &num);
            // printf("%d ", num);
            // do{
                // printf("%lld ", num%10);
                // arr[cnt] = num%10;
                // num = num/10;
                // cnt++;
                // printf("%d %d ", num, arr[cnt - 1]);
            // } while(num);
            // printf("\n");
            // for(int j = 0; j < cnt; j++){
            //     printf("%d ", arr[j]);
            // tcnt = cnt;
            // cnt = 0;
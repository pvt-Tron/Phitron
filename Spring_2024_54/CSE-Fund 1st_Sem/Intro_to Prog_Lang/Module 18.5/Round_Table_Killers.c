#include<stdio.h>
int main()
{

    int n, x, k;
    scanf("%d %d %d ", &n, &k , &x);
    int i = x%k + x + 1;
    n -= x%k;
    //printf("%d %d %d\n", i, n, i%n);
    int flag = 0;
    do{
        if(n <= i%k){
            flag = 1;
            break;
            }
        n -= i%k;
        i += i%k + 1;
        //printf("%d %d %d\n", i, n, i%k);
    } while(n > 1);
    if(flag){printf("flag %d", i);}
    else{printf("%d %d", i, n);}



    return 0;
}
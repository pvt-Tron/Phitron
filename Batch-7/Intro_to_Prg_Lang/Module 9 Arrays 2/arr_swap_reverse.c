#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int k = 1;
    int ar[n+k];
    for(int i = 0; i < n ; i++){
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < n ; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
    int pos1, pos2;
    scanf("%d%d", &pos1, &pos2);
    int tmp = ar[pos1];
    ar[pos1] = ar[pos2];
    ar[pos2] = tmp;
    for(int i = 0; i < n ; i++){
        printf("%d ", ar[i]);
    }
    int midle;
    if(n%2 != 0) midle = (n / 2) + 1;
    else midle = n / 2;
    // int tail = n;
    // for(int i = 0; i < tail ; i++){
    //     tmp = ar[tail - 1]; 
    //     ar[tail - 1] = ar[i];
    //     ar[i] = tmp;
    //     if(i == midle) break;
    //     tail--;
    // }
    int y = n - 1; 
    for(int i = 0; i < y ; i++, y--){
        tmp = ar[y]; 
        ar[y] = ar[i];
        ar[i] = tmp;
        if(i >= y) break;
    }
    printf("\n");
    for(int i = 0; i < n ; i++){
        printf("%d ", ar[i]);
    }
    return 0;
}
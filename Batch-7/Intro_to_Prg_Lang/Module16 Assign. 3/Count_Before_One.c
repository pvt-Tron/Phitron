#include<stdio.h>
int count_before_one(int *ar, int x){
    int res = 0;
    for(int i = 0; i < x; i++){
        if(ar[i] == 1) return res;
        res++;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int res = count_before_one(ar, n);
    printf("%d", res);
    return 0;
}
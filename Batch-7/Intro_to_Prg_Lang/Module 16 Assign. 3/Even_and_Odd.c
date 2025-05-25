#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int e = 0;
    int o = 0;
    for(int i = 0; i < n; i++){
        if(ar[i]%2 == 0) e++;
        else o++;
    }
    printf("%d %d", e, o);
    return;
}
int main()
{

    odd_even();
    return 0;
}
#include<stdio.h>
void eveN(int *k, int n, int i){
    if(n <= i) return;
    // scanf("%d", &k);
    if(n%2 == 0) printf("%d ", k[n]);
    eveN(k, n - 1, i);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    eveN(ar, n - 1, -1);

    return 0;
}
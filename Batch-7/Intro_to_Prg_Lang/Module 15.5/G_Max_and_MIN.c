#include<stdio.h>
#include<limits.h>
void mnmx(int *ar, int n){
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        if(mx < ar[i]) mx = ar[i];
        if(mn > ar[i]) mn = ar[i];
    }
    printf("%d %d", mn, mx);
}
int main()
{
    int n;
    scanf("%d", &n);
    int nmar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nmar[i]);
    }
    mnmx(nmar, n);

    return 0;
}
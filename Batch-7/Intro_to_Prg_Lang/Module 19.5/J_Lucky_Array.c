#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int mnOd = INT_MAX;
    for(int i = 0; i < n; i++){
        if(ar[i] < mnOd) mnOd = ar[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(mnOd == ar[i]) res++;
    }
    if(res%2 != 0) printf("Lucky");
    else printf("Unlucky");
    return 0;
}
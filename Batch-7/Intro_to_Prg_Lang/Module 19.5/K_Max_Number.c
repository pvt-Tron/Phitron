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
    int mnOd = INT_MIN;
    for(int i = 0; i < n; i++){
        if(ar[i] > mnOd) mnOd = ar[i];
    }

    printf("%d", mnOd);
    return 0;
}
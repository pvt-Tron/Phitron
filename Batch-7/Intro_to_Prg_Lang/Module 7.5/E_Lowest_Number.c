#include<stdio.h>
#include<limits.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ar[n];
    int min = INT_MAX;
    int mnp = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
        if(min > ar[i]){
            min = ar[i];
            mnp =i;
        }
    }
    printf("%d %d", min, mnp + 1);
    return 0;
}
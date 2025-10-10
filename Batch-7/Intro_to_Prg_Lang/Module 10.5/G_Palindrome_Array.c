#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int j = 0;
    int flag = 1;
    for(int i = n - 1; i >= n/2; i--){
        // if(j <= i) break;
        if(ar[i] != ar[j]){
            flag = 0;
            break;
        }
        j++;
    }
    if (flag) printf("YES");
    else printf("NO");
    
    return 0;
}
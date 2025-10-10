#include<stdio.h>
#include<limits.h>
void mnmx(int *ar, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
    
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
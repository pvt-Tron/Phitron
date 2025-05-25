#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n]; 
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int k = n - 1;
    int j = 0;
    int h = 0;
    while(1){
        if(j%2 == 0){
            printf("%d ", ar[h]);
            h++;
        } 
        else{
            printf("%d ", ar[k]);
            k--;
        }
        if(h > k) break;
        j++;
    }
    return 0;
}
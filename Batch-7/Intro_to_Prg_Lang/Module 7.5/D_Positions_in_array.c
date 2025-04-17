#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ar[n];
    // int inpt;
    // int over = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);   
    }
    for(int i = 0; i < n; i++){
        if(ar[i] > 10){
            continue;
        }
        else printf("A[%d] = %d\n", i, ar[i]);
    }
    return 0;
}
 //1001] = {0}; // printf("x%d ", inpt); // printf("i%d ", ar[i]);n -= over;
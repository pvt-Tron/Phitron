#include<stdio.h>
int* inpt(int *a, int *n, int ch){
    if(ch == 4){
        for(int i = 0 ; i < *n; i++){
            printf("%d ", *a + i);
        }
        return 0;
    }
    if(ch == 0 || ch == 2){
        scanf("%d", &n);
        if(ch == 0) return n;
    }
    else if(ch == 3){}
    // 1 2
    for(int i = 0; i < *n; i++){
        scanf("%d", &a[i]);
    }
    return a;
}
int main()
{
    int chose = 0;
    int n;
    scanf("%d", &n);
    int ar1[n];
    int nk;
    inpt(ar1, &nk, 0);
    int ar2[nk];
    int *ptr;
    ptr = &ar1;
    
    printf("%d %d\n", n, nk);
    inpt(ptr, &n, 3);
    inpt(ar1, &n, 4);
    
    return 0;
}
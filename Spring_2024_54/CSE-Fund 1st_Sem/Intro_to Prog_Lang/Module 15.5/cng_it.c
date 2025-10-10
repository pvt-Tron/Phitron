#include<stdio.h>

void cng_it(int *arr3, int x){
    arr3[x - 1] = 100;
}
int main()
{
    int n2;
    scanf("%d", &n2);
    int arr4[n2];
    for(int i = 0; i < n2; i++){
        scanf("%d ", &arr4[i]);
    }
    cng_it(arr4,n2);
    for(int i = 0; i < n2; i++){
        printf("%d", arr4[i]);
        if(i < n2 - 1){printf(" ");}
    }

    return 0;
}
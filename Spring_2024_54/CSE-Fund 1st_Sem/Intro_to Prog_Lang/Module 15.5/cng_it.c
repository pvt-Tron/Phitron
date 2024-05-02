#include<stdio.h>

int main()
{
    int n2;
    scanf("%d ", &n2);
    int arr4[n2];
    for(int i = 0; i < n2; i++){
        scanf("%d ", &arr4[i]);
        printf("%d ", arr4[n2]);
    }

    for(int i = 0; i < n2; i++){
        printf("%d", arr4[n2]);
        if(i < n2 - 1){printf(" ");}
    }

    return 0;
}
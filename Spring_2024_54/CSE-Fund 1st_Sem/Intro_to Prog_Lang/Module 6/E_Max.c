#include<stdio.h>
int main()
{
    int n, num1, max1 = 0;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d ", &num1);
        if(max1 < num1){max1 = num1;}
    }
    printf("%d", max1);
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ar1[n];
    char nu;
    // printf(".");
    scanf("%c", &nu);
    for(int i = 0; i < n; i++){
        scanf("%c", &nu);
        ar1[i] = nu;
    }
    // for(int i = 0; i < n; i++){
    //     printf("%c* ", ar1[i]);
    // }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (ar1[i] - 48);
    }
    printf("%d", sum);
    return 0;
}
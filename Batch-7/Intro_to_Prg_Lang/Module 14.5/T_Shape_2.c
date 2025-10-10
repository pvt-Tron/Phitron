#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int stars = 0;
    int spaces = n - 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n + stars; j++){
            if(j < spaces) printf(" ");
            else printf("*");
        }
        spaces--;
        stars++;
        printf("\n");
    }
    return 0;
}
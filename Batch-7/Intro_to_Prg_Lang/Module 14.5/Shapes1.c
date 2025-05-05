#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spaces = n - 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(j < spaces) printf(" ");
            else printf("*");
        }
        spaces--;
        printf("\n");
    }
    return 0;
}
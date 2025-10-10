#include<stdio.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    int j1 = n1;
    int k1 = n1 * 2 - 1;
    for(int i = 1; i <= n1; i++){
        
        for(int x = j1; x < n1; x++){
            printf(" ");
        }
        for(int y = 1; y <= k1; y++){
            printf("*");
        }

        if(i < n1){printf("\n");}
        j1--;
        k1 -= 2;
    }
    return 0;
}
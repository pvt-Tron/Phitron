#include<stdio.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    int sp1 = n1 - 1;
    int ax1 = 0;
    int i;
    for(i = 1; i <= n1; i++){
        for(int j = sp1; j > 0; j--){
            printf(" ");
        }
        for(int x = 0; x <= ax1; x++){
            printf("*");
        }
        sp1--;
        ax1 += 2;
        if(i < n1){printf("\n");}
    }
    printf("\n");
    ax1 = (n1 * 2) - 2;
    sp1 = 0;

    for(i = 1; i <= n1; i++){
        for(int j = sp1; j > 0; j--){
            printf(" ");
        }
        for(int x = 0; x <= ax1; x++){
            printf("*");
        }
        sp1++;
        ax1 -= 2;
        if(i < n1){printf("\n");}
    }
    return 0;
}
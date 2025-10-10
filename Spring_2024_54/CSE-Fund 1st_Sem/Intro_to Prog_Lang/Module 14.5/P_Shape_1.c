#include<stdio.h>
int main()
{
    int n1,k2;
    scanf("%d", &n1);
    int i = 1;
    for(i = n1 - 1; i >= 0; i--){
        k2 = i;
        while(k2 >= 0){
            printf("*");
            k2--;
        }
        if(i > 0){printf("\n");}
    }

    return 0;
}
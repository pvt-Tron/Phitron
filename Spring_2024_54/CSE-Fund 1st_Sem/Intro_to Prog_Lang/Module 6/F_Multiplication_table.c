#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 12; i++){
        printf("%d * %d = %d", n, i, (n * i));
        if(i < 12){printf("\n");}
        else{break;}
    }
    
    return 0;
}
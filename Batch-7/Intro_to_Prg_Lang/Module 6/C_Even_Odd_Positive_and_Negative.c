#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int num;
    int e = 0, o = 0, p = 0, n = 0;
    for(int i = 0; i < m; i++){
        scanf("%d", &num);
        if(num%2 == 0) e++;
            else o++;
        if(num != 0){
            if(num > 0) p++;
            else n++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", e, o, p, n);
    return 0;
}
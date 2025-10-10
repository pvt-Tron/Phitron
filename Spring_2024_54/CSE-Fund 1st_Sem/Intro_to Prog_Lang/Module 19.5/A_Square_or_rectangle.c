#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int b, h;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &b, &h);
        if(b == h){printf("Square");}
        else{printf("Rectangle");}
        if(i < n -1){printf("\n");}
    }
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n != 0) printf("Non ");
    printf("Zero\n");
    n = 0;
    scanf("%d", &n);
    printf("%d\n", n + 5);
    int a, b;
    scanf("%d %d", &a, &b);
    if(a%b == 0 || b%a == 0) printf("Yes");
    else printf("No");
    printf("\n");
    float x;
    scanf("%f", &x);
    printf("%.3f", x);
    printf("\n");
    return 0;
}
#include<stdio.h>
int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    int ai = a;
    int bi = b;
    int ci = c;
    printf("%d %d %d\n", ai, bi, ci);
    printf("%c %c %c\n", a - 32, b + 32, c + 32);
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%c", &ar[i]);
        int x = ar[i];
        printf("%d %d %c\n", ar[i], x, ar[i] + 32);
    }
    return 0;
}
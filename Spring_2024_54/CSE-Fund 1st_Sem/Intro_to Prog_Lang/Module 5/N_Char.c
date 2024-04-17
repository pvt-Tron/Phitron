#include<stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if(n > 64 && n < 90) printf("%c", n + 32);
    else printf("%c", n - 32);
    return 0;
}
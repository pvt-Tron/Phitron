#include<stdio.h>
int main()
{

    long long int a, b, c, d;
    int flag = 0;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    
    if(a - b + c == d || a + b - c == d || a + b * c == d || a - b * c == d) flag = 1;
    else if(a * b - c - d == 0 || a * c + b - d == 0 || a * c + b == d) flag = 1;
    
    if(flag) printf("YES");
    else printf("NO");
    // printf(">%d ", a * b + (- c));
    
    return 0;
}